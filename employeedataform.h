#ifndef EMPLOYEEDATAFORM_H
#define EMPLOYEEDATAFORM_H

#include <QDialog>

#include "employee.h"
#include "cinemabuildingrepertoirschedule.h"

namespace Ui {
class EmployeeDataForm;
}

class EmployeeDataForm : public QDialog
{
    Q_OBJECT

    Employee *employee;
    
public:
    explicit EmployeeDataForm(Employee *e, QWidget *parent = 0);
    ~EmployeeDataForm();
    
private slots:
    void on_pushButton_back_clicked();

    void on_pushButtonlog_in_3_clicked();

    void on_pushButton_logout_clicked();

private:
    Ui::EmployeeDataForm *ui;
};

#endif // EMPLOYEEDATAFORM_H
