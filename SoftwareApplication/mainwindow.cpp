#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_actionNew_Vehicle_triggered()
{
    v = new newvehicle(this);
    v->show();
}

void MainWindow::on_actionQuit_triggered()
{
    MainWindow::close();
}



void MainWindow::on_actionOpen_2_triggered()
{
    o = new openform(this);
    o->show();
}
