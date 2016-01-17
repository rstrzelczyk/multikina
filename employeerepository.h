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
    Employee getEmployee(QString username);
    void changePassword(QString username, QString newpassword);
    QString findbuilding(QString username, QString password);
    QString refreshscheduleotherdays(QString building, QString date);
    QString refreshscheduletoday(QString building, QString date, QString time);
};
#endif // EMPLOYEEREPOSITORY_H
