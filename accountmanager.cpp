#include "accountmanager.h"

AccountManager::AccountManager()
{

}
AccountManager::~AccountManager()
{

}
void AccountManager::show()
{
    LoginWindow *loginwindow=new LoginWindow();
    loginwindow->show();
}
void AccountManager::show2()
{
    LoginWindow2 *loginwindow2=new LoginWindow2();
    loginwindow2->show();
}
void AccountManager::showScheduleWindow(Employee *e)
{
    ScheduleWindow *schedulewindow=new ScheduleWindow(e);
    schedulewindow->show();
}
bool AccountManager::login(QString username, QString password)
{
    EmployeeRepository er;
    if(!er.findEmployee(username, password))
    {
       return false;
    }
    else
    {
        EmployeeRepository ER;
        Employee employee = ER.getEmployee(username);
        Employee *e = new Employee(employee.getName(), employee.getSurname(), employee.getUsername(), employee.getPassword());
        ScheduleWindow *schedulewindow=new ScheduleWindow(e);
        schedulewindow->show();
        return true;
    }
}
void AccountManager::ShowEmployeeDataForm(Employee *e)
{
    EmployeeDataForm *employeedataform=new EmployeeDataForm(e);
    employeedataform->show();
}
void AccountManager::ShowSearchclientwindow(Employee *e)
{
    SearchClientWindow *searchclientwindow = new SearchClientWindow(e);
    searchclientwindow->show();
}
void AccountManager::ShowNewAccountForm(Employee *e, QString building)
{
    NewClientAccountForm *newclientaccountform = new NewClientAccountForm(building, e);
    newclientaccountform->show();
}

void AccountManager::ShowReservation(Employee *e)
{
    ReservationWindow *reservationwindow = new ReservationWindow(e);
    reservationwindow->show();
}
