#include "buildinglist.h"
#include "ui_buildinglist.h"

BuildingList::BuildingList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BuildingList)
{
    ui->setupUi(this);

    setWindowTitle(tr("Multikina"));

    newBuildingList();

}

BuildingList::~BuildingList()
{
    delete ui;
}

void BuildingList::on_listWidget_clicked(const QModelIndex &index)
{
    BuildingList::close();
}

void BuildingList::newBuildingList()
{
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
}


QList<int> toCategories(QVariant qv)
{
    QList<int> categories;
    if(qv.isValid() && qv.type() == QVariant::List)
    {
        foreach(QVariant category,qv.toList()){
            categories.append(category.toInt() );
        }
        return categories;
    }*/
}
