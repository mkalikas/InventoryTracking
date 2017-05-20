#ifndef NEWVEHICLE_HPP
#define NEWVEHICLE_HPP

#include <QDialog>
#include <QMap>

namespace Ui {
class newvehicle;
}

class newvehicle : public QDialog
{
    Q_OBJECT

public:
    explicit newvehicle(QWidget *parent = 0);
    void load_data();
    ~newvehicle();

private slots:

    void on_pushButton_save_clicked();

    void on_pushButton_cancel_clicked();


private:
    Ui::newvehicle *ui;
    QMap<QString, QString> files;
};

#endif // NEWVEHICLE_HPP
