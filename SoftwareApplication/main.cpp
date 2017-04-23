#include "mainwindow.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication program(argc, argv);
    QApplication::setApplicationDisplayName("Inventory Tracking");
    MainWindow w;
    w.setWindowTitle ("Main Window");
    w.show();

    return program.exec();
}
