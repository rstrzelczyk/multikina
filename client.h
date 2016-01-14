#ifndef CLIENT_H
#define CLIENT_H

#include "building.h"
#include "discount.h"
#include "card.h"

#include<QString>

class Client
{
    QString name;
    QString surname;
    int telephonenumber;
    QString email;
    QString password;


    Building *building;
    Discount *discount;
    Card *card;

    enum Client_state {valid, invalid, blocked, none };


public:
    Client(QString name, QString surname, int telephonenumber, QString email, QString password);

    QString getName();
    QString getSurname();
    int getTelephonenumber();
    QString getEmail();
    QString getPassword();
};

#endif // CLIENT_H
