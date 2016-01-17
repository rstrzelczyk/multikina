#ifndef EMPLOYEEDATAFORM_H
#define EMPLOYEEDATAFORM_H

#include <QMainWindow>
#include "employee.h"
#include "schedulewindow.h"

namespace Ui {
class EmployeeDataForm;
}

class EmployeeDataForm : public QMainWindow
{
    Q_OBJECT

    Employee *employee;
    
public:
    explicit EmployeeDataForm(Employee *e, QWidget *parent = 0);
    ~EmployeeDataForm();
    
private slots:
    void on_pushButton_logout_2_clicked();

    void on_pushButton_back_2_clicked();

    void on_pushButtonlog_in_4_clicked();

private:
    Ui::EmployeeDataForm *ui;
};

#endif // EMPLOYEEDATAFORM_H
