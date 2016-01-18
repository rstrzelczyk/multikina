#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H
#include "client.h"

class ClientManager
{
private:
    ClientManager();
    static ClientManager* cm;
    Client *currentclient;
public:
    static ClientManager* getInstance();
    Client ConfirmClientAccount(QString name, QString surname, QString telephonenuber, QString email, QString password, Building *building, QString discount);
};

#endif // CLIENTMANAGER_H
