#include "accountmanager.h"

AccountManager::AccountManager()
{
    loginWindow=new LoginWindow(this);
    loginWindow->show();
    newclientaccountform = new NewClientAccountForm(this);
}
AccountManager::~AccountManager()
<<<<<<< HEAD
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












/*bool AccountManager::log_in(QString &name, QString &surname, QString &username, QString &password)
=======
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
{

}
void AccountManager::show()
{
    //loginWindow=new LoginWindow(this);
    loginWindow->show();
}
void AccountManager::show2()
{
    LoginWindow2 *loginwindow2=new LoginWindow2();
    loginwindow2->show();
}
void AccountManager::showScheduleWindow(Employee *e)
{
    ScheduleWindow *schedulewindow=new ScheduleWindow(this,e);
    schedulewindow->show();
    loginWindow->hide();
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
        employee = ER.getEmployee(username);
        showScheduleWindow(employee);
        //ScheduleWindow *schedulewindow=new ScheduleWindow(this,employee);
        //schedulewindow->show();
        loginWindow->hide();
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
void AccountManager::ShowNewAccountForm()
{

    newclientaccountform->showWindow(employee);
}

void AccountManager::ShowReservation(Employee *e)
{
    ReservationWindow *reservationwindow = new ReservationWindow(e);
    reservationwindow->show();
}
bool AccountManager::checkEmailExists(QString email)
{
    ClientRepository CR;
    if(CR.isEmailUsed(email))
    {
        return true;
    }
    else
    {
        return false;
    }
}
<<<<<<< HEAD
*/
=======
 void AccountManager::ShowNumberReservedTickets(Employee *e)
 {
     NumberReservedTickets *numberreservedtickets = new NumberReservedTickets(e);
     numberreservedtickets->show();
 }
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
