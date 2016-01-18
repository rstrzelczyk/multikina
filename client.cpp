#include "client.h"

Client::Client(QString name, QString surname, QString telephonenumber, QString email, QString password, Building *building)
{
    this->name = name;
    this->surname = surname;
    this->telephonenumber = telephonenumber;
    this->email = email;
    this->password = password;
    this->building=building;
}

QString Client::getName()
{
    return name;
}

QString Client::getSurname()
{
    return surname;
}

QString Client::getTelephonenumber()
{
   return telephonenumber;
}

QString Client::getEmail()
{
   return email;
}

QString Client::getPassword()
{
    return password;
}
 void Client::ConfirmAccount()
 {
     save();
 }
 void Client::save()
 {
      ClientRepository CR;
      CR.save(this);
 }
