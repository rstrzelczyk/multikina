#ifndef BUILDINGLIST_H
#define BUILDINGLIST_H

#include <QDialog>
#include<QList>

#include "buildingrepository.h"
#include "building.h"
#include "newclientaccountform.h"
class NewClientAccountForm;
namespace Ui {
class BuildingList;
}

class BuildingList : public QDialog
{
    Q_OBJECT

    QList<Building*> * Buildings;
    NewClientAccountForm* form;
    
public:
    explicit BuildingList(NewClientAccountForm* form,QWidget *parent = 0);
    ~BuildingList();

     QString buildingname;
    
private slots:

    void on_listWidget_clicked(const QModelIndex &index);
    void displayBuildings(QList<Building*>* buildings);
    void on_listWidget_doubleClicked(const QModelIndex &index);

signals:
    void chosenBuilding(Building* buinding);
private:
    Ui::BuildingList *ui;

    friend class NewClientAccountForm;

};

#endif // BUILDINGLIST_H
