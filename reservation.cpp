#include "reservation.h"
#include "ui_reservation.h"

Reservation::Reservation(Employee *e, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reservation)
{
    ui->setupUi(this);

   /* employee = e;

    setWindowTitle(tr("Multikina"));

    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo->setPixmap(pix);   
    ui->pushButton_back->setStyleSheet("background-image: url(:/logo/prefix1/images/back)");

    ui->label_user_2->setText("Kasjer: "+employee->getUsername());

    ClientRepository CR2;
    QSqlQueryModel *model2 = new QSqlQueryModel;
    QSortFilterProxyModel *proxyModel2 = new QSortFilterProxyModel;
    QString sql_select2 = CR2.ShowReservationList();

    model2->setQuery(sql_select2);
    model2->setHeaderData(0, Qt::Horizontal, tr("Nr rezerwacji"));
    model2->setHeaderData(1, Qt::Horizontal, tr("Godzina"));
    model2->setHeaderData(2, Qt::Horizontal, tr("Sala"));
    model2->setHeaderData(3, Qt::Horizontal, tr("Film"));
    model2->setHeaderData(4, Qt::Horizontal, tr("Data"));
    model2->setHeaderData(5, Qt::Horizontal, tr("Nazwisko"));

    ui->tableView_reservation->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView_reservation->setSortingEnabled(true);

    proxyModel2->setSourceModel( model2 );
    ui->tableView_reservation->setModel( proxyModel2 );

    for(int i = 0; i < model2->rowCount(); ++i)
        {
          // ui->lineEdit->setText(model2->record(i).value(2).toString());
        }*/

}

Reservation::~Reservation()
{
    delete ui;
}

void Reservation::on_pushButton_back_clicked()
{
   // Reservation::close();
}

void Reservation::on_tableView_reservation_doubleClicked(const QModelIndex &index)
{
       // for(int i = 0; i < model2->rowCount(); ++i)
        //{
           //ui->lineEdit->setText(model2->record(index).value(2).toString());
          // ui->tableView_reservation->

       // }
}

void Reservation::on_pushButton_refresh_clicked()
{
    /*ClientRepository CR2;
    QSqlQueryModel *model2 = new QSqlQueryModel;
    QSortFilterProxyModel *proxyModel2 = new QSortFilterProxyModel;
    QString sql_select2 = CR2.ShowReservationList();

    model2->setQuery(sql_select2);
    model2->setHeaderData(0, Qt::Horizontal, tr("Nr rezerwacji"));
    model2->setHeaderData(1, Qt::Horizontal, tr("Godzina"));
    model2->setHeaderData(2, Qt::Horizontal, tr("Sala"));
    model2->setHeaderData(3, Qt::Horizontal, tr("Film"));
    model2->setHeaderData(4, Qt::Horizontal, tr("Data"));
    model2->setHeaderData(5, Qt::Horizontal, tr("Nazwisko"));

    ui->tableView_reservation->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView_reservation->setSortingEnabled(true);

    proxyModel2->setSourceModel( model2 );
    ui->tableView_reservation->setModel( proxyModel2 );*/
}
