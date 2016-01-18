#ifndef NEWCLIENTACCOUNTFORM_H
#define NEWCLIENTACCOUNTFORM_H

#include <QMainWindow>
#include <QString>

#include "employee.h"
#include "building.h"
#include "buildinglist.h"
#include "clientaccauntform.h"
#include "accountmanager.h"

namespace Ui {
class NewClientAccountForm;
}

class NewClientAccountForm : public QMainWindow
{
    Q_OBJECT

    Employee *employee;
    
public:
    explicit NewClientAccountForm(QWidget *parent = 0);
    ~NewClientAccountForm();

    void setDefaultValues();
    bool AllObligatoryDataWritten();
    bool isValidPhoneNumberFormat();
    bool isValidPasswordFormat();
    bool isPassword2SameAsPassword();
    bool isValidEmailFormat();
    void setBuilding(Building *b);
    void showWindow(Employee* e);
    
private slots:
    void on_pushButton_ok_clicked();

    void on_pushButton_choose_building_clicked();

    void on_pushButton_confitm_student_discount_clicked();

    void on_pushButton_senior_discount_clicked();

    void on_lineEdit_password_2_textChanged(const QString &arg1);

    void on_lineEdit_confirnpassword_textEdited(const QString &arg1);

    void on_lineEdit_email_textChanged(const QString &arg1);

    void on_lineEdit_telephone_textEdited(const QString &arg1);

    void on_lineEdit_name_textEdited(const QString &arg1);

    void on_lineEdit_surname_textEdited(const QString &arg1);

    void on_lineEdit_email_editingFinished();

private:
    Ui::NewClientAccountForm *ui;

    friend class BuildingList;
};

#endif // NEWCLIENTACCOUNTFORM_H
