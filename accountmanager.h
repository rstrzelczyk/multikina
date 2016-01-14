#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H

#include <QDialog>

#include "employee.h"
#include "client.h"

#include "clientrepository.h"
#include "employeerepository.h"

#include "mainwindow.h"
#include "cinemabuildingrepertoirschedule.h"

#include "searchclientwindow.h"
#include "newclientaccountform.h"
#include "reservation.h"
#include "numberreservedtickets.h"
#include "employeedataform.h"

#include "client.h"

#include "employeerepository.h"

class AccountManager
{

    Employee *employee;
    Building *building;

    Client *client;
    ClientRepository *clientrepository;
    EmployeeRepository *employeerepository;

public:
    AccountManager();

    void runprogram(QString name, QString surname, QString username, QString password);
    bool log_in (QString &name, QString &surname, QString &username, QString &password);
    //void log_out();

    void ShowSearchclientwindow(Employee *e);
    void ShowNewAccountForm(Employee *e, QString building);
    void ShowReservation(Employee *e);
    void ShowEmployeeDataForm(Employee *e);
    void ShowNumberReservedTickets();
};

#endif // ACCOUNTMANAGER_H
