#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "accountmanager.h"
#include "ticketmanager.h"
#include "employee.h"
#include "building.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    Employee *employee;

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private slots:

    void on_pushButtonlog_in_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
