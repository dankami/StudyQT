#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //测试打印
    QDesktopWidget* d=QApplication::desktop();
    qDebug()<<"屏幕的宽 = "<<QDesktopWidget().widthMM ()<<"mm";
    qDebug()<<"屏幕的高 = "<<QDesktopWidget().heightMM()<<"mm";
    qDebug()<<"分辨率宽 = "<<d->width();
    qDebug()<<"分辨率高 = "<<d->height();

    //开启socekt
    QTcpServer *tcpServer;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QCursor qCursor;
    qCursor.setPos(100, 100);
}
