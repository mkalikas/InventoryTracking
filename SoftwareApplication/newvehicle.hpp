#ifndef NEWVEHICLE_HPP
#define NEWVEHICLE_HPP

#include <QDialog>
#include <QAbstractButton>
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

    void on_okButton_accepted();

    void on_saveButton_accepted();



private:
    Ui::newvehicle *ui;
};

#endif // NEWVEHICLE_HPP
