#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //测试打印
    QDesktopWidget* d=QApplication::desktop();
    qDebug()<<QString::fromUtf8("屏幕的宽 = ") << QDesktopWidget().widthMM ()<<"mm";
    qDebug()<<u8"屏幕的高 = "<<QDesktopWidget().heightMM()<<"mm";
    qDebug()<<u8"分辨率宽 = "<<d->width();
    qDebug()<<u8"分辨率高 = "<<d->height();

    //开启socekt
    tcpServer = new QTcpServer(this);
    qDebug()<<"ip = "<< QHostAddress::Any;
    if(!tcpServer->listen(QHostAddress::Any,6666))
    {  //本地主机的6666端口，如果出错就输出错误信息，并关闭
        qDebug() << tcpServer->errorString();
        close();
    }
    //连接信号和相应槽函数
    connect(tcpServer, &QTcpServer::newConnection, this, &MainWindow::onNewConnection);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::onNewConnection()
{
    //连接成功显示
    ui->statusLabel->setText("connect successful!!!");
    //我们获取已经建立的连接的子套接字
    QTcpSocket *clientConnection = tcpServer->nextPendingConnection();

    connect(clientConnection, &QTcpSocket::disconnected, clientConnection, &QTcpSocket::deleteLater);
    connect(clientConnection, &QTcpSocket::readyRead, [=](){
        QByteArray inBlock;
        QDataStream in(&inBlock, QIODevice::ReadOnly);
        in.setVersion(QDataStream::Qt_4_6);
        QString str;
        in >> str;

        //发送文字
        QByteArray block; //用于暂存我们要发送的数据
        QDataStream out(&block, QIODevice::WriteOnly); //使用数据流写入数据
        //设置数据流的版本，客户端和服务器端使用的版本要相同
        out.setVersion(QDataStream::Qt_4_6);
        out << (quint16) 0;
        out << "server:" << str;
        out.device()->seek(0);
        out << (quint16) (block.size() - sizeof(quint16));
        clientConnection->write(block);
    //    clientConnection->disconnectFromHost();

    });







}

void MainWindow::onReadyRead()
{

}

void MainWindow::sendMessage(QTcpSocket *clientConnection)
{

}




void MainWindow::on_pushButton_clicked()
{
    QCursor qCursor;
    qCursor.setPos(100, 100);
}
