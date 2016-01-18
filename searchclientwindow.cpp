#include "searchclientwindow.h"
#include "ui_searchclientwindow.h"

SearchClientWindow::SearchClientWindow(Employee *e, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchClientWindow)
{
    ui->setupUi(this);
    employee = e;
    setWindowTitle(tr("Multikina"));
    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo->setPixmap(pix);
    ui->pushButton_back->setStyleSheet("background-image: url(:/logo/prefix1/images/back)");
    ui->label_user_2->setText("Kasjer: "+employee->getUsername());
    if(ui->lineEdit_searchemail->text().isEmpty()&&ui->lineEdit_searchname->text().isEmpty()&&ui->lineEdit_searchsurname->text().isEmpty())
    {
        showAllClients();
    }
}
SearchClientWindow::~SearchClientWindow()
{
    delete ui;
}
void SearchClientWindow::showAllClients()
{
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
    ui->tableView_search_client->setColumnHidden(3, true);
    ui->tableView_search_client->setColumnHidden(4, true);
    ui->tableView_search_client->setColumnHidden(5, true);
    ui->tableView_search_client->setColumnHidden(6, true);
    //QModelIndex index=ui->tableView_search_client->currentIndex();
    //ui->lineEdit_searchsurname->setText(model->record(index.row()).value(2).toString());
}
void SearchClientWindow::on_pushButton_back_clicked()
{
    SearchClientWindow::close();
    AccountManager am;
    am.showScheduleWindow(employee);
}

void SearchClientWindow::on_pushButton_logout_clicked()
{
    SearchClientWindow::close();
    AccountManager am;
    am.show();
}

void SearchClientWindow::on_lineEdit_searchemail_textChanged(const QString &arg1)
{
    QString username = ui->lineEdit_searchemail->text();
    QString name = ui->lineEdit_searchname->text();
    QString surname = ui->lineEdit_searchsurname->text();
    QList<Client*> Clients;
    if(ui->lineEdit_searchemail->text().isEmpty()&&ui->lineEdit_searchname->text().isEmpty()&&ui->lineEdit_searchsurname->text().isEmpty())
    {
        showAllClients();
    }
    else
    {
        QSqlQueryModel *model = new QSqlQueryModel;
        QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel;
        ClientRepository CR;
        QString sql_select = CR.searchClient(username, name, surname);
        model->setQuery(sql_select);
        model->setHeaderData(0, Qt::Horizontal, tr("email"));
        model->setHeaderData(1, Qt::Horizontal, tr("Nazwisko"));
        model->setHeaderData(2, Qt::Horizontal, tr("Imię"));
        ui->tableView_search_client->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableView_search_client->setSortingEnabled(true);
        proxyModel->setSourceModel( model );
        ui->tableView_search_client->setModel( proxyModel );
        ui->tableView_search_client->setColumnHidden(3, true);
        ui->tableView_search_client->setColumnHidden(4, true);
        ui->tableView_search_client->setColumnHidden(5, true);
        ui->tableView_search_client->setColumnHidden(6, true);
    }
}
void SearchClientWindow::on_lineEdit_searchname_textChanged(const QString &arg1)
{
    QString username = ui->lineEdit_searchemail->text();
    QString name = ui->lineEdit_searchname->text();
    QString surname = ui->lineEdit_searchsurname->text();
    QList<Client*> Clients;
    if(ui->lineEdit_searchemail->text().isEmpty()&&ui->lineEdit_searchname->text().isEmpty()&&ui->lineEdit_searchsurname->text().isEmpty())
    {
        showAllClients();
    }
    else
    {
        QSqlQueryModel *model = new QSqlQueryModel;
        QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel;
        ClientRepository CR;
        QString sql_select = CR.searchClient2(username, name, surname);
        model->setQuery(sql_select);
        model->setHeaderData(0, Qt::Horizontal, tr("email"));
        model->setHeaderData(1, Qt::Horizontal, tr("Nazwisko"));
        model->setHeaderData(2, Qt::Horizontal, tr("Imię"));
        ui->tableView_search_client->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableView_search_client->setSortingEnabled(true);
        proxyModel->setSourceModel( model );
        ui->tableView_search_client->setModel( proxyModel );
        ui->tableView_search_client->setColumnHidden(3, true);
        ui->tableView_search_client->setColumnHidden(4, true);
        ui->tableView_search_client->setColumnHidden(5, true);
        ui->tableView_search_client->setColumnHidden(6, true);
    }
}

void SearchClientWindow::on_lineEdit_searchsurname_textChanged(const QString &arg1)
{
    QString username = ui->lineEdit_searchemail->text();
    QString name = ui->lineEdit_searchname->text();
    QString surname = ui->lineEdit_searchsurname->text();
    QList<Client*> Clients;
    if(ui->lineEdit_searchemail->text().isEmpty()&&ui->lineEdit_searchname->text().isEmpty()&&ui->lineEdit_searchsurname->text().isEmpty())
    {
        showAllClients();
    }
    else
    {
        QSqlQueryModel *model = new QSqlQueryModel;
        QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel;
        ClientRepository CR;
        QString sql_select = CR.searchClient3(username, name, surname);
        model->setQuery(sql_select);
        model->setHeaderData(0, Qt::Horizontal, tr("email"));
        model->setHeaderData(1, Qt::Horizontal, tr("Nazwisko"));
        model->setHeaderData(2, Qt::Horizontal, tr("Imię"));
        ui->tableView_search_client->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableView_search_client->setSortingEnabled(true);
        proxyModel->setSourceModel( model );
        ui->tableView_search_client->setModel( proxyModel );
        ui->tableView_search_client->setColumnHidden(3, true);
        ui->tableView_search_client->setColumnHidden(4, true);
        ui->tableView_search_client->setColumnHidden(5, true);
        ui->tableView_search_client->setColumnHidden(6, true);
    }
}

void SearchClientWindow::on_tableView_search_client_doubleClicked(const QModelIndex &index)
{
    //ui->tableView_search_client->model()->setData(index, QColor(Qt::darkGreen), Qt::BackgroundColorRole);
    // for(int i = 0; i < model2->rowCount(); ++i)
    //{
    //ui->li->setText(model2->record(i).value(2).toString());
    // }   
    int row=index.row();
    //SearchClientWindow::close();
   // ClientAccauntForm *clientaccountform = new ClientAccauntForm(c,b,employee,"", row);
    //clientaccountform->show();
}
