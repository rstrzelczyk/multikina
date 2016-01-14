#include "searchclientwindow.h"
#include "ui_searchclientwindow.h"

#include<limits>

SearchClientWindow::SearchClientWindow(Employee *e, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchClientWindow)
{
    ui->setupUi(this);

    employee = e;

    setWindowTitle(tr("Multikina"));

    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo->setPixmap(pix);

    ui->pushButton_back->setStyleSheet("background-image: url(:/logo/prefix1/images/back)");

    ui->label_user_2->setText("Kasjer: "+employee->getUsername());

    ClientRepository CR;
    QSqlQueryModel *model = new QSqlQueryModel;
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel;
    QString sql_select = CR.ShowClientList();

    model->setQuery(sql_select);
    model->setHeaderData(0, Qt::Horizontal, tr("email"));
    model->setHeaderData(1, Qt::Horizontal, tr("Nazwisko"));
    model->setHeaderData(2, Qt::Horizontal, tr("Imię"));

    ui->tableView_search_client->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView_search_client->setSortingEnabled(true);

    proxyModel->setSourceModel( model );
    ui->tableView_search_client->setModel( proxyModel );

    connect(ui->lineEdit_search, SIGNAL(textChanged(QString)), this, SLOT(searchClient()));
    //connect(filterPatternLineEdit, SIGNAL(textChanged(QString)),
             // this, SLOT(textFilterChanged()));
}

SearchClientWindow::~SearchClientWindow()
{
    delete ui;
}

//QList SearchClientWindow::searchClient()
//{

//}

void SearchClientWindow::searchClient()
{
    //QRegExp regExp(ui->lineEdit_search->text());
    //proxyModel->setFilterRegExp(regExp);
}

void SearchClientWindow::on_pushButton_back_clicked()
{
    SearchClientWindow::close();
    CinemaBuildingRepertoirSchedule *cinemabuildingrepertoirschedule = new CinemaBuildingRepertoirSchedule(employee);
    cinemabuildingrepertoirschedule->open();
}

void SearchClientWindow::on_pushButton_logout_clicked()
{
    SearchClientWindow::close();
    CinemaBuildingRepertoirSchedule *cbrs;
    cbrs->log_out();
}

//void SearchClientWindow::on_tableWidget_searchclient_clicked(const QModelIndex &index)
//{
    //ClientAccountForm *clientaccountform = new ClientAccountForm();
    //clientaccountform->exec();
    //delete clientaccountform;
//}

void SearchClientWindow::on_tableView_search_client_activated(const QModelIndex &index)
{
    QString selectedclient=ui->tableView_search_client->model()->data(index).toString();
    //QString selectedclient=ui->tableView_search_client->model()->data(ui->tableView_search_client->model()->(1,1)).toString();
    if(index.column()==0)
    {
        ui->lineEdit_search->setText(selectedclient);
     }
    else
    {
        ui->lineEdit_search->setText("xxxxxxx");
     }
}
