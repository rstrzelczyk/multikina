#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H

#include <QDialog>

#include "loginwindow.h"
#include "loginwindow2.h"
#include "schedulewindow.h"
#include "employeerepository.h"
#include "employee.h"
#include "employeedataform.h"
#include "searchclientwindow.h"
//#include "newclientaccountform.h"



//#include "employee.h"
//#include "client.h"

//#include "clientrepository.h"
//#include "employeerepository.h"

//#include "mainwindow.h"
//#include "cinemabuildingrepertoirschedule.h"

//#include "searchclientwindow.h"
//#include "newclientaccountform.h"
//#include "reservation.h"
//#include "numberreservedtickets.h"
//#include "employeedataform.h"

//#include "client.h"

//#include "employeerepository.h"

class AccountManager
{
    //Building *building;

    //Client *client;
    //ClientRepository *clientrepository;
    //EmployeeRepository *employeerepository;

public:
    AccountManager();
    ~AccountManager();

    void show();
    void show2();
    bool login(QString username, QString password);
    void ShowEmployeeDataForm(Employee *e);
    void showScheduleWindow(Employee *e);
    void ShowSearchclientwindow(Employee *e);

    //void runprogram(QString name, QString surname, QString username, QString password);
    //bool log_in (QString &name, QString &surname, QString &username, QString &password);
    //void log_out();


    //void ShowNewAccountForm(Employee *e, QString building);
    //void ShowReservation(Employee *e);
    //void ShowNumberReservedTickets();
};

#endif // ACCOUNTMANAGER_H
