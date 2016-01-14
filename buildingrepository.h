#ifndef BUILDINGREPOSITORY_H
#define BUILDINGREPOSITORY_H

#include <QtSql>
#include <QDebug>
#include <QString>

#include "building.h"

class BuildingRepository
{
public:
    QSqlDatabase db;
    QSqlQueryModel *qmodel;

    BuildingRepository();
    ~BuildingRepository();

    QList<Building*> *Buildings;

    QString getBuildingList();
    void getBuildingList2();
};

#endif // BUILDINGREPOSITORY_H
