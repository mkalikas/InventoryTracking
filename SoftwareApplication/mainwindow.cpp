#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "newvehicle.hpp"
#include <QFileDialog>
#include <QMessageBox>

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
    QString file = QFileDialog::getOpenFileName (this, tr("Open File"), "", "All Files (*.*);;Vehicle File (*.txt)");

    if(file.isEmpty ())
        return;
    else {
        QFile f(file);

        if(!f.open (QIODevice::ReadOnly)) {
            QMessageBox::information (this, tr("Cannot Open File"), f.errorString());
            return;
        }
        QDataStream in(&f);
        in.setVersion (QDataStream::Qt_4_8);
        files.empty ();
        in >> files;

        if(files.isEmpty ()) {
            QMessageBox::information (this, tr("No Information in File"), tr("The file you want to open does not have any information"));
        }
        else {
           // QMap<QString, QString>::iterator it = files.begin ();

           return;
        }
    }
}



