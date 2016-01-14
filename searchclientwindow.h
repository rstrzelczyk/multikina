#ifndef SEARCHCLIENTWINDOW_H
#define SEARCHCLIENTWINDOW_H

#include <QDialog>

#include "clientaccountform.h"
#include "cinemabuildingrepertoirschedule.h"

#include"clientrepository.h"
#include "employee.h"

#include <QtSql>
#include <QDebug>
#include <QString>
#include <QSqlQueryModel>
#include <QTableView>
#include <QSortFilterProxyModel>
#include <QList>

namespace Ui {
class SearchClientWindow;
}

class SearchClientWindow : public QDialog
{
    Q_OBJECT

    Employee *employee;

    QList <Client> Clients;

    SearchClientWindow *SearchClientWindowForm;

    //QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel;

    QSqlDatabase db;
    
public:
    explicit SearchClientWindow(Employee *e, QWidget *parent = 0);
    ~SearchClientWindow();
    
private:
    Ui::SearchClientWindow *ui;

private slots:

    void on_pushButton_back_clicked();
    void on_pushButton_logout_clicked();

    void searchClient();
    void on_tableView_search_client_activated(const QModelIndex &index);
};

#endif // SEARCHCLIENTWINDOW_H
