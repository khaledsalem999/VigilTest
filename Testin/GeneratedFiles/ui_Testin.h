/********************************************************************************
** Form generated from reading UI file 'TestinHp8512.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TESTINHP8512_H
#define TESTINHP8512_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestinClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSlider *XSlider;
    QPushButton *ResetParam;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_7;
    QSlider *WidthSlider;
    QSlider *GroupThresholdSlider;
    QLabel *label_2;
    QPushButton *AddRegion;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_8;
    QSlider *NumLevelsSlider;
    QLabel *viewer;
    QSlider *HeightSlider;
    QSlider *YSlider;
    QLabel *label_10;
    QSlider *HitThresholdSlider;
    QLabel *label_11;
    QComboBox *comboBox;
    QSlider *ScaleFactorSlider;
    QLabel *NumLevelValue;
    QLabel *HitThresholdValue;
    QLabel *GroupThresholdValue;
    QLabel *ScaleFactorValue;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestinClass)
    {
        if (TestinClass->objectName().isEmpty())
            TestinClass->setObjectName(QStringLiteral("TestinClass"));
        TestinClass->resize(718, 589);
        centralWidget = new QWidget(TestinClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        XSlider = new QSlider(centralWidget);
        XSlider->setObjectName(QStringLiteral("XSlider"));
        XSlider->setMinimum(0);
        XSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(XSlider, 5, 0, 1, 1);

        ResetParam = new QPushButton(centralWidget);
        ResetParam->setObjectName(QStringLiteral("ResetParam"));

        gridLayout->addWidget(ResetParam, 0, 1, 1, 1);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 7, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 4, 0, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 7, 1, 1, 1);

        WidthSlider = new QSlider(centralWidget);
        WidthSlider->setObjectName(QStringLiteral("WidthSlider"));
        WidthSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(WidthSlider, 8, 0, 1, 1);

        GroupThresholdSlider = new QSlider(centralWidget);
        GroupThresholdSlider->setObjectName(QStringLiteral("GroupThresholdSlider"));
        GroupThresholdSlider->setMinimum(1);
        GroupThresholdSlider->setMaximum(10);
        GroupThresholdSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(GroupThresholdSlider, 8, 3, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        AddRegion = new QPushButton(centralWidget);
        AddRegion->setObjectName(QStringLiteral("AddRegion"));

        gridLayout->addWidget(AddRegion, 0, 0, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 4, 2, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 4, 3, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 7, 2, 1, 1);

        NumLevelsSlider = new QSlider(centralWidget);
        NumLevelsSlider->setObjectName(QStringLiteral("NumLevelsSlider"));
        NumLevelsSlider->setMinimum(1);
        NumLevelsSlider->setMaximum(20);
        NumLevelsSlider->setValue(5);
        NumLevelsSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(NumLevelsSlider, 5, 2, 1, 1);

        viewer = new QLabel(centralWidget);
        viewer->setObjectName(QStringLiteral("viewer"));
        viewer->setMouseTracking(false);
        viewer->setAutoFillBackground(true);
        viewer->setFrameShape(QFrame::Box);
        viewer->setFrameShadow(QFrame::Plain);
        viewer->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(viewer, 1, 0, 1, 5);

        HeightSlider = new QSlider(centralWidget);
        HeightSlider->setObjectName(QStringLiteral("HeightSlider"));
        HeightSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HeightSlider, 8, 1, 1, 1);

        YSlider = new QSlider(centralWidget);
        YSlider->setObjectName(QStringLiteral("YSlider"));
        YSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(YSlider, 5, 1, 1, 1);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 2, 0, 1, 2);

        HitThresholdSlider = new QSlider(centralWidget);
        HitThresholdSlider->setObjectName(QStringLiteral("HitThresholdSlider"));
        HitThresholdSlider->setMinimum(1);
        HitThresholdSlider->setMaximum(99);
        HitThresholdSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HitThresholdSlider, 8, 2, 1, 1);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 2, 2, 1, 2);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 3, 1, 1);

        ScaleFactorSlider = new QSlider(centralWidget);
        ScaleFactorSlider->setObjectName(QStringLiteral("ScaleFactorSlider"));
        ScaleFactorSlider->setMinimum(9);
        ScaleFactorSlider->setMaximum(12);
        ScaleFactorSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ScaleFactorSlider, 5, 3, 1, 1);

        NumLevelValue = new QLabel(centralWidget);
        NumLevelValue->setObjectName(QStringLiteral("NumLevelValue"));
        sizePolicy.setHeightForWidth(NumLevelValue->sizePolicy().hasHeightForWidth());
        NumLevelValue->setSizePolicy(sizePolicy);
        NumLevelValue->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(NumLevelValue, 3, 2, 1, 1);

        HitThresholdValue = new QLabel(centralWidget);
        HitThresholdValue->setObjectName(QStringLiteral("HitThresholdValue"));
        sizePolicy.setHeightForWidth(HitThresholdValue->sizePolicy().hasHeightForWidth());
        HitThresholdValue->setSizePolicy(sizePolicy);
        HitThresholdValue->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(HitThresholdValue, 6, 2, 1, 1);

        GroupThresholdValue = new QLabel(centralWidget);
        GroupThresholdValue->setObjectName(QStringLiteral("GroupThresholdValue"));
        GroupThresholdValue->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(GroupThresholdValue, 6, 3, 1, 1);

        ScaleFactorValue = new QLabel(centralWidget);
        ScaleFactorValue->setObjectName(QStringLiteral("ScaleFactorValue"));
        ScaleFactorValue->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ScaleFactorValue, 3, 3, 1, 1);

        TestinClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestinClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 718, 26));
        TestinClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestinClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TestinClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestinClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TestinClass->setStatusBar(statusBar);

        retranslateUi(TestinClass);

        QMetaObject::connectSlotsByName(TestinClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestinClass)
    {
        TestinClass->setWindowTitle(QApplication::translate("TestinClass", "Testin", Q_NULLPTR));
        ResetParam->setText(QApplication::translate("TestinClass", "Reset Parameters", Q_NULLPTR));
        label_9->setText(QApplication::translate("TestinClass", "GroupThreshold", Q_NULLPTR));
        label->setText(QApplication::translate("TestinClass", "X", Q_NULLPTR));
        label_7->setText(QApplication::translate("TestinClass", "Height", Q_NULLPTR));
        label_2->setText(QApplication::translate("TestinClass", "Y", Q_NULLPTR));
        AddRegion->setText(QApplication::translate("TestinClass", "Add New Region", Q_NULLPTR));
        label_5->setText(QApplication::translate("TestinClass", "Region Color : ", Q_NULLPTR));
        label_6->setText(QApplication::translate("TestinClass", "Width", Q_NULLPTR));
        label_3->setText(QApplication::translate("TestinClass", "NumLevels", Q_NULLPTR));
        label_4->setText(QApplication::translate("TestinClass", "ScaleFactor", Q_NULLPTR));
        label_8->setText(QApplication::translate("TestinClass", "HitThreshold", Q_NULLPTR));
        viewer->setText(QApplication::translate("TestinClass", "Camera Feed", Q_NULLPTR));
        label_10->setText(QApplication::translate("TestinClass", "Region Of Interest Settings", Q_NULLPTR));
        label_11->setText(QApplication::translate("TestinClass", "Detection Settings", Q_NULLPTR));
        NumLevelValue->setText(QApplication::translate("TestinClass", "TextLabel", Q_NULLPTR));
        HitThresholdValue->setText(QApplication::translate("TestinClass", "TextLabel", Q_NULLPTR));
        GroupThresholdValue->setText(QApplication::translate("TestinClass", "TextLabel", Q_NULLPTR));
        ScaleFactorValue->setText(QApplication::translate("TestinClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TestinClass: public Ui_TestinClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TESTINHP8512_H
