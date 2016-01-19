#include "clientrepository.h"

ClientRepository::ClientRepository()
{

}
ClientRepository::~ClientRepository()
{

}
QList<Client*> *searchClient(QString email, QString name, QString surname)
{
    QList<Client*> *Clients;

    int telephonenumber;
    QString password;
    QString query = "SELECT klient.imie, klient.nazwisko, klient.telefon, klient.email, klient.haslo FROM klient";
    QSqlQuery sqlquery;
    if(sqlquery.exec(query))
    {
        Clients = new QList<Client*>();
        while(sqlquery.next())
        {
            name = sqlquery.value(0).toString();
            surname = sqlquery.value(1).toString();
            telephonenumber = sqlquery.value(2).toInt();
            email = sqlquery.value(3).toString();
            password = sqlquery.value(4).toString();

            Client *newClient = new Client(name,surname,telephonenumber,email, password);
            Clients->append(newClient);
         }
    }
    return Clients;
}













/*QString ClientRepository::ShowClientList()
{
    if (!db.open())
    {
        return "";
    }
    QString sql_select = "SELECT email, nazwisko, imie FROM klient ORDER BY email";
    return sql_select;
}

QString ClientRepository::ShowReservationList()
{
    if (!db.open())
    {
        return "";
    }
    else
    {
        QString sql_select2 = "SELECT rezerwacja.idRezerwacja, seans.godzina, sala_kinowa.nazwa, film.tytul, seans.data, klient.nazwisko ";
        sql_select2 += " FROM rezerwacja LEFT JOIN klient ON (klient.idKlienta=rezerwacja.idKlienta) LEFT JOIN szczegoly_rezerwacji ";
        sql_select2 += " ON (szczegoly_rezerwacji.idRezerwacja = rezerwacja.idRezerwacja) ";
        sql_select2 +="  LEFT JOIN bilet ON (bilet.idBiletu=szczegoly_rezerwacji.Bilet_idBiletu) ";
        sql_select2 += "   LEFT JOIN seans ON (bilet.id_Seansu=seans.idSeansu) ";
        sql_select2 += "   LEFT JOIN film ON (film.idFilmu=seans.Film_idFilmu) ";
        sql_select2 += "   LEFT JOIN sala_kinowa ON (seans.idSali_Kinowej=sala_kinowa.idSali_Kinowej) ";

        sql_select2 += "   ORDER BY rezerwacja.idRezerwacja";

        return sql_select2;
    }
}*/
