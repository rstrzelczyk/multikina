#ifndef CLIENTREPOSITORY_H
#define CLIENTREPOSITORY_H

#include <QtSql>
#include <QDebug>
#include <QString>
#include <QList>
<<<<<<< HEAD

#include "client.h"
=======
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b

#include "client.h"
class Client;
class ClientRepository
{
public:
    //QSqlDatabase db;
    //QSqlQueryModel *qmodel;

    ClientRepository();
    ~ClientRepository();

<<<<<<< HEAD
    QList<Client> searchClient(QString username, QString name, QString surname);

    //QString ShowClientList();
   //QString ShowReservationList();
=======
    QString searchClient(QString username, QString name, QString surname);
    QString searchClient2(QString username, QString name, QString surname);
    QString searchClient3(QString username, QString name, QString surname);
    QString ShowClientList();
    QString ShowReservationList();
    bool isEmailUsed(QString email);
    //void save(Client *client, Building *build, QString discount);
    void save(Client *client);
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
};

#endif // CLIENTREPOSITORY_H
