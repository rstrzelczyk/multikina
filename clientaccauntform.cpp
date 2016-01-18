#include "clientaccauntform.h"
#include "ui_clientaccauntform.h"

ClientAccauntForm::ClientAccauntForm(Client *c, Building *b, Employee *e, QString discount, QString state,  int row, QWidget *parent) :
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

    ui->label_info_2->setText("Konto zostało utworzone.");
    ui->lineEdit_name->setText(c->getName());
    ui->lineEdit_surname->setText(c->getName());
    ui->lineEdit_email->setText(c->getName());
    ui->lineEdit_telephone->setText(c->getName());
    ui->lineEdit_password_2->setText(c->getName());
    ui->lineEdit_pconfirnpassword->setText(c->getName());
    ui->lineEdit_building->setText(b->getCinemaname());
    ui->lineEdit_discount->setText(discount);
    if(state=="nieaktywny")
    {
        ui->pushButton_confim_account->setEnabled(true);
        ui->pushButton_confitm_discount->setEnabled(false);
        ui-> pushButton_add_card->setEnabled(false);
    }
    if(state=="aktywny")
    {
        ui->pushButton_confim_account->setEnabled(false);
        ui->pushButton_confitm_discount->setEnabled(true);
        ui-> pushButton_add_card->setEnabled(true);
    }
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

void ClientAccauntForm::on_pushButton_confim_account_clicked()
{
    ui->pushButton_confim_account->setEnabled(false);
    ui->pushButton_confitm_discount->setEnabled(true);
    ui-> pushButton_add_card->setEnabled(true);
    ui->label_info_2->setText("Konto zostało potwierdzone.");
}

void ClientAccauntForm::on_pushButton_confitm_discount_clicked()
{
    ui->pushButton_confim_account->setEnabled(false);
    ui->pushButton_confitm_discount->setEnabled(true);
    ui-> pushButton_add_card->setEnabled(true);
    ui->label_info_2->setText("Zniżka została potwierdzona.");
}

void ClientAccauntForm::on_pushButton_add_card_clicked()
{
    ui->pushButton_confim_account->setEnabled(false);
    ui->pushButton_confitm_discount->setEnabled(true);
    ui-> pushButton_add_card->setEnabled(false);
    ui->label_info_2->setText("Karta została dodana.");
}
