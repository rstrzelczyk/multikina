#ifndef CLIENT_H
#define CLIENT_H

#include "building.h"
#include "discount.h"
#include "card.h"
#include "clientrepository.h"

#include<QString>

class Client
{
    QString name;
    QString surname;
    QString telephonenumber;
    QString email;
    QString password;


    Building *building;
    Discount *discount;
    Card *card;

    enum Client_state {valid, invalid, blocked, none };


public:
    Client(QString name, QString surname, QString telephonenumber, QString email, QString password, Building *building);

    QString getName();
    QString getSurname();
    QString getTelephonenumber();
    QString getEmail();
    QString getPassword();

    void ConfirmAccount();
    void save();
};

#endif // CLIENT_H
