#include "reservationwindow.h"
#include "ui_reservationwindow.h"

ReservationWindow::ReservationWindow(Employee *e, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReservationWindow)
{
    ui->setupUi(this);
    employee = e;
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
    //for(int i = 0; i < model2->rowCount(); ++i)
    //{
   // int i= ui->tableView_reservation->currentIndex().row();
   // ui->lineEdit->setText(QString::number(i));
    //}
}
ReservationWindow::~ReservationWindow()
{
    delete ui;
}

void ReservationWindow::on_pushButton_logout_clicked()
{
    ReservationWindow::close();
    AccountManager am;
    am.show();
}

void ReservationWindow::on_pushButton_back_clicked()
{
    ReservationWindow::close();
    AccountManager am;
    am.showScheduleWindow(employee);
}
void ReservationWindow::on_pushButton_refresh_clicked()
{
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
}
void ReservationWindow::on_tableView_reservation_doubleClicked(const QModelIndex &index)
{
    ReservationWindow::close();
    OrderInformation *oi = new OrderInformation(employee, 0, 0);
    oi->show();
}
