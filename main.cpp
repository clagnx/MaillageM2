#include "mainwindow.h"
#include <QApplication>
#include <point.h>

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

  /*  Point p = Point(0.0,1.2, 2.5);
    Point p2 = p;
    std::cout<<p2.getZ()<<std::endl;*/

    return a.exec();
}
