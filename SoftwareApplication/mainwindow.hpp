#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include "newvehicle.hpp"
#include "openform.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    newvehicle *v;
    openform *o;

private slots:


    void on_actionNew_Vehicle_triggered();
    void on_actionQuit_triggered();

    void on_actionOpen_2_triggered();
};

#endif // MAINWINDOW_HPP
