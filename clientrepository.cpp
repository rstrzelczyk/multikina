#include "clientrepository.h"

ClientRepository::ClientRepository()
{

}
ClientRepository::~ClientRepository()
{
<<<<<<< HEAD

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
=======

}
QString ClientRepository::searchClient(QString username, QString name, QString surname)
{
    QString query = "SELECT klient.email, klient.imie, klient.nazwisko, klient.telefon, klient.haslo, klient.Status_konta, klient.budynek FROM klient WHERE klient.email LIKE '"+username+"%' ORDER BY email";
    return query;
}
QString ClientRepository::searchClient2(QString username, QString name, QString surname)
{
    QString query = "SELECT klient.email, klient.imie, klient.nazwisko, klient.telefon, klient.haslo, klient.Status_konta, klient.budynek FROM klient WHERE klient.imie LIKE '"+name+"%' ORDER BY imie";
    return query;
}
QString ClientRepository::searchClient3(QString username, QString name, QString surname)
{
    QString query = "SELECT klient.email, klient.imie, klient.nazwisko, klient.telefon, klient.haslo, klient.Status_konta, klient.budynek FROM klient WHERE klient.nazwisko LIKE '"+surname+"%' ORDER BY nazwisko";
    return query;
}
QString ClientRepository::ShowClientList()
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
{
    QString sql_select = "SELECT klient.email, klient.imie, klient.nazwisko, klient.telefon, klient.haslo, klient.Status_konta, klient.budynek FROM klient ORDER BY email";
    return sql_select;
}
QString ClientRepository::ShowReservationList()
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
bool ClientRepository::isEmailUsed(QString email)
{
    QString query = "SELECT email FROM klient WHERE email=\'" + email + "\'";
    QSqlQuery sqlquery;
    if(sqlquery.exec(query))
    {
        if(sqlquery.next())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
//void ClientRepository::save(Client *client, Building *build, QString discount)
//{
   // QString query = "INSERT INTO `klient` ( `imie`, `nazwisko`, `email`, `telefon`, `haslo`, `Status_konta`, `budynek`, `znizka`) VALUES ('"+client.get+"', '"++"', '"++"', '"++"', '"++"', '"++"',, '"++"',, '"++"');


<<<<<<< HEAD
        return sql_select2;
    }
}*/
=======

   // QSqlQuery sqlquery;
//}
void ClientRepository::save(Client *client)
{
    QString query = "UPDATE klient values (" + client->getName() + "," + client->getSurname() + client->getPassword() + "," + client->getEmail() + "," + client->getTelephonenumber()+ ", 'aktywny'";
    QSqlQuery sqlquery;
    sqlquery.exec(query);
}
>>>>>>> d9a1822419a3bb5ab32e7ef10a60779c7973368b
