#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>
#include <QResource>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString file = "/home/ayushmalviya27/Desktop/Physics-Sim/PhySim/animation_builds/CubeDance";
    QProcess::startDetached(file);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString file = "/home/ayushmalviya27/Desktop/Physics-Sim/PhySim/animation_builds/CubeRotate";
    QProcess::startDetached(file);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString file = "/home/ayushmalviya27/Desktop/Physics-Sim/PhySim/animation_builds/RollingBall";
    QProcess::startDetached(file);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString file = "/home/ayushmalviya27/Desktop/Physics-Sim/PhySim/animation_builds/BallBounce";
    QProcess::startDetached(file);
}

void MainWindow::on_pushButton_5_clicked()
{
    QApplication::quit();
}
