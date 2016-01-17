#include "clientaccauntform.h"
#include "ui_clientaccauntform.h"

ClientAccauntForm::ClientAccauntForm(Employee *e, int row, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClientAccauntForm)
{
    ui->setupUi(this);
    employee=e;
    setWindowTitle(tr("Multikina"));
    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo_2->setPixmap(pix);
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
    proxyModel->setSourceModel( model );
}

ClientAccauntForm::~ClientAccauntForm()
{
    delete ui;
}

void ClientAccauntForm::on_pushButton_back_clicked()
{
    ClientAccauntForm::close();
    AccountManager am;
    am.ShowSearchclientwindow(employee);
}

void ClientAccauntForm::on_pushButton_logout_clicked()
{
    ClientAccauntForm::close();
    AccountManager am;
    am.show();
}
