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
#include "newclientaccountform.h"
#include "reservationwindow.h"
#include "numberreservedtickets.h"

//#include "employee.h"
//#include "client.h"
//#include "clientrepository.h"
//#include "reservation.h"

class LoginWindow;
class NewClientAccountForm;
class AccountManager
{
    //Building *building;
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

    //void runprogram(QString name, QString surname, QString username, QString password);
    //bool log_in (QString &name, QString &surname, QString &username, QString &password);
    //void log_out();


};

#endif // ACCOUNTMANAGER_H
