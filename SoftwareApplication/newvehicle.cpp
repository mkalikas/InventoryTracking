#include "newvehicle.hpp"
#include "ui_newvehicle.h"
#include <QFileDialog>
#include<QMessageBox>
#include<QFile>

newvehicle::newvehicle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newvehicle)
{
    ui->setupUi(this);
}

newvehicle::~newvehicle()
{
    delete ui;
}

void newvehicle::on_pushButton_save_clicked()
{
     QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "", tr("Vehicle Files (*.txt);; All Files (*.*)"));
     if(fileName.isEmpty ())
         return;
     else {
         QFile file(fileName);

         if(!file.open(QIODevice::WriteOnly)) {
             QMessageBox::information(this, tr("Cannot open file"), file.errorString());
             return;
         }

         QDataStream out(&file);
         out.setVersion (QDataStream::Qt_4_8);
         out << files;
     }
}

void newvehicle::on_pushButton_cancel_clicked()
{
    QDialog::close();
}

void newvehicle::load_data() {

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


            return;
        }
    }
}
