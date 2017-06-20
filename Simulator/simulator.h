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

private:
    Ui::Simulator *ui;
};

#endif // SIMULATOR_H
