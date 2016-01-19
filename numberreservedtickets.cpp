#include "numberreservedtickets.h"
#include "ui_numberreservedtickets.h"

NumberReservedTickets::NumberReservedTickets(Employee *e, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NumberReservedTickets)
{
    ui->setupUi(this);
    employee=e;
    setWindowTitle(tr("Multikina"));

    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo_4->setPixmap(pix);

    ui->pushButton_back_2->setStyleSheet("background-image: url(:/logo/prefix1/images/back)");

    ui->label_user_5->setText("Kasjer: "+employee->getUsername());

    ui->label_info_cancel->setVisible(false);
    ui->pushButton_cancel_2->setVisible(false);

    ui->lineEdit_number_normal->setText("0");
    ui->lineEdit_number_senior->setText("0");
    ui->lineEdit_number_student->setText("0");

    int normal=0;
    int senior=0;
    int student=0;

    int price=20;
    float dstudent=0.5;
    float dsenior=0.6;


    selectTickets();
}

NumberReservedTickets::~NumberReservedTickets()
{
    delete ui;
}

void NumberReservedTickets::on_pushButton_main_menu_back_2_clicked()
{
    //NumberReservedTickets::close();
}

void NumberReservedTickets::on_pushButton_back_2_clicked()
{
   // NumberReservedTickets::close();
}
void NumberReservedTickets::selectTickets()
{
    int normal=0;
    int senior=0;
    int student=0;

   // if(ui->pushButton_plus_normal->clicked())
   // {
        //normal++;
       // ui->lineEdit_number_normal->setText(QString::number(normal));
   // }


}

void NumberReservedTickets::on_pushButton_next_clicked()
{
    int totalnumber = ui->lineEdit_number_normal->text().toInt()+ui->lineEdit_number_senior->text().toInt()+ui->lineEdit_number_student->text().toInt();
    int totalprice = ui->label_total_price_2->text().toInt();
    NumberReservedTickets::close();
    OrderInformation *oi = new OrderInformation(employee,totalnumber, totalprice);
    oi->show();
}

void NumberReservedTickets::on_pushButton_plus_normal_clicked()
{
    int price=20;
    int n=ui->lineEdit_number_normal->text().toInt();
    n++;
    ui->lineEdit_number_normal->setText(QString::number(n));
    int p=price*n + ui->label_total_price_2->text().toInt();
    ui->label_total_price_2->setText(QString::number(p));
}
void NumberReservedTickets::on_pushButton_minus_normal_clicked()
{
    int price=20;
    int n=ui->lineEdit_number_normal->text().toInt();
    n--;
    ui->lineEdit_number_normal->setText(QString::number(n));
    int p=ui->label_total_price_2->text().toInt();
    p=p-price;
    ui->label_total_price_2->setText(QString::number(p));
}
void NumberReservedTickets::on_pushButton_plus_student_clicked()
{
    int price=20;
    float dstudent=0.5;
    int n=ui->lineEdit_number_student->text().toInt();
    n++;
    ui->lineEdit_number_student->setText(QString::number(n));
    int p=price*n*dstudent+ui->label_total_price_2->text().toInt();
    ui->label_total_price_2->setText(QString::number(p));
}

void NumberReservedTickets::on_pushButton_minus_student_clicked()
{
    int price=20;
    float dstudent=0.5;
    int n=ui->lineEdit_number_student->text().toInt();
    n--;
    ui->lineEdit_number_student->setText(QString::number(n));
    int p=ui->label_total_price_2->text().toInt();
    p=p-(price*dstudent);
    ui->label_total_price_2->setText(QString::number(p));
}

void NumberReservedTickets::on_pushButton_plus_senio_clicked()
{
    int price=20;
    float dsenior=0.6;
    int n=ui->lineEdit_number_senior->text().toInt();
    n++;
    ui->lineEdit_number_senior->setText(QString::number(n));
    int p=price*n*dsenior + ui->label_total_price_2->text().toInt();
    ui->label_total_price_2->setText(QString::number(p));
}

void NumberReservedTickets::on_pushButton_minus_senior_clicked()
{
    int price=20;
    float dsenior=0.6;
    int n=ui->lineEdit_number_senior->text().toInt();
    n--;
    ui->lineEdit_number_senior->setText(QString::number(n));
    int p=ui->label_total_price_2->text().toInt();
    p=p-(price*dsenior);
    ui->label_total_price_2->setText(QString::number(p));
}
