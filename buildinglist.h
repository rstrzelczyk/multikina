#ifndef BUILDINGLIST_H
#define BUILDINGLIST_H

#include <QDialog>
#include<QList>

#include "buildingrepository.h"

namespace Ui {
class BuildingList;
}

class BuildingList : public QDialog
{
    Q_OBJECT

    
public:
    explicit BuildingList(QWidget *parent = 0);
    ~BuildingList();
    
private slots:

    void on_listWidget_clicked(const QModelIndex &index);

    void newBuildingList();

private:
    Ui::BuildingList *ui;

};

#endif // BUILDINGLIST_H
