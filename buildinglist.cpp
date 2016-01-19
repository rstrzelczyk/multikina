#include "buildinglist.h"
#include "ui_buildinglist.h"

BuildingList::BuildingList(NewClientAccountForm* form,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BuildingList)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));
    this->form=form;
    BuildingRepository BR;
    displayBuildings(BR.getBuildingList());

}

BuildingList::~BuildingList()
{
    delete ui;
}

void BuildingList::on_listWidget_clicked(const QModelIndex &index)
{
   // BuildingList::close();
}

void BuildingList::displayBuildings(QList<Building*>* buildings)
{
<<<<<<< HEAD
    /*QSqlQueryModel *model3 = new QSqlQueryModel;
    BuildingRepository BR;
    QString buildingname= BR.getBuildingList();
    model3->setQuery(buildingname);
    model3->setHeaderData(0, Qt::Horizontal, tr("Nazwa budynku"));
    ui->tableView->setModel(model3);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setColumnHidden(1,true);
    ui->tableView->setColumnHidden(2,true);

    QTableView *view = new QTableView;
           view->setModel(model3);
           view->show();
=======
    Buildings=buildings;
    for(int i = 0; i < buildings->count(); ++i)
     ui->listWidget->addItem(buildings->at(i)->getCinemaname() + " |  " + buildings->at(i)->getStreet() + " |  " + buildings->at(i)->getCity());
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
}

void BuildingList::on_listWidget_doubleClicked(const QModelIndex &index)
{
<<<<<<< HEAD
    QList<int> categories;
    if(qv.isValid() && qv.type() == QVariant::List)
    {
        foreach(QVariant category,qv.toList()){
            categories.append(category.toInt() );
        }
        return categories;
    }*/
=======
    int checkedIndex = index.row();
    Building *building = Buildings->at(checkedIndex);
    form->setChoosenBuilding(building);
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
}
