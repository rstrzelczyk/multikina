#include "accountmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);

   QSqlDatabase database;
   database = QSqlDatabase:: addDatabase ("QMYSQL");
   database.setHostName("localhost");
   database.setDatabaseName("multikina");
   database.setUserName("root");
   database.setPassword("");
   database.open();

   AccountManager login;
   //login.show();

   return a.exec();
}
