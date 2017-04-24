#include "newvehicle.hpp"
#include "ui_newvehicle.h"
#include <QFileDialog>
#include <QDialogButtonBox>
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

void newvehicle::on_okButton_accepted()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "C://", tr("All Files (*.*)"));
    newvehicle::close();
}

void newvehicle::on_saveButton_accepted()
{
     QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "C://", tr("All Files (*.*)"));
}
