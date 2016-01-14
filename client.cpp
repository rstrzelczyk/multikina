#include "client.h"

Client::Client(QString name, QString surname, int telephonenumber, QString email, QString password)
{
    this->name = name;
    this->surname = surname;
    this->telephonenumber = telephonenumber;
    this->email = email;
    this->password = password;
}

QString Client::getName()
{
    return name;
}

QString Client::getSurname()
{
    return surname;
}

int Client::getTelephonenumber()
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
