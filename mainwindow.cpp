#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo->setPixmap(pix);

    setWindowTitle(tr("Multikina"));
}

MainWindow::~MainWindow()
{
    delete ui;

}

//void MainWindow::on_pushButtonlog_in_clicked()
//{
   // QString name = "";
    //QString surname= "";
    //QString username;
    //QString password;

   // username = ui->lineEdit_login->text();
   // password = ui->lineEdit_password->text();

   // AccountManager accountmanager;
   // if (accountmanager.log_in (name, surname, username, password))
   // {
     //   accountmanager.runprogram(name, surname, username, password);
     //   ui->lineEdit_login->setText("");
     //   ui->lineEdit_password->setText("");
     //   ui->label_info->setText("");
   // }
   // else
   // {
        //ui->label_info->setText("Błędny login lub hasło.");
        //ui->lineEdit_password->setText("");
    //}
//}

