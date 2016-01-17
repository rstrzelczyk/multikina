#ifndef LOGINWINDOW2_H
#define LOGINWINDOW2_H

#include <QMainWindow>

#include"accountmanager.h"

namespace Ui {
class LoginWindow2;
}

class LoginWindow2 : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit LoginWindow2(QWidget *parent = 0);
    ~LoginWindow2();

private slots:
    void on_pushButtonlog_in_clicked();

private:
    Ui::LoginWindow2 *ui;
};

#endif // LOGINWINDOW2_H
