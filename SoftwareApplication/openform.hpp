#ifndef OPENFORM_HPP
#define OPENFORM_HPP

#include <QDialog>

namespace Ui {
class openform;
}

class openform : public QDialog
{
    Q_OBJECT

public:
    explicit openform(QWidget *parent = 0);
    ~openform();

private slots:
    void on_openFileBox_activated(const QString &arg1);

private:
    Ui::openform *ui;
};

#endif // OPENFORM_HPP
