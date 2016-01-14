#ifndef CLIENTACCOUNTFORM_H
#define CLIENTACCOUNTFORM_H

#include <QDialog>

namespace Ui {
class ClientAccountForm;
}

class ClientAccountForm : public QDialog
{
    Q_OBJECT
    
public:
    explicit ClientAccountForm(QWidget *parent = 0);
    ~ClientAccountForm();
    
private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_confitm_discount_clicked();

    void on_pushButton_confim_account_clicked();

private:
    Ui::ClientAccountForm *ui;
};

#endif // CLIENTACCOUNTFORM_H
