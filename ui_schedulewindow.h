/********************************************************************************
** Form generated from reading UI file 'schedulewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULEWINDOW_H
#define UI_SCHEDULEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScheduleWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_seans_date;
    QPushButton *pushButton_tomorrow;
    QPushButton *pushButton_give_ticket;
    QPushButton *pushButton_otherday;
    QPushButton *pushButton_create_account;
    QGroupBox *groupBox_menu;
    QLabel *label_logo;
    QFrame *line;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_building;
    QLabel *label_user;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_modyfydata;
    QPushButton *pushButton_logout;
    QPushButton *pushButton_client_account;
    QDateEdit *dateEdit;
    QTableView *tableView_schedule;
    QLineEdit *lineEdit_date;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ScheduleWindow)
    {
        if (ScheduleWindow->objectName().isEmpty())
            ScheduleWindow->setObjectName(QStringLiteral("ScheduleWindow"));
        ScheduleWindow->resize(995, 843);
        centralwidget = new QWidget(ScheduleWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_seans_date = new QLabel(centralwidget);
        label_seans_date->setObjectName(QStringLiteral("label_seans_date"));
        label_seans_date->setGeometry(QRect(790, 140, 71, 21));
        QFont font;
        font.setPointSize(9);
        label_seans_date->setFont(font);
        pushButton_tomorrow = new QPushButton(centralwidget);
        pushButton_tomorrow->setObjectName(QStringLiteral("pushButton_tomorrow"));
        pushButton_tomorrow->setGeometry(QRect(740, 170, 101, 71));
        pushButton_give_ticket = new QPushButton(centralwidget);
        pushButton_give_ticket->setObjectName(QStringLiteral("pushButton_give_ticket"));
        pushButton_give_ticket->setGeometry(QRect(20, 140, 121, 81));
        pushButton_otherday = new QPushButton(centralwidget);
        pushButton_otherday->setObjectName(QStringLiteral("pushButton_otherday"));
        pushButton_otherday->setGeometry(QRect(880, 170, 101, 71));
        pushButton_create_account = new QPushButton(centralwidget);
        pushButton_create_account->setObjectName(QStringLiteral("pushButton_create_account"));
        pushButton_create_account->setGeometry(QRect(200, 140, 121, 81));
        groupBox_menu = new QGroupBox(centralwidget);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        groupBox_menu->setGeometry(QRect(10, 10, 971, 111));
        label_logo = new QLabel(groupBox_menu);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setGeometry(QRect(10, 10, 321, 91));
        line = new QFrame(groupBox_menu);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(322, 0, 31, 121));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(groupBox_menu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(350, 40, 601, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_building = new QLabel(layoutWidget);
        label_building->setObjectName(QStringLiteral("label_building"));
        QFont font1;
        font1.setPointSize(10);
        label_building->setFont(font1);

        horizontalLayout_2->addWidget(label_building);

        label_user = new QLabel(layoutWidget);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setFont(font1);

        horizontalLayout_2->addWidget(label_user);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_modyfydata = new QPushButton(layoutWidget);
        pushButton_modyfydata->setObjectName(QStringLiteral("pushButton_modyfydata"));
        pushButton_modyfydata->setMinimumSize(QSize(50, 30));

        horizontalLayout->addWidget(pushButton_modyfydata);

        pushButton_logout = new QPushButton(layoutWidget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setMinimumSize(QSize(50, 30));

        horizontalLayout->addWidget(pushButton_logout);


        horizontalLayout_2->addLayout(horizontalLayout);

        pushButton_client_account = new QPushButton(centralwidget);
        pushButton_client_account->setObjectName(QStringLiteral("pushButton_client_account"));
        pushButton_client_account->setGeometry(QRect(380, 140, 121, 81));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(580, 190, 111, 20));
        dateEdit->setReadOnly(true);
        tableView_schedule = new QTableView(centralwidget);
        tableView_schedule->setObjectName(QStringLiteral("tableView_schedule"));
        tableView_schedule->setGeometry(QRect(20, 250, 961, 551));
        lineEdit_date = new QLineEdit(centralwidget);
        lineEdit_date->setObjectName(QStringLiteral("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(870, 140, 113, 20));
        lineEdit_date->setReadOnly(true);
        ScheduleWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ScheduleWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 995, 21));
        ScheduleWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ScheduleWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ScheduleWindow->setStatusBar(statusbar);

        retranslateUi(ScheduleWindow);

        QMetaObject::connectSlotsByName(ScheduleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ScheduleWindow)
    {
        ScheduleWindow->setWindowTitle(QApplication::translate("ScheduleWindow", "MainWindow", 0));
        label_seans_date->setText(QApplication::translate("ScheduleWindow", "Data seansu:", 0));
        pushButton_tomorrow->setText(QApplication::translate("ScheduleWindow", "Jutro", 0));
        pushButton_give_ticket->setText(QApplication::translate("ScheduleWindow", "Wydaj bilet", 0));
        pushButton_otherday->setText(QApplication::translate("ScheduleWindow", "Inny dzie\305\204", 0));
        pushButton_create_account->setText(QApplication::translate("ScheduleWindow", "Utw\303\263rz konto", 0));
        groupBox_menu->setTitle(QString());
        label_logo->setText(QString());
        label_building->setText(QString());
        label_user->setText(QString());
        pushButton_modyfydata->setText(QApplication::translate("ScheduleWindow", "Modyfikuj dane", 0));
        pushButton_logout->setText(QApplication::translate("ScheduleWindow", "Wyloguj", 0));
        pushButton_client_account->setText(QApplication::translate("ScheduleWindow", "Konto klienta", 0));
    } // retranslateUi

};

namespace Ui {
    class ScheduleWindow: public Ui_ScheduleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULEWINDOW_H
