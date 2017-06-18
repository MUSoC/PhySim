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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QAction *actionReset;
    QAction *actionExport;
    QAction *actionPlay;
    QAction *actionStop;
    QAction *actionQuit;
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
    QListWidget *listWidget;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Simulator)
    {
        if (Simulator->objectName().isEmpty())
            Simulator->setObjectName(QStringLiteral("Simulator"));
        Simulator->setWindowModality(Qt::NonModal);
        Simulator->resize(715, 549);
        actionReset = new QAction(Simulator);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        actionReset->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral("icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset->setIcon(icon);
        actionExport = new QAction(Simulator);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("icons/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport->setIcon(icon1);
        actionPlay = new QAction(Simulator);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("icons/button_play_green.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon2);
        actionStop = new QAction(Simulator);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("icons/media_playback_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon3);
        actionQuit = new QAction(Simulator);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon4);
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
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 300, 81, 91));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 280, 91, 17));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(580, 110, 131, 21));
        Simulator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Simulator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 715, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setEnabled(true);
        Simulator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Simulator);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Simulator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Simulator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Simulator->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionReset);
        menuFile->addAction(actionExport);
        menuFile->addAction(actionPlay);
        menuFile->addAction(actionStop);
        menuFile->addAction(actionQuit);
        mainToolBar->addAction(actionPlay);
        mainToolBar->addAction(actionStop);
        mainToolBar->addAction(actionQuit);

        retranslateUi(Simulator);

        QMetaObject::connectSlotsByName(Simulator);
    } // setupUi

    void retranslateUi(QMainWindow *Simulator)
    {
        Simulator->setWindowTitle(QApplication::translate("Simulator", "Simulator", Q_NULLPTR));
        actionReset->setText(QApplication::translate("Simulator", "Reset", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReset->setToolTip(QApplication::translate("Simulator", "Reset all the settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionExport->setText(QApplication::translate("Simulator", "Export", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionExport->setToolTip(QApplication::translate("Simulator", "Export the animation as a video file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPlay->setText(QApplication::translate("Simulator", "Play", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPlay->setToolTip(QApplication::translate("Simulator", "Start the animation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionStop->setText(QApplication::translate("Simulator", "Stop", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionStop->setToolTip(QApplication::translate("Simulator", "Stop the animation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionQuit->setText(QApplication::translate("Simulator", "Quit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("Simulator", "Quit the Simulator", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("Simulator", "Stop", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Simulator", "Start", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Simulator", "Cube", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Simulator", "Pyramid", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("Simulator", "Sphere", Q_NULLPTR));
        label->setText(QApplication::translate("Simulator", "Choose Shape:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Simulator", "xRot", Q_NULLPTR));
        label_3->setText(QApplication::translate("Simulator", "yRot", Q_NULLPTR));
        label_4->setText(QApplication::translate("Simulator", "zRot", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Simulator", "Bouncing", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Simulator", "Collision", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Simulator", "Bursting", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Simulator", "Rolling", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Simulator", "Rotating", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_5->setText(QApplication::translate("Simulator", "Select Action:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Simulator", "Adjust Orientation:", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("Simulator", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Simulator: public Ui_Simulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATOR_H
