/********************************************************************************
** Form generated from reading UI file 'cinemabuildingrepertoirschedule.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CINEMABUILDINGREPERTOIRSCHEDULE_H
#define UI_CINEMABUILDINGREPERTOIRSCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CinemaBuildingRepertoirSchedule
{
public:
    QLabel *label_seans_date;
    QPushButton *pushButton_otherday;
    QPushButton *pushButton_client_account;
    QPushButton *pushButton_give_ticket;
    QPushButton *pushButton_tomorrow;
    QDateEdit *dateEdit;
    QTableView *tableView_schedule;
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

    void setupUi(QDialog *CinemaBuildingRepertoirSchedule)
    {
        if (CinemaBuildingRepertoirSchedule->objectName().isEmpty())
            CinemaBuildingRepertoirSchedule->setObjectName(QStringLiteral("CinemaBuildingRepertoirSchedule"));
        CinemaBuildingRepertoirSchedule->resize(926, 698);
        label_seans_date = new QLabel(CinemaBuildingRepertoirSchedule);
        label_seans_date->setObjectName(QStringLiteral("label_seans_date"));
        label_seans_date->setGeometry(QRect(700, 130, 71, 21));
        QFont font;
        font.setPointSize(9);
        label_seans_date->setFont(font);
        pushButton_otherday = new QPushButton(CinemaBuildingRepertoirSchedule);
        pushButton_otherday->setObjectName(QStringLiteral("pushButton_otherday"));
        pushButton_otherday->setGeometry(QRect(810, 160, 81, 51));
        pushButton_client_account = new QPushButton(CinemaBuildingRepertoirSchedule);
        pushButton_client_account->setObjectName(QStringLiteral("pushButton_client_account"));
        pushButton_client_account->setGeometry(QRect(310, 140, 101, 71));
        pushButton_give_ticket = new QPushButton(CinemaBuildingRepertoirSchedule);
        pushButton_give_ticket->setObjectName(QStringLiteral("pushButton_give_ticket"));
        pushButton_give_ticket->setGeometry(QRect(20, 140, 101, 71));
        pushButton_tomorrow = new QPushButton(CinemaBuildingRepertoirSchedule);
        pushButton_tomorrow->setObjectName(QStringLiteral("pushButton_tomorrow"));
        pushButton_tomorrow->setGeometry(QRect(700, 160, 81, 51));
        dateEdit = new QDateEdit(CinemaBuildingRepertoirSchedule);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(780, 130, 111, 20));
        dateEdit->setReadOnly(true);
        tableView_schedule = new QTableView(CinemaBuildingRepertoirSchedule);
        tableView_schedule->setObjectName(QStringLiteral("tableView_schedule"));
        tableView_schedule->setGeometry(QRect(20, 230, 871, 451));
        pushButton_create_account = new QPushButton(CinemaBuildingRepertoirSchedule);
        pushButton_create_account->setObjectName(QStringLiteral("pushButton_create_account"));
        pushButton_create_account->setGeometry(QRect(160, 140, 101, 71));
        groupBox_menu = new QGroupBox(CinemaBuildingRepertoirSchedule);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        groupBox_menu->setGeometry(QRect(10, 10, 891, 111));
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
        layoutWidget->setGeometry(QRect(350, 40, 521, 51));
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

        horizontalLayout->addWidget(pushButton_modyfydata);

        pushButton_logout = new QPushButton(layoutWidget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        horizontalLayout->addWidget(pushButton_logout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(CinemaBuildingRepertoirSchedule);

        QMetaObject::connectSlotsByName(CinemaBuildingRepertoirSchedule);
    } // setupUi

    void retranslateUi(QDialog *CinemaBuildingRepertoirSchedule)
    {
        CinemaBuildingRepertoirSchedule->setWindowTitle(QApplication::translate("CinemaBuildingRepertoirSchedule", "Dialog", 0));
        label_seans_date->setText(QApplication::translate("CinemaBuildingRepertoirSchedule", "Data seansu:", 0));
        pushButton_otherday->setText(QApplication::translate("CinemaBuildingRepertoirSchedule", "Inny dzie\305\204", 0));
        pushButton_client_account->setText(QApplication::translate("CinemaBuildingRepertoirSchedule", "Konto klienta", 0));
        pushButton_give_ticket->setText(QApplication::translate("CinemaBuildingRepertoirSchedule", "Wydaj bilet", 0));
        pushButton_tomorrow->setText(QApplication::translate("CinemaBuildingRepertoirSchedule", "Jutro", 0));
        pushButton_create_account->setText(QApplication::translate("CinemaBuildingRepertoirSchedule", "Utw\303\263rz konto", 0));
        groupBox_menu->setTitle(QString());
        label_logo->setText(QString());
        label_building->setText(QString());
        label_user->setText(QString());
        pushButton_modyfydata->setText(QApplication::translate("CinemaBuildingRepertoirSchedule", "Modyfikuj dane", 0));
        pushButton_logout->setText(QApplication::translate("CinemaBuildingRepertoirSchedule", "Wyloguj", 0));
    } // retranslateUi

};

namespace Ui {
    class CinemaBuildingRepertoirSchedule: public Ui_CinemaBuildingRepertoirSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CINEMABUILDINGREPERTOIRSCHEDULE_H
