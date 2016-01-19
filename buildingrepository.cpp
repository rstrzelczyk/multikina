#include "buildingrepository.h"

BuildingRepository::BuildingRepository()
{

}

BuildingRepository::~BuildingRepository()
{
}

void BuildingRepository::getSchedule(Building *building)
{

}








/*void BuildingRepository::getBuildingList2()
{
    if(db.open())
    {
        QSqlQuery query;
               if(query.exec("SELECT nazwabudynku, ulica, miasto FROM budynek"))
               {
                    while(query.next())
                    {
                         Building *build = new Building(query.value(0).toString(),query.value(1).toString(),query.value(2).toString());
                         Buildings->append(build);
                    }
               }
      }
      else
      {
          qDebug()<<"Brak połączenia z bazą danych";
      }
}
QString BuildingRepository::getBuildingList()
{
    QString sql = "SELECT nazwabudynku, ulica, miasto FROM budynek ORDER BY budynek.nazwabudynku";
    return sql;
}
*/
/*Client *new = new Client(ui->lineEdit_name->text(),
                        ui->lineEdit_surname->text(),
                        ui->comboBox_status->currentText(),

clients->append(nowa);
ui->listWidget_persons->addItem(ui->lineEdit_name->text() + " " + ui->lineEdit_surname->text());

*/



