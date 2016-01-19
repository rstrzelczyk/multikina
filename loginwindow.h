#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>

<<<<<<< HEAD
#include"accountmanager.h"

=======
#include "accountmanager.h"
class AccountManager;
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT
    
public:
<<<<<<< HEAD
    explicit LoginWindow(QWidget *parent = 0);
=======
    explicit LoginWindow(AccountManager* am,QWidget *parent = 0);
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
    ~LoginWindow();
    
private slots:
    void on_pushButtonlog_in_clicked();

private:
    Ui::LoginWindow *ui;
<<<<<<< HEAD
=======
    AccountManager* am;
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
};

#endif // LOGINWINDOW_H
