#ifndef CLIENTREPOSITORY_H
#define CLIENTREPOSITORY_H

#include <QtSql>
#include <QDebug>
#include <QString>
#include <QList>

#include "client.h"
class Client;
class ClientRepository
{
public:
    //QSqlDatabase db;
    //QSqlQueryModel *qmodel;

    ClientRepository();
    ~ClientRepository();

    QString searchClient(QString username, QString name, QString surname);
    QString searchClient2(QString username, QString name, QString surname);
    QString searchClient3(QString username, QString name, QString surname);
    QString ShowClientList();
    QString ShowReservationList();
    bool isEmailUsed(QString email);
    //void save(Client *client, Building *build, QString discount);
    void save(Client *client);
};

#endif // CLIENTREPOSITORY_H
