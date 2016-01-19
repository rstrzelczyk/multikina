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
<<<<<<< HEAD
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
=======
#include "newclientaccountform.h"
#include "reservationwindow.h"
#include "numberreservedtickets.h"

//#include "employee.h"
//#include "client.h"
//#include "clientrepository.h"
//#include "reservation.h"
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b

class LoginWindow;
class NewClientAccountForm;
class AccountManager
{
    //Building *building;
<<<<<<< HEAD

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

=======
    Employee* employee;
    Client *client;
    //ClientRepository *clientrepository;
    //EmployeeRepository *employeerepository;
private:
    LoginWindow* loginWindow;
    NewClientAccountForm *newclientaccountform;
public:
    AccountManager();
    ~AccountManager();

    void show();
    void show2();
    bool login(QString username, QString password);
    void ShowEmployeeDataForm(Employee *e);
    void showScheduleWindow(Employee *e);
    void ShowSearchclientwindow(Employee *e);
    void ShowNewAccountForm();
    void ShowReservation(Employee *e);
    bool checkEmailExists(QString email);
    void ShowNumberReservedTickets(Employee *e);

>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
    //void runprogram(QString name, QString surname, QString username, QString password);
    //bool log_in (QString &name, QString &surname, QString &username, QString &password);
    //void log_out();


<<<<<<< HEAD
    //void ShowNewAccountForm(Employee *e, QString building);
    //void ShowReservation(Employee *e);
    //void ShowNumberReservedTickets();
=======
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
};

#endif // ACCOUNTMANAGER_H
