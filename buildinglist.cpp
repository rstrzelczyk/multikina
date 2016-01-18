#include "buildinglist.h"
#include "ui_buildinglist.h"

BuildingList::BuildingList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BuildingList)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));

    BuildingRepository BR;
    displayBuildings(BR.getBuildingList());

}

BuildingList::~BuildingList()
{
    delete ui;
}

void BuildingList::on_listWidget_clicked(const QModelIndex &index)
{
    BuildingList::close();
}

void BuildingList::displayBuildings(QList<Building*>* buildings)
{
    for(int i = 0; i < buildings->count(); ++i)
     ui->listWidget->addItem(buildings->at(i)->getCinemaname() + " |  " + buildings->at(i)->getStreet() + " |  " + buildings->at(i)->getCity());
}
void BuildingList::on_tableView_clicked(const QModelIndex &index)
{
    int checkedIndex = index.row();
    Building *b = Buildings->at(checkedIndex);
    //QString buildingname=b->getCinemaname();
    NewClientAccountForm *newclient;
    newclient->setBuilding(b);
    BuildingList::close();
}
