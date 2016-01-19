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

<<<<<<< HEAD
    void getSchedule(Building *building);



    //QList<Building*> *Buildings;

    //QString getBuildingList();
    //void getBuildingList2();
=======
    Schedule* getSchedule(Building *building);

    QList<Building*> *getBuildingList();
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
};

#endif // BUILDINGREPOSITORY_H
