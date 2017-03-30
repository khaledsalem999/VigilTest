#include "Testin.h"

Testin::Testin(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	bool backprojMode = false;
	bool selectObject = false;
	int trackObject = 0;
	bool showHist = true;
	Point origin;
	Rect selection;
	int vmin = 10, vmax = 256, smin = 30;

	ui.XSlider->setMaximum(840);
	ui.XSlider->setMinimum(1);
	ui.YSlider->setMaximum(480);
	ui.YSlider->setMinimum(1);
	ui.WidthSlider->setMaximum(840);
	ui.WidthSlider->setMinimum(1);
	ui.HeightSlider->setMaximum(480);
	ui.HeightSlider->setMinimum(1);


	capture.open("C://latest.mov");
	capture.set(CV_CAP_PROP_FRAME_WIDTH, 840);
	capture.set(CV_CAP_PROP_FRAME_WIDTH, 480);

	if (!capture.isOpened())
	{
		printf("--(!)Error opening video capture\n");
	}

	tmrTimer = new QTimer(this);
	connect(tmrTimer, SIGNAL(timeout()), this, SLOT(detectAndDisplay()));
	tmrTimer->start(20);

}


void Testin::detectAndDisplay() {
	capture.read(frame);
	//GPU HOG
	cv::Ptr<cv::cuda::HOG> gpu_hog;
	cuda::GpuMat gpu_img;

	vector<Rect> found, found_filtered;

	Rect RoI(ui.XSlider->value(), ui.YSlider->value(), ui.WidthSlider->value(), ui.HeightSlider->value());

	Mat img_aux;
	cv::resize(frame, frame, Size(840, 480));
	cvtColor(frame, img_aux, COLOR_BGR2BGRA);

	//GPU HoG
	gpu_hog = cv::cuda::HOG::create(Size(48, 48 * 2), Size(16, 16), Size(8, 8), Size(8, 8), 9);
	gpu_hog->setSVMDetector(gpu_hog->getDefaultPeopleDetector());

	//Hog params
	gpu_img.upload(img_aux);
	gpu_hog->setNumLevels(ui.NumLevelsSlider->value());
	QString NumLevValue = QString::number(ui.NumLevelsSlider->value());
	ui.NumLevelValue->setText(NumLevValue);
	gpu_hog->setHitThreshold(ui.HitThresholdSlider->value()/10);
	QString HitThresValue = QString::number(ui.HitThresholdSlider->value() / 10);
	ui.HitThresholdValue->setText(HitThresValue);
	gpu_hog->setWinStride(Size(8, 8));
	gpu_hog->setScaleFactor(1.05);
	gpu_hog->setGroupThreshold(ui.GroupThresholdSlider->value());
	QString GroupThresValue = QString::number(ui.GroupThresholdSlider->value());
	ui.GroupThresholdValue->setText(GroupThresValue);
	gpu_hog->detectMultiScale(gpu_img, found_filtered);

	rectangle(frame, RoI, cv::Scalar(255, 0, 0), 3, 8, 0);

	//cvMeanShift(const* void imgProp,);


	/*for (size_t i = 0; i < found.size(); i++)
	{
	Rect r = found[i];
	rectangle(frame, r.tl(), r.br(), Scalar(0, 255, 0), 3);
	}*/


	for (size_t i = 0; i < found_filtered.size(); i++)
	{
		Rect C, r = found_filtered[i];

		// The HOG detector returns slightly larger rectangles than the real objects,
		// so we slightly shrink the rectangles to get a nicer output.
		r.x += cvRound(r.width*0.1);
		r.width = cvRound(r.width*0.8);
		r.y += cvRound(r.height*0.07);
		r.height = cvRound(r.height*0.8);

		C = r | RoI;

		if (C == r || C == RoI) {
			rectangle(frame, r.tl(), r.br(), cv::Scalar(0, 255, 0), 3);
		}
	}

	//-- Show what you got
	//imshow("Anti-thieft stuff", frame);

	cvtColor(frame, frame, CV_BGR2RGB);
	QImage VFrame((uchar*)frame.data,frame.cols,frame.rows,frame.step, QImage::Format_RGB888);
	ui.viewer->setPixmap(QPixmap::fromImage(VFrame));
}
