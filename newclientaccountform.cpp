#include "newclientaccountform.h"
#include "ui_newclientaccountform.h"

#include <iostream>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include<QChar>

NewClientAccountForm::NewClientAccountForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewClientAccountForm)
{
    ui->setupUi(this);
   // employee=e;
    setWindowTitle(tr("Multikina"));    
    ui->pushButton_ok->setEnabled(false);
    ui->pushButton_senior_discount->setEnabled(true);
    ui->pushButton_confitm_student_discount->setEnabled(true);
    //ui->lineEdit_building->setText(building);
    ui->lineEdit_validtelephone->setStyleSheet("color: red");
    ui->lineEdit_validtelephone->setVisible((false));
    ui->lineEdit_validemail->setStyleSheet("color: red");
    ui->lineEdit_validemail->setVisible((false));
    ui->lineEdit_validemail_format->setStyleSheet("color: red");
    ui->lineEdit_validemail_format->setVisible((false));
    ui->lineEdit_validpass->setStyleSheet("color: red");
    ui->lineEdit_validpass->setVisible((false));
    ui->lineEdit_validpass2->setStyleSheet("color: red");
    ui->lineEdit_validpass2->setVisible((false));
    //ui->lineEdit_building->setText(building);
}

NewClientAccountForm::~NewClientAccountForm()
{
    delete ui;
}

void NewClientAccountForm::on_pushButton_ok_clicked()
{
    QString discount;
    QString name = ui->lineEdit_name->text();
    QString surname = ui->lineEdit_surname->text();
    QString email = ui->lineEdit_email->text();
    int telephone = ui->lineEdit_telephone->text().toInt();
    QString password = ui->lineEdit_password_2->text();
    QString building = ui->lineEdit_building->text();
    if(!ui->pushButton_confitm_student_discount->isEnabled())
    {
        discount="senior";
    }
    if(!ui->pushButton_senior_discount->isEnabled())
    {
        discount="student";
    }
    Client *client = new Client (name, surname, telephone, email, password);
    Building *build = new Building ("",building,"");

    ClientRepository CR;
    CR.save(client, build, discount);

    QSqlQuery sqlquery;
    QString query = "INSERT INTO `klient` ( `imie`, `nazwisko`, `email`, `telefon`, `haslo`, `Status_konta`, `budynek`, `znizka`) VALUES ('" + client->getName() + "', '"+ client->getSurname() +"', '"+ client->getEmail() +"', '"+ client->getTelephonenumber() +"', '"+ client->getPassword() +"', 'nieaktywny', '"+ build->getCinemaname() +"', '"+ discount +"')";
    sqlquery.exec(query);
    sqlquery.next();

    NewClientAccountForm::close();
    ClientAccauntForm *clientform = new ClientAccauntForm(client, build, employee, discount, "nieaktywny",0);
    clientform->show();

}

void NewClientAccountForm::on_pushButton_choose_building_clicked()
{
    BuildingList *buildinglist = new BuildingList();
    buildinglist->exec();
    delete buildinglist;
}

void NewClientAccountForm::on_pushButton_confitm_student_discount_clicked()
{
    ui->pushButton_senior_discount->setEnabled(false);
}

void NewClientAccountForm::on_pushButton_senior_discount_clicked()
{
    ui->pushButton_confitm_student_discount->setEnabled(false);
}
bool NewClientAccountForm::AllObligatoryDataWritten()
{
    if (ui->lineEdit_name->text().isEmpty() || ui->lineEdit_surname->text().isEmpty() || ui->lineEdit_telephone->text().isEmpty() || ui->lineEdit_email->text().isEmpty() ||
            ui->lineEdit_password_2->text().isEmpty() || ui->lineEdit_confirnpassword->text().isEmpty())
    {
        ui->pushButton_ok->setEnabled(false);
        return false;
    }
    else
    {
       if(isValidPasswordFormat() && isValidPhoneNumberFormat()&& isValidEmailFormat()&& isPassword2SameAsPassword())
       {
           ui->pushButton_ok->setEnabled(true);
           return true;
       }
       else
       {
            ui->pushButton_ok->setEnabled(false);
            return false;
       }
    }
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

bool NewClientAccountForm::isValidEmailFormat()
{
    QString email = ui->lineEdit_email->text();
    int numberchar = 0;
    int numberdots = 0;
    for(int i=0; i<email.size();i++)
    {
        if(email[i]=='@')
        {
            numberchar++;
        }
        if(email[i]=='.')
        {
            numberdots++;
        }
    }
    if(numberchar==1&& (numberdots==1 || numberdots ==2))
    {
        ui->lineEdit_validemail_format->setVisible(false);
        AccountManager AM;
        if(AM.checkEmailExists(email))
        {
            ui->lineEdit_validemail->setVisible(true);
            return false;
        }
        else
        {
            ui->lineEdit_validemail->setVisible(false);
            return true;
        }
    }
    else
    {
        ui->lineEdit_validemail_format->setVisible(true);
        return false;
    }
}

void NewClientAccountForm::on_lineEdit_password_2_textChanged(const QString &arg1)
{
    isValidPasswordFormat();
    AllObligatoryDataWritten();
}
void NewClientAccountForm::on_lineEdit_confirnpassword_textEdited(const QString &arg1)
{
    isPassword2SameAsPassword();
    AllObligatoryDataWritten();
}

void NewClientAccountForm::on_lineEdit_email_textChanged(const QString &arg1)
{
    AllObligatoryDataWritten();
}

void NewClientAccountForm::on_lineEdit_telephone_textEdited(const QString &arg1)
{
    isValidPhoneNumberFormat();
    AllObligatoryDataWritten();
}

void NewClientAccountForm::on_lineEdit_name_textEdited(const QString &arg1)
{
    ui->lineEdit_name->setValidator(new QRegExpValidator(ui->lineEdit_name));
    AllObligatoryDataWritten();
}

void NewClientAccountForm::on_lineEdit_surname_textEdited(const QString &arg1)
{
    //ui->lineEdit_telephone->setValidator(new QIntValidator(ui->lineEdit_telephone));
    AllObligatoryDataWritten();
}

void NewClientAccountForm::on_lineEdit_email_editingFinished()
{
    isValidEmailFormat();
    AllObligatoryDataWritten();
}
void NewClientAccountForm::setBuilding(Building *b)
{
    ui->lineEdit_building->setText(b->getCinemaname());
}

void NewClientAccountForm::showWindow(Employee* e)
{
    employee=e;
    ui->lineEdit_building->setText(e->building->getCinemaname());
    this->show();
}
