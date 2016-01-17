#ifndef SEARCHCLIENTWINDOW_H
#define SEARCHCLIENTWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QString>
#include <QSqlQueryModel>
#include <QTableView>
#include <QSortFilterProxyModel>
#include <QList>

#include "clientaccauntform.h"
#include "schedulewindow.h"
#include"clientrepository.h"
#include "employee.h"
#include "accountmanager.h"

namespace Ui {

class Client;

class SearchClientWindow;
}

class SearchClientWindow : public QMainWindow
{
    Q_OBJECT

    Employee *employee;
    QList<Client*> Clients;
    
public:
    explicit SearchClientWindow(Employee *e, QWidget *parent = 0);
    ~SearchClientWindow();

    void showAllClients();
    
private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_logout_clicked();

    void on_lineEdit_searchemail_textChanged(const QString &arg1);

    void on_lineEdit_searchname_textChanged(const QString &arg1);

    void on_lineEdit_searchsurname_textChanged(const QString &arg1);

    void on_tableView_search_client_doubleClicked(const QModelIndex &index);

private:
    Ui::SearchClientWindow *ui;
};

#endif // SEARCHCLIENTWINDOW_H
