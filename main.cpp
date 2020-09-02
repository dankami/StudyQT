#include "mainwindow.h"
#include "wsocketwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    MainWindow w;
//    w.show();

    WSocketWindow w;
    w.show();

    return a.exec();
}
