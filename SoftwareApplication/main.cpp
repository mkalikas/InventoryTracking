#include "mainwindow.hpp"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication program(argc, argv);
    QDesktopWidget d;
    MainWindow w;
    int wi = d.width() * 0.7;
    int h = d.height() * 0.7;
    w.setFixedSize(wi, h);
    w.show();

    return program.exec();
}
