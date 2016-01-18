#ifndef CLIENTACCAUNTFORM_H
#define CLIENTACCAUNTFORM_H

#include <QMainWindow>
#include <accountmanager.h>
#include "client.h"
namespace Ui {
class ClientAccauntForm;
}

class ClientAccauntForm : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ClientAccauntForm(Client *c, Building *b, Employee *e, QString discount, QString state, int row, QWidget *parent = 0);
    ~ClientAccauntForm();

    Employee *employee;
    
private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_logout_clicked();

    void on_pushButton_confim_account_clicked();

    void on_pushButton_confitm_discount_clicked();

    void on_pushButton_add_card_clicked();

private:
    Ui::ClientAccauntForm *ui;
};

#endif // CLIENTACCAUNTFORM_H
