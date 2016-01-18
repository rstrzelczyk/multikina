#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(AccountManager *am, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    this->am=am;
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


    if(!am->login(username, password))
    {
        ui->label_info->setText("Błędny login lub hasło.");
    }
    else
    {
        //LoginWindow::hide();
        //ui->label_info->setText("dobre haslo");
    }
}
