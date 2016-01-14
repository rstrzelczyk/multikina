#include "employeerepository.h"
#include <QTableView>

EmployeeRepository::EmployeeRepository()
{
    db = QSqlDatabase:: addDatabase ("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("multikina");
    db.setUserName("root");
    db.setPassword("");
}

EmployeeRepository::~EmployeeRepository()
{
    db.close();
}

bool EmployeeRepository::findEmployee(QString &name, QString &surname, QString &username, QString &password)
{
    if(db.open())
    {
        QSqlQuery query;
               if(query.exec("SELECT imie, nazwisko, login, haslo FROM pracownik WHERE login=\'"+ username +
                                          "\' AND haslo=\'" + password + "\'"))
               {
                    if(query.next())
                    {
                         name = query.value(0).toString();
                         surname = query.value(1).toString();
                         username = query.value(2).toString();
                         password = query.value(3).toString();
                         return true;
                     }
                     else
                     {
                        return false;
                     }
               }
      }
      else
      {
          qDebug()<<"Brak połączenia z bazą danych";
          return false;
      }
}

QString EmployeeRepository::findbuilding(QString username, QString password)
{
    QString buildname ="";
    if(db.open())
    {
       QSqlQuery query2;
       if(query2.exec("SELECT budynek.nazwabudynku FROM budynek LEFT JOIN pracownik ON (pracownik.idBudynku=budynek.idBudynku) WHERE login=\'"+ username +
                          "\' AND haslo=\'" + password + "\'"))
        {
             while(query2.next())
             {
                 buildname = query2.value(0).toString();
             }
        }
    }
    else
    {
        qDebug()<<"Brak połączenia z bazą danych";
    }
    return buildname;
}

void EmployeeRepository::changePassword(QString username, QString newpassword)
{
    if(db.open())
    {
       QSqlQuery query3;
       query3.exec("UPDATE pracownik SET haslo = '" + newpassword + "\' WHERE pracownik.login =\'" + username + "\'");

    }
    else
    {
        qDebug()<<"Brak połączenia z bazą danych";
    }
}

QString EmployeeRepository::refreshscheduletoday(QString building, QString date, QString time)
{
    //QString sql_select = "SELECT film.tytul, seans.godzina, seans.data FROM film RIGHT JOIN seans ON (film.idFilmu=seans.Film_idFilmu) LEFT JOIN sala_kinowa ON (seans.idSali_Kinowej = sala_kinowa.idSali_Kinowej) LEFT JOIN budynek ON (sala_kinowa.idBudynku = budynek.idBudynku)";
    QString sql_select = "SELECT film.tytul, seans.godzina, seans.data FROM film RIGHT JOIN seans ON (film.idFilmu=seans.Film_idFilmu) LEFT JOIN sala_kinowa ON (seans.idSali_Kinowej = sala_kinowa.idSali_Kinowej) LEFT JOIN budynek ON (sala_kinowa.idBudynku = budynek.idBudynku)";
    sql_select += "WHERE budynek.nazwabudynku = '";
    sql_select += building +"'";
    sql_select += " AND seans.data = '";
    sql_select += date + "'";
    sql_select += " AND seans.godzina >= '";
    sql_select += time + "'";
    sql_select += "GROUP BY film.tytul, seans.data, seans.godzina" ;
  return sql_select;
}

QString EmployeeRepository::refreshscheduleotherdays(QString building, QString date)
{
    QString sql_select = "SELECT film.tytul, seans.godzina, seans.data FROM film RIGHT JOIN seans ON (film.idFilmu=seans.Film_idFilmu) LEFT JOIN sala_kinowa ON (seans.idSali_Kinowej = sala_kinowa.idSali_Kinowej) LEFT JOIN budynek ON (sala_kinowa.idBudynku = budynek.idBudynku)";
    sql_select += "WHERE budynek.nazwabudynku = '";
    sql_select += building +"'";
    sql_select += " AND seans.data = '";
    sql_select += date + "'";
    sql_select += "GROUP BY film.tytul, seans.data, seans.godzina" ;
  return sql_select;
}
