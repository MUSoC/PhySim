#include "simulator.h"
#include "ui_simulator.h"

Simulator::Simulator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Simulator)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Bouncing");
    ui->comboBox->addItem("Rolling");
    ui->comboBox->addItem("Collision");
    ui->comboBox->addItem("Rotation");
}

Simulator::~Simulator()
{
    delete ui;
}

void Simulator::on_actionQuit_triggered()
{
    QApplication::quit();
}

