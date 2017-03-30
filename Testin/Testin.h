#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Testin.h"

#include <cvimagewidget.h>
#include <qtimer.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include <opencv2/core/utility.hpp>
#include "opencv2/cudaobjdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/imgproc.hpp"

using namespace std;
using namespace cv;

class Testin : public QMainWindow
{
	Q_OBJECT

public:
	Testin(QWidget *parent = Q_NULLPTR);

private:
	Ui::TestinClass ui;
	VideoCapture capture;
	Mat frame;
	QImage VFrame;
	QTimer* tmrTimer;
	bool backprojMode;
	bool selectObject;
	int trackObject;
	bool showHist;
	Point origin;
	Rect selection;
	int vmin;
	int vmax;
	int smin;
	Mat src; 
	Mat hsv; 
	Mat hue;
	int bins = 25;

public slots:
	void detectAndDisplay();

};