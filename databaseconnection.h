#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include<QString>
#include <QtSql>
#include <QDebug>
#include <QString>

class DataBaseConnection
{
public:
    static DataBaseConnection database;
    static bool connected;
    static void connect();
    static void execute();
    DataBaseConnection();
    ~DataBaseConnection();
};

 bool DataBaseConnection::connected=false;

 static void connect()
 {
     QSqlDatabase database;
     database = QSqlDatabase:: addDatabase ("QMYSQL");
     database.setHostName("localhost");
     database.setDatabaseName("multikina");
     database.setUserName("root");
     database.setPassword("");
     database.open();
 }
 static void execute()
 {
     if (DataBaseConnection::connected==false)
     {
         DataBaseConnection::connect();
         DataBaseConnection::connected=true;
     }
 }

#endif // DATABASECONNECTION_H
