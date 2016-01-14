#ifndef EMPLOYEEREPOSITORY_H
#define EMPLOYEEREPOSITORY_H

#include "employee.h"
//#include "cinemabuildingrepertoirschedule.h"

#include <QtSql>
#include <QDebug>
#include <QString>
#include <QTableView>

class EmployeeRepository
{
public:
    QSqlDatabase db;
    QSqlQueryModel *qmodel;

    EmployeeRepository();
    ~EmployeeRepository();

    bool findEmployee(QString &name, QString &surname, QString &username, QString &password);
    QString findbuilding(QString login, QString password);
    QString refreshscheduleotherdays(QString building, QString date);
    QString refreshscheduletoday(QString building, QString date, QString time);
    void changePassword(QString username, QString newpassword);

};
#endif // EMPLOYEEREPOSITORY_H
