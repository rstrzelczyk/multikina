#ifndef CHAIN_H
#define CHAIN_H

#include "building.h"
#include "repertoir.h"
#include <QList>

class Chain
{
    QList <Building> Buildings ;
    Repertoir *repertoir;
public:
    Chain();
};

#endif // CHAIN_H
