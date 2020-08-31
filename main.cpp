#include "mainwindow.h"

#include <QDebug>
#include <QDesktopWidget>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QDesktopWidget* d=QApplication::desktop();

    qDebug()<<"屏幕的宽 = "<<QDesktopWidget().widthMM ()<<"mm";

    qDebug()<<"屏幕的高 = "<<QDesktopWidget().heightMM()<<"mm";

    qDebug()<<"分辨率宽 = "<<d->width();

    qDebug()<<"分辨率高 = "<<d->height();

    MainWindow w;
    w.show();


    return a.exec();
}
