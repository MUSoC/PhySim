/********************************************************************************
** Form generated from reading UI file 'simulator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATOR_H
#define UI_SIMULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Simulator
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QOpenGLWidget *openGLWidget;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label;
    QSlider *verticalSlider;
    QSlider *verticalSlider_2;
    QSlider *verticalSlider_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Simulator)
    {
        if (Simulator->objectName().isEmpty())
            Simulator->setObjectName(QStringLiteral("Simulator"));
        Simulator->resize(715, 549);
        centralWidget = new QWidget(Simulator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 420, 61, 21));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 420, 71, 21));
        openGLWidget = new QOpenGLWidget(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(120, 40, 441, 361));
        openGLWidget->setAutoFillBackground(false);
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(0, 130, 112, 23));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(0, 170, 81, 21));
        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(0, 210, 71, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 100, 101, 31));
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(600, 140, 16, 160));
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider_2 = new QSlider(centralWidget);
        verticalSlider_2->setObjectName(QStringLiteral("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(640, 140, 16, 160));
        verticalSlider_2->setOrientation(Qt::Vertical);
        verticalSlider_3 = new QSlider(centralWidget);
        verticalSlider_3->setObjectName(QStringLiteral("verticalSlider_3"));
        verticalSlider_3->setGeometry(QRect(680, 140, 16, 160));
        verticalSlider_3->setOrientation(Qt::Vertical);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(590, 310, 31, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(630, 310, 31, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(670, 310, 31, 17));
        Simulator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Simulator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 715, 22));
        Simulator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Simulator);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Simulator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Simulator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Simulator->setStatusBar(statusBar);

        retranslateUi(Simulator);

        QMetaObject::connectSlotsByName(Simulator);
    } // setupUi

    void retranslateUi(QMainWindow *Simulator)
    {
        Simulator->setWindowTitle(QApplication::translate("Simulator", "Simulator", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Simulator", "Stop", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Simulator", "Start", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Simulator", "Cube", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Simulator", "Pyramid", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("Simulator", "Sphere", Q_NULLPTR));
        label->setText(QApplication::translate("Simulator", "Choose Shape:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Simulator", "xRot", Q_NULLPTR));
        label_3->setText(QApplication::translate("Simulator", "yRot", Q_NULLPTR));
        label_4->setText(QApplication::translate("Simulator", "zRot", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Simulator: public Ui_Simulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATOR_H
