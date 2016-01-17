#ifndef NEWCLIENTACCOUNTFORM_H
#define NEWCLIENTACCOUNTFORM_H

#include <QMainWindow>
#include <QString>

#include "employee.h"
#include "buildinglist.h"
#include "clientaccauntform.h"

namespace Ui {
class NewClientAccountForm;
}

class NewClientAccountForm : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit NewClientAccountForm(QString building, Employee *e, QWidget *parent = 0);
    ~NewClientAccountForm();

    //void setDefaultValues();
    //bool AllObligatoryDataWritten();
    bool isValidPhoneNumberFormat();
    bool isValidPasswordFormat();
    bool isPassword2SameAsPassword();
    //bool isValidEmailFormat();

    
private slots:
    void on_pushButton_ok_clicked();

    void on_pushButton_choose_building_clicked();

    void on_pushButton_confitm_student_discount_clicked();

    void on_pushButton_senior_discount_clicked();

private:
    Ui::NewClientAccountForm *ui;
};

#endif // NEWCLIENTACCOUNTFORM_H
