#include "openform.hpp"
#include "ui_openform.h"
#include <QFileDialog>

openform::openform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::openform)

{
    ui->setupUi(this);
}

openform::~openform()
{
    delete ui;
}

void openform::on_openFileBox_activated(const QString &arg1)
{

}
