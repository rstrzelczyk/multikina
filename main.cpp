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
<<<<<<< HEAD
   login.show();
=======
   //login.show();
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b

   return a.exec();
}
