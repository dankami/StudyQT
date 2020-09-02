#include "wsocketwindow.h"
#include "ui_wsocketwindow.h"

WSocketWindow::WSocketWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WSocketWindow)
{
    ui->setupUi(this);



}

WSocketWindow::~WSocketWindow()
{
    delete ui;
}
