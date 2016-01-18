#ifndef BUILDINGREPOSITORY_H
#define BUILDINGREPOSITORY_H

#include <QtSql>
#include <QDebug>
#include <QString>

#include "building.h"

class BuildingRepository
{
public:
   // QSqlDatabase db;
   // QSqlQueryModel *qmodel;

    BuildingRepository();
    ~BuildingRepository();

    Schedule* getSchedule(Building *building);

    QList<Building*> *getBuildingList();
};

#endif // BUILDINGREPOSITORY_H
