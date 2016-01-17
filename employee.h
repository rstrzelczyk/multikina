#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

#include "building.h"

class Employee
{
    QString name;
    QString surname;
    QString username;
    QString password;

public:
    Building *building;

    Employee(QString name, QString surname, QString username, QString password);

    QString getName();
    QString getSurname();
    QString getUsername();
    QString getPassword();

    //QString setName(QString Name);
    //QString setSurname(QString Surname);
    //QString setUsername(QString Username);
    //QString setPassword(QString Password);

};

#endif // EMPLOYEE_H
