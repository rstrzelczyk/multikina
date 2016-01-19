#include "employeedataform.h"
#include "ui_employeedataform.h"

EmployeeDataForm::EmployeeDataForm(Employee *e, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EmployeeDataForm)
{
    ui->setupUi(this);
    employee=e;
    setWindowTitle(tr("Multikina"));

    QPixmap pix (":/logo/prefix1/images/logo");
    ui->label_logo_4->setPixmap(pix);
    ui->pushButton_back_2->setStyleSheet("background-image: url(:/logo/prefix1/images/back)");
    ui->label_user_5->setText("Kasjer: "+employee->getUsername());
}

EmployeeDataForm::~EmployeeDataForm()
{
    delete ui;
}

void EmployeeDataForm::on_pushButton_logout_2_clicked()
{
    EmployeeDataForm::close();
    AccountManager am;
    am.show();
}

void EmployeeDataForm::on_pushButton_back_2_clicked()
{
     EmployeeDataForm::close();
     ScheduleWindow *schedulewindow=new ScheduleWindow(employee);
     schedulewindow->show();
}

void EmployeeDataForm::on_pushButtonlog_in_4_clicked()
{
    if(ui->lineEdit_newpassword_2->text() != ui->lineEdit_repeatnewpassword_2->text())
    {
        ui->lineEdit_repeatnewpassword_2->setText("");
        ui->label_info_4->setText("Podane hasła nie są jednakowe.");
    }
    else
    {
        int passwordlength = ui->lineEdit_newpassword_2->text().size();
        ui->label_info_4->setText(QString::number(passwordlength));
        if(passwordlength<8)
        {
            ui->label_info_4->setText("Podane hasło nie spełnia wymagań.");
        }
        else
        {
            EmployeeDataForm::close();
            EmployeeRepository ER;
            ER.changePassword(employee->getUsername(), ui->lineEdit_newpassword_2->text());
            ui->label_info_4->setText("");
            ui->lineEdit_newpassword_2->setText("");
            ui->lineEdit_repeatnewpassword_2->setText("");
            AccountManager am;
            am.show2();
        }
    }
}
