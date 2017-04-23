#ifndef NEWVEHICLE_HPP
#define NEWVEHICLE_HPP

#include <QDialog>

namespace Ui {
class newvehicle;
}

class newvehicle : public QDialog
{
    Q_OBJECT

public:
    explicit newvehicle(QWidget *parent = 0);
    ~newvehicle();

private slots:

private:
    Ui::newvehicle *ui;
};

#endif // NEWVEHICLE_HPP
