#ifndef WSOCKETWINDOW_H
#define WSOCKETWINDOW_H

#include <QMainWindow>

namespace Ui {
class WSocketWindow;
}

class WSocketWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WSocketWindow(QWidget *parent = nullptr);
    ~WSocketWindow();

private:
    Ui::WSocketWindow *ui;
};

#endif // WSOCKETWINDOW_H
