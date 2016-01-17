#include "newclientaccountform.h"
#include "ui_newclientaccountform.h"

#include <iostream>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include<QChar>

NewClientAccountForm::NewClientAccountForm(QString building, Employee *e,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewClientAccountForm)
{
    ui->setupUi(this);
    setWindowTitle(tr("Multikina"));
    //ui->pushButton_ok->setEnabled(false);

    connect(ui->lineEdit_telephone, SIGNAL(textChanged(QString)), this, SLOT(isValidPhoneNumberFormat()));
    connect(ui->label_email, SIGNAL(textChanged()), this, SLOT(isValidEmailFormat()));
    connect(ui->lineEdit_password_2, SIGNAL(textChanged(QString)), this, SLOT (isValidPasswordFormat()));
    connect(ui->lineEdit_confirnpassword, SIGNAL(textChanged(QString)),this, SLOT (isPassword2SameAsPassword()));

       // connect(ui->lineEdit_telephone, SIGNAL(textChanged(QString)), this, SLOT(AllObligatoryDataWritten()));
       // connect(ui->label_email, SIGNAL(textChanged()), this, SLOT(AllObligatoryDataWritten()));
       // connect(ui->lineEdit_password_2, SIGNAL(textChanged(QString)), this, SLOT (AllObligatoryDataWritten()));
       // connect(ui->lineEdit_confirnpassword, SIGNAL(textChanged(QString)),this, SLOT (AllObligatoryDataWritten()));

    ui->pushButton_senior_discount->setEnabled(true);
    ui->pushButton_confitm_student_discount->setEnabled(true);
    ui->lineEdit_building->setText(building);
    ui->lineEdit_validtelephone->setStyleSheet("color: red");
    ui->lineEdit_validtelephone->setVisible((false));
    ui->lineEdit_validemail->setStyleSheet("color: red");
    ui->lineEdit_validemail->setVisible((false));
    ui->lineEdit_validpass->setStyleSheet("color: red");
    ui->lineEdit_validpass->setVisible((false));
    ui->lineEdit_validpass2->setStyleSheet("color: red");
    ui->lineEdit_validpass2->setVisible((false));
    ui->lineEdit_building->setText(building);
}

NewClientAccountForm::~NewClientAccountForm()
{
    delete ui;
}

void NewClientAccountForm::on_pushButton_ok_clicked()
{

}

void NewClientAccountForm::on_pushButton_choose_building_clicked()
{

}

void NewClientAccountForm::on_pushButton_confitm_student_discount_clicked()
{
    ui->pushButton_senior_discount->setEnabled(false);
}

void NewClientAccountForm::on_pushButton_senior_discount_clicked()
{
    ui->pushButton_confitm_student_discount->setEnabled(false);
}










bool NewClientAccountForm::isValidPasswordFormat()
{
    QString password = ui->lineEdit_password_2->text();
    if(password.size()<8)
    {
        ui->lineEdit_validpass->setVisible(true);
        return false;
    }
   else
    {
        ui->lineEdit_validpass->setVisible(false);
        return true;
    }
}

bool NewClientAccountForm::isPassword2SameAsPassword()
{
    QString password = ui->lineEdit_password_2->text();
    QString password2 = ui->lineEdit_confirnpassword->text();

    if (password.length()==password2.length())
    {
        for(int i=0; i<password.length()-1;i++)
        {
            if(password[i]!=password2[i])
            {
                ui->lineEdit_validpass2->setVisible(true);
                return false;
            }
            else
            {
                ui->lineEdit_validpass2->setVisible(false);
                return true;
            }
        }
    }
    else
    {
        ui->lineEdit_validpass2->setVisible(true);
        return false;
    }
}

bool NewClientAccountForm::isValidPhoneNumberFormat()
{
   ui->lineEdit_telephone->setValidator(new QIntValidator(ui->lineEdit_telephone));

   QString phonenumber=ui->lineEdit_telephone->text();
   if(ui->lineEdit_telephone->text().isEmpty())
   {
       ui->lineEdit_validtelephone->setVisible(false);
   }
   else if (!phonenumber[(phonenumber.size())].isDigit())
   {
            ui->lineEdit_validtelephone->setVisible(false);
   }
    else
    {
        ui->lineEdit_validtelephone->setVisible(true);
    }
}

//bool NewClientAccountForm::isValidEmailFormat()
//{
 //   return false;
//}








