#ifndef CLIENTREPOSITORY_H
#define CLIENTREPOSITORY_H

#include <QtSql>
#include <QDebug>
#include <QString>

class ClientRepository
{
public:
    QSqlDatabase db;
    QSqlQueryModel *qmodel;

    ClientRepository();
    ~ClientRepository();

    QString ShowClientList();
    QString ShowReservationList();
};

#endif // CLIENTREPOSITORY_H
