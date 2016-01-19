#ifndef EMPLOYEEREPOSITORY_H
#define EMPLOYEEREPOSITORY_H

#include <QString>
#include "employee.h"
#include "building.h"
#include "buildingrepository.h"

//#include "databaseconnection.h"
//#include "cinemabuildingrepertoirschedule.h"

#include <QtSql>
#include <QDebug>
#include <QString>

class EmployeeRepository
{
    //Building *building;
    //Employee *employee;

public:
    //QSqlDatabase db;
    //QSqlQueryModel *qmodel;

    EmployeeRepository();
    ~EmployeeRepository();

    bool findEmployee(QString username,QString password);
<<<<<<< HEAD
    Employee getEmployee(QString username);
    void changePassword(QString username, QString newpassword);

    // bool findEmployee(QString &name, QString &surname, QString &username, QString &password);
   // QString findbuilding(QString login, QString password);
    //QString refreshscheduleotherdays(QString building, QString date);
    //QString refreshscheduletoday(QString building, QString date, QString time);
    //void changePassword(QString username, QString newpassword);
=======
    Employee* getEmployee(QString username);
    void changePassword(QString username, QString newpassword);
    QString findbuilding(QString username, QString password);
    QString refreshscheduleotherdays(QString building, QString date);
    QString refreshscheduletoday(QString building, QString date, QString time);
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
};
#endif // EMPLOYEEREPOSITORY_H
