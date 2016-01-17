#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>

#include"accountmanager.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();
    
private slots:
    void on_pushButtonlog_in_clicked();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
