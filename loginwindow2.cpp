#include "loginwindow2.h"
#include "ui_loginwindow2.h"

LoginWindow2::LoginWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow2)
{
    ui->setupUi(this);
    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo->setPixmap(pix);
    setWindowTitle(tr("Multikina"));
}

LoginWindow2::~LoginWindow2()
{
    delete ui;
}

void LoginWindow2::on_pushButtonlog_in_clicked()
{
    QString username = ui->lineEdit_login->text();
    QString password = ui->lineEdit_password->text();

    AccountManager am;

    if(!am.login(username, password))
    {
        ui->label_info->setText("Błędny login lub hasło.");
    }
    else
    {
        LoginWindow2::hide();
        ui->label_info->setText("dobre haslo");
    }
}

