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
}

SearchClientWindow::~SearchClientWindow()
{
    delete ui;
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
    ClientRepository CR;
    Clients.append(CR.searchClient(username, name, surname));
}
void SearchClientWindow::on_lineEdit_searchname_textChanged(const QString &arg1)
{
    QString username = ui->lineEdit_searchemail->text();
    QString name = ui->lineEdit_searchname->text();
    QString surname = ui->lineEdit_searchsurname->text();
    ClientRepository CR;
    //CR.searchClient(username, name, surname);
}

void SearchClientWindow::on_lineEdit_searchsurname_textChanged(const QString &arg1)
{
    QString username = ui->lineEdit_searchemail->text();
    QString name = ui->lineEdit_searchname->text();
    QString surname = ui->lineEdit_searchsurname->text();
    ClientRepository CR;
    //CR.searchClient(username, name, surname);
}
