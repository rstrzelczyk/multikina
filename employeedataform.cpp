#include "employeedataform.h"
#include "ui_employeedataform.h"

EmployeeDataForm::EmployeeDataForm(Employee *e, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeDataForm)
{
    ui->setupUi(this);

    employee = e;

    setWindowTitle(tr("Multikina"));

    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo_3->setPixmap(pix);

    ui->pushButton_back->setStyleSheet("background-image: url(:/logo/prefix1/images/back)");

    ui->label_user_4->setText("Kasjer: "+employee->getUsername());
}

EmployeeDataForm::~EmployeeDataForm()
{
    delete ui;
}

void EmployeeDataForm::on_pushButton_back_clicked()
{
    EmployeeDataForm::close();
}

void EmployeeDataForm::on_pushButtonlog_in_3_clicked()
{
    if(ui->lineEdit_newpassword->text() != ui->lineEdit_repeatnewpassword->text())
    {
        ui->lineEdit_repeatnewpassword->setText("");
        ui->label_info_3->setText("Podane hasła nie są jednakowe.");
    }
    else
    {
        int passwordlength = ui->lineEdit_newpassword->text().size();
        ui->label_info_3->setText(QString::number(passwordlength));
        if(passwordlength<8)
        {
            ui->label_info_3->setText("Podane hasło nie spełnia wymagań.");
        }
        else
        {
           EmployeeDataForm::close();
           EmployeeRepository ER;
           ER.changePassword(employee->getUsername(), ui->lineEdit_newpassword->text());
           ui->label_info_3->setText("");
           ui->lineEdit_newpassword->setText("");
           ui->lineEdit_repeatnewpassword->setText("");
        }
    }
}

void EmployeeDataForm::on_pushButton_logout_clicked()
{
    EmployeeDataForm:close();
}
