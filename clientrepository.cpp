#include "clientrepository.h"

ClientRepository::ClientRepository()
{
    db = QSqlDatabase:: addDatabase ("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("multikina");
    db.setUserName("root");
    db.setPassword("");
}

ClientRepository::~ClientRepository()
{
    db.close();
}

QString ClientRepository::ShowClientList()
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
}