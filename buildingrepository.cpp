#include "buildingrepository.h"

BuildingRepository::BuildingRepository()
{

}

BuildingRepository::~BuildingRepository()
{
}

<<<<<<< HEAD
void BuildingRepository::getSchedule(Building *building)
{

}








/*void BuildingRepository::getBuildingList2()
=======
Schedule *BuildingRepository::getSchedule(Building *building)
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
{
    QSqlQuery query;
    QString sql_select = "SELECT film.tytul, seans.godzina, seans.data, sala_kinowa.ilosc_miejsc, sala_kinowa.ilosc_miejsc_wolnych, sala_kinowa.ilosc_miejsc_zajetych, sala_kinowa.liczba_rzedow, sala_kinowa.nazwa FROM film RIGHT JOIN seans ON (film.idFilmu=seans.Film_idFilmu) LEFT JOIN sala_kinowa ON (seans.idSali_Kinowej = sala_kinowa.idSali_Kinowej) LEFT JOIN budynek ON (sala_kinowa.idBudynku = budynek.idBudynku)LEFT JOIN miejsca_na_sali ON(miejsca_na_sali.Sala_Kinowa_idBudynku=budynek.idBudynku)";
    QList<Seance* > * seances=new QList<Seance*>();
    if(query.exec(sql_select))
    {
        while(query.next())
        {
            QString title = query.value(0).toString();
            QString time = query.value(1).toString();
            QString date = query.value(2).toString();
            QString number_seats = query.value(3).toString();
            QString number_free_seats = query.value(4).toString();
            QString number_not_free_seats = query.value(5).toString();
            QString number_rows = query.value(6).toString();
            QString name = query.value(7).toString();
            CinemaRoom* room=new CinemaRoom(number_seats.toInt(),number_free_seats.toInt(),number_not_free_seats.toInt(),number_rows.toInt(),name);
            Seance *seance = new Seance(title,date,time,room);
            seances->append(seance);
         }
    }
    return new Schedule(seances);
}
QList<Building*> *BuildingRepository::getBuildingList()
{
    QString query = "SELECT budynek.nazwabudynku, budynek.ulica, budynek.miasto FROM budynek ";
    QSqlQuery sqlquery;
    QList<Building*>* buildings=new QList<Building*>();
    if(sqlquery.exec(query))
    {
        while(sqlquery.next())
        {
            QString cinemaname = sqlquery.value(0).toString();
            QString street = sqlquery.value(1).toString();
            QString city = sqlquery.value(2).toString();
            Building *build = new Building(city,cinemaname,street);
            buildings->append(build);
         }
    }
    return buildings;
}
<<<<<<< HEAD
*/
/*Client *new = new Client(ui->lineEdit_name->text(),
                        ui->lineEdit_surname->text(),
                        ui->comboBox_status->currentText(),

clients->append(nowa);
ui->listWidget_persons->addItem(ui->lineEdit_name->text() + " " + ui->lineEdit_surname->text());

*/



=======
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
