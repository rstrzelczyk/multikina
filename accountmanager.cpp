#include "accountmanager.h"

AccountManager::AccountManager()
{

}

bool AccountManager::log_in(QString &name, QString &surname, QString &username, QString &password)
{
   EmployeeRepository er;

   if (er.findEmployee(name, surname, username, password))
   {
       return true;
   }
   else
   {
       return false;
   }
}

//void AccountManager::log_out()
//{
    //  MainWindow w;
 //  w.show();
//}

void AccountManager::runprogram(QString name, QString surname, QString username, QString password)
{
    employee = new Employee(name,surname,username,password);

    CinemaBuildingRepertoirSchedule *cinemabuildingrepertoirschedule = new CinemaBuildingRepertoirSchedule(employee);
    cinemabuildingrepertoirschedule->exec();
    delete cinemabuildingrepertoirschedule;

}

void AccountManager::ShowSearchclientwindow(Employee *e)
{
    employee = e;
    SearchClientWindow *searchclientwindow = new SearchClientWindow(employee);
    searchclientwindow->exec();
    delete searchclientwindow;
}

void AccountManager::ShowNewAccountForm(Employee *e, QString building)
{
    employee = e;
    NewClientAccountForm *newclientaccountform = new NewClientAccountForm(building, employee);
    newclientaccountform->exec();
    delete newclientaccountform;
}

void AccountManager::ShowReservation(Employee *e)
{
    employee = e;
    Reservation *reservation = new Reservation(employee);
    reservation->exec();
    delete reservation;
}

void AccountManager::ShowEmployeeDataForm(Employee *e)
{
    employee = e;
    EmployeeDataForm *employeedataform = new EmployeeDataForm(employee);
    employeedataform->exec();
    delete employeedataform;
}

void AccountManager::ShowNumberReservedTickets()
{
    NumberReservedTickets *numberreservedtickets = new NumberReservedTickets();
    numberreservedtickets->exec();
    delete numberreservedtickets;
}
