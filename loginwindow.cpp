#include "loginwindow.h"
#include "ui_loginwindow.h"

<<<<<<< HEAD
LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
=======
LoginWindow::LoginWindow(AccountManager *am, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    this->am=am;
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
    ui->setupUi(this);   
    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo->setPixmap(pix);
    setWindowTitle(tr("Multikina"));
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButtonlog_in_clicked()
{
    QString username = ui->lineEdit_login->text();
    QString password = ui->lineEdit_password->text();

<<<<<<< HEAD
    AccountManager am;

    if(!am.login(username, password))
=======

    if(!am->login(username, password))
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
    {
        ui->label_info->setText("Błędny login lub hasło.");
    }
    else
    {
<<<<<<< HEAD
        LoginWindow::hide();
        ui->label_info->setText("dobre haslo");
=======
        //LoginWindow::hide();
        //ui->label_info->setText("dobre haslo");
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
    }
}
