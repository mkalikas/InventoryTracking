#include "newvehicle.hpp"
#include "ui_newvehicle.h"

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


void newvehicle::on_okButton_clicked(QAbstractButton *button)
{

}
