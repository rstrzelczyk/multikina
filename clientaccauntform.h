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
    explicit ClientAccauntForm(Employee *e, int row, QWidget *parent = 0);
    ~ClientAccauntForm();

    Employee *employee;
    
private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_logout_clicked();

private:
    Ui::ClientAccauntForm *ui;
};

#endif // CLIENTACCAUNTFORM_H
