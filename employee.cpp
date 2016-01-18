#include "employee.h"

Employee::Employee(QString name, QString surname, QString username, QString password, Building *building)
{
    this->name = name;
    this->surname = surname;
    this->username = username;
    this->password = password;
    this->building = building;
}

QString Employee::getName()
{
    return name;
}

QString Employee::getSurname()
{
    return surname;
}

QString Employee::getUsername()
{
   return username;
}

QString Employee::getPassword()
{
    return password;
}

//QString Employee::setName(QString Name){return name;}
//QString Employee::setSurname(QString Surname){return surname;}
//QString Employee::setUsername(QString Username){return username;}
//QString Employee::setPassword(QString Password){return password;}
