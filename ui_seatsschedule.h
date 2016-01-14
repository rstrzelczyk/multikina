/********************************************************************************
** Form generated from reading UI file 'seatsschedule.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEATSSCHEDULE_H
#define UI_SEATSSCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeatsSchedule
{
public:
    QGroupBox *groupBox_menu;
    QLabel *label_logo_4;
    QFrame *line_4;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_user_5;
    QPushButton *pushButton_logout_2;
    QPushButton *pushButton_back_2;
    QGroupBox *groupBox_info;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_info_4;
    QGroupBox *groupBoxlogin;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_number_tickets;
    QLineEdit *lineEdit_number_tickets;
    QPushButton *pushButton_next;
    QTableView *tableView;

    void setupUi(QDialog *SeatsSchedule)
    {
        if (SeatsSchedule->objectName().isEmpty())
            SeatsSchedule->setObjectName(QStringLiteral("SeatsSchedule"));
        SeatsSchedule->resize(691, 690);
        groupBox_menu = new QGroupBox(SeatsSchedule);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        groupBox_menu->setGeometry(QRect(10, 10, 671, 111));
        label_logo_4 = new QLabel(groupBox_menu);
        label_logo_4->setObjectName(QStringLiteral("label_logo_4"));
        label_logo_4->setGeometry(QRect(10, 10, 321, 91));
        line_4 = new QFrame(groupBox_menu);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(322, 0, 31, 121));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget_5 = new QWidget(groupBox_menu);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(350, 40, 261, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_user_5 = new QLabel(layoutWidget_5);
        label_user_5->setObjectName(QStringLiteral("label_user_5"));
        QFont font;
        font.setPointSize(11);
        label_user_5->setFont(font);

        horizontalLayout_5->addWidget(label_user_5);

        pushButton_logout_2 = new QPushButton(layoutWidget_5);
        pushButton_logout_2->setObjectName(QStringLiteral("pushButton_logout_2"));

        horizontalLayout_5->addWidget(pushButton_logout_2);

        pushButton_back_2 = new QPushButton(groupBox_menu);
        pushButton_back_2->setObjectName(QStringLiteral("pushButton_back_2"));
        pushButton_back_2->setGeometry(QRect(620, 40, 31, 23));
        groupBox_info = new QGroupBox(SeatsSchedule);
        groupBox_info->setObjectName(QStringLiteral("groupBox_info"));
        groupBox_info->setGeometry(QRect(10, 630, 671, 51));
        layoutWidget_4 = new QWidget(groupBox_info);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 10, 491, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_info_4 = new QLabel(layoutWidget_4);
        label_info_4->setObjectName(QStringLiteral("label_info_4"));
        QFont font1;
        font1.setPointSize(10);
        label_info_4->setFont(font1);

        horizontalLayout_4->addWidget(label_info_4);

        groupBoxlogin = new QGroupBox(SeatsSchedule);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 130, 671, 491));
        label_2 = new QLabel(groupBoxlogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(131, 142, 16, 16));
        label_2->setFont(font1);
        label_3 = new QLabel(groupBoxlogin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(131, 91, 16, 16));
        label_3->setFont(font1);
        label = new QLabel(groupBoxlogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(131, 40, 16, 16));
        label->setFont(font1);
        layoutWidget = new QWidget(groupBoxlogin);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 10, 411, 31));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_number_tickets = new QLabel(layoutWidget);
        label_number_tickets->setObjectName(QStringLiteral("label_number_tickets"));
        label_number_tickets->setFont(font1);

        gridLayout->addWidget(label_number_tickets, 0, 0, 1, 1);

        lineEdit_number_tickets = new QLineEdit(layoutWidget);
        lineEdit_number_tickets->setObjectName(QStringLiteral("lineEdit_number_tickets"));

        gridLayout->addWidget(lineEdit_number_tickets, 0, 1, 1, 1);

        pushButton_next = new QPushButton(layoutWidget);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));

        gridLayout->addWidget(pushButton_next, 0, 2, 1, 1);

        tableView = new QTableView(groupBoxlogin);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 60, 631, 421));

        retranslateUi(SeatsSchedule);

        QMetaObject::connectSlotsByName(SeatsSchedule);
    } // setupUi

    void retranslateUi(QDialog *SeatsSchedule)
    {
        SeatsSchedule->setWindowTitle(QApplication::translate("SeatsSchedule", "Dialog", 0));
        groupBox_menu->setTitle(QString());
        label_logo_4->setText(QString());
        label_user_5->setText(QApplication::translate("SeatsSchedule", "Niezalogowany", 0));
        pushButton_logout_2->setText(QApplication::translate("SeatsSchedule", "Wyloguj", 0));
        pushButton_back_2->setText(QApplication::translate("SeatsSchedule", "<-", 0));
        groupBox_info->setTitle(QString());
        label_info_4->setText(QApplication::translate("SeatsSchedule", "Nie wybrano eszystkich miejsc", 0));
        groupBoxlogin->setTitle(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label->setText(QString());
        label_number_tickets->setText(QApplication::translate("SeatsSchedule", "Ilo\305\233\304\207 wybranych miejsc:", 0));
        pushButton_next->setText(QApplication::translate("SeatsSchedule", "Dalej", 0));
    } // retranslateUi

};

namespace Ui {
    class SeatsSchedule: public Ui_SeatsSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEATSSCHEDULE_H
