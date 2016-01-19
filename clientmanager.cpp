#include "clientmanager.h"

ClientManager::ClientManager()
{
}

ClientManager *ClientManager::getInstance()
{
    static ClientManager cm;
    return &cm;
}

Client ClientManager::ConfirmClientAccount(QString name, QString surname, QString telephonenumber, QString email, QString password, Building *building, QString discount)
{
    currentclient = new Client (name, surname, telephonenumber, email,password, building);
    currentclient->ConfirmAccount();
}
