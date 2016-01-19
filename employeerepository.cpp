#include "employeerepository.h"

#include <QTableView>

EmployeeRepository::EmployeeRepository()
{

}

EmployeeRepository::~EmployeeRepository()
{

}

bool EmployeeRepository::findEmployee(QString username, QString password)
{
    QString query = "SELECT imie, nazwisko, login, haslo FROM pracownik WHERE login=\'" + username + "\' AND haslo=\'" + password + "\'";
    QSqlQuery sqlquery;
    if(sqlquery.exec(query))
    {
        if(sqlquery.next())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

Employee EmployeeRepository::getEmployee(QString username)
{
    QString name;
    QString surname;
    QString password;
    QString cinemaname;
    QString street;
    QString city;

    QString query = "SELECT pracownik.imie, pracownik.nazwisko, pracownik.login, pracownik.haslo, budynek.nazwabudynku, budynek.ulica, budynek.miasto FROM pracownik LEFT JOIN budynek ";
    query += "ON (budynek.idBudynku=pracownik.idBudynku) WHERE login=\'" + username + "\'";
    //QString query = "SELECT imie, nazwisko, login, haslo FROM pracownik WHERE login=\'" + username + "\'";
    QSqlQuery sqlquery;
    if(sqlquery.exec(query))
    {
        if(sqlquery.next())
        {
            name = sqlquery.value(0).toString();
            surname = sqlquery.value(1).toString();
            username = sqlquery.value(2).toString();
            password = sqlquery.value(3).toString();
            cinemaname = sqlquery.value(4).toString();
            street = sqlquery.value(5).toString();
            city = sqlquery.value(6).toString();
         }
    }
    //building = new Building(city,cinemaname,street);
    //BuildingRepository BR;
    //Schedule schedule =
    //BR.getSchedule(building);
    Employee employee = Employee(name,surname,username,password);
    return employee;
}

void EmployeeRepository::changePassword(QString username, QString newpassword)
{
    QString query = "UPDATE pracownik SET haslo = '" + newpassword + "\' WHERE pracownik.login =\'" + username + "\'";
    QSqlQuery sqlquery;
    sqlquery.exec(query);
}
