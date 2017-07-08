#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <QMainWindow>

namespace Ui {
class Simulator;
}

class Simulator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Simulator(QWidget *parent = 0);
    ~Simulator();

private slots:
    void on_actionQuit_triggered();

    void on_pushButton_clicked();

    void on_pushButton_pressed();

    void on_pushButton_clicked(bool checked);

    void on_pushButton_2_clicked(bool checked);

private:
    Ui::Simulator *ui;
};

#endif // SIMULATOR_H
