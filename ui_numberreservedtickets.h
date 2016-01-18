/********************************************************************************
** Form generated from reading UI file 'numberreservedtickets.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBERRESERVEDTICKETS_H
#define UI_NUMBERRESERVEDTICKETS_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NumberReservedTickets
{
public:
    QGroupBox *groupBox_info;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_info_cancel;
    QPushButton *pushButton_cancel_2;
    QGroupBox *groupBox_menu;
    QLabel *label_logo_4;
    QFrame *line_4;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_user_5;
    QPushButton *pushButton_logout_2;
    QPushButton *pushButton_back_2;
    QGroupBox *groupBoxlogin;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_card_scan;
    QPushButton *pushButton_next;
    QPushButton *pushButton_cancel;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_n;
    QPushButton *pushButton_minus_normal;
    QLineEdit *lineEdit_number_normal;
    QPushButton *pushButton_plus_normal;
    QLabel *label_number_student_ticket;
    QPushButton *pushButton_minus_student;
    QLineEdit *lineEdit_number_student;
    QPushButton *pushButton_plus_student;
    QLabel *label_allticketsprice_3;
    QPushButton *pushButton_minus_senior;
    QLineEdit *lineEdit_number_senior;
    QPushButton *pushButton_plus_senio;
    QLabel *label_total_price;
    QLabel *label_total_price_2;

    void setupUi(QDialog *NumberReservedTickets)
    {
        if (NumberReservedTickets->objectName().isEmpty())
            NumberReservedTickets->setObjectName(QStringLiteral("NumberReservedTickets"));
        NumberReservedTickets->resize(670, 449);
        groupBox_info = new QGroupBox(NumberReservedTickets);
        groupBox_info->setObjectName(QStringLiteral("groupBox_info"));
        groupBox_info->setGeometry(QRect(10, 390, 651, 51));
        layoutWidget_4 = new QWidget(groupBox_info);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 10, 491, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_info_cancel = new QLabel(layoutWidget_4);
        label_info_cancel->setObjectName(QStringLiteral("label_info_cancel"));
        QFont font;
        font.setPointSize(10);
        label_info_cancel->setFont(font);

        horizontalLayout_4->addWidget(label_info_cancel);

        pushButton_cancel_2 = new QPushButton(layoutWidget_4);
        pushButton_cancel_2->setObjectName(QStringLiteral("pushButton_cancel_2"));

        horizontalLayout_4->addWidget(pushButton_cancel_2);

        groupBox_menu = new QGroupBox(NumberReservedTickets);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        groupBox_menu->setGeometry(QRect(10, 10, 651, 111));
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
        layoutWidget_5->setGeometry(QRect(340, 40, 261, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_user_5 = new QLabel(layoutWidget_5);
        label_user_5->setObjectName(QStringLiteral("label_user_5"));
        QFont font1;
        font1.setPointSize(11);
        label_user_5->setFont(font1);

        horizontalLayout_5->addWidget(label_user_5);

        pushButton_logout_2 = new QPushButton(layoutWidget_5);
        pushButton_logout_2->setObjectName(QStringLiteral("pushButton_logout_2"));

        horizontalLayout_5->addWidget(pushButton_logout_2);

        pushButton_back_2 = new QPushButton(groupBox_menu);
        pushButton_back_2->setObjectName(QStringLiteral("pushButton_back_2"));
        pushButton_back_2->setGeometry(QRect(610, 40, 27, 27));
        groupBoxlogin = new QGroupBox(NumberReservedTickets);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 130, 651, 251));
        layoutWidget_6 = new QWidget(groupBoxlogin);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(120, 190, 411, 51));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_card_scan = new QPushButton(layoutWidget_6);
        pushButton_card_scan->setObjectName(QStringLiteral("pushButton_card_scan"));

        horizontalLayout_6->addWidget(pushButton_card_scan);

        pushButton_next = new QPushButton(layoutWidget_6);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));

        horizontalLayout_6->addWidget(pushButton_next);

        pushButton_cancel = new QPushButton(layoutWidget_6);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout_6->addWidget(pushButton_cancel);

        label_2 = new QLabel(groupBoxlogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(131, 142, 16, 16));
        label_2->setFont(font);
        label_3 = new QLabel(groupBoxlogin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(131, 91, 16, 16));
        label_3->setFont(font);
        label = new QLabel(groupBoxlogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(131, 40, 16, 16));
        label->setFont(font);
        layoutWidget = new QWidget(groupBoxlogin);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 20, 411, 161));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_n = new QLabel(layoutWidget);
        label_n->setObjectName(QStringLiteral("label_n"));
        label_n->setFont(font);

        gridLayout->addWidget(label_n, 0, 0, 1, 1);

        pushButton_minus_normal = new QPushButton(layoutWidget);
        pushButton_minus_normal->setObjectName(QStringLiteral("pushButton_minus_normal"));

        gridLayout->addWidget(pushButton_minus_normal, 0, 1, 1, 1);

        lineEdit_number_normal = new QLineEdit(layoutWidget);
        lineEdit_number_normal->setObjectName(QStringLiteral("lineEdit_number_normal"));

        gridLayout->addWidget(lineEdit_number_normal, 0, 2, 1, 1);

        pushButton_plus_normal = new QPushButton(layoutWidget);
        pushButton_plus_normal->setObjectName(QStringLiteral("pushButton_plus_normal"));

        gridLayout->addWidget(pushButton_plus_normal, 0, 3, 1, 1);

        label_number_student_ticket = new QLabel(layoutWidget);
        label_number_student_ticket->setObjectName(QStringLiteral("label_number_student_ticket"));
        label_number_student_ticket->setFont(font);

        gridLayout->addWidget(label_number_student_ticket, 1, 0, 1, 1);

        pushButton_minus_student = new QPushButton(layoutWidget);
        pushButton_minus_student->setObjectName(QStringLiteral("pushButton_minus_student"));

        gridLayout->addWidget(pushButton_minus_student, 1, 1, 1, 1);

        lineEdit_number_student = new QLineEdit(layoutWidget);
        lineEdit_number_student->setObjectName(QStringLiteral("lineEdit_number_student"));

        gridLayout->addWidget(lineEdit_number_student, 1, 2, 1, 1);

        pushButton_plus_student = new QPushButton(layoutWidget);
        pushButton_plus_student->setObjectName(QStringLiteral("pushButton_plus_student"));

        gridLayout->addWidget(pushButton_plus_student, 1, 3, 1, 1);

        label_allticketsprice_3 = new QLabel(layoutWidget);
        label_allticketsprice_3->setObjectName(QStringLiteral("label_allticketsprice_3"));
        label_allticketsprice_3->setFont(font);

        gridLayout->addWidget(label_allticketsprice_3, 2, 0, 1, 1);

        pushButton_minus_senior = new QPushButton(layoutWidget);
        pushButton_minus_senior->setObjectName(QStringLiteral("pushButton_minus_senior"));

        gridLayout->addWidget(pushButton_minus_senior, 2, 1, 1, 1);

        lineEdit_number_senior = new QLineEdit(layoutWidget);
        lineEdit_number_senior->setObjectName(QStringLiteral("lineEdit_number_senior"));

        gridLayout->addWidget(lineEdit_number_senior, 2, 2, 1, 1);

        pushButton_plus_senio = new QPushButton(layoutWidget);
        pushButton_plus_senio->setObjectName(QStringLiteral("pushButton_plus_senio"));

        gridLayout->addWidget(pushButton_plus_senio, 2, 3, 1, 1);

        label_total_price = new QLabel(layoutWidget);
        label_total_price->setObjectName(QStringLiteral("label_total_price"));
        label_total_price->setFont(font);

        gridLayout->addWidget(label_total_price, 3, 0, 1, 1);

        label_total_price_2 = new QLabel(layoutWidget);
        label_total_price_2->setObjectName(QStringLiteral("label_total_price_2"));
        label_total_price_2->setFont(font);

        gridLayout->addWidget(label_total_price_2, 3, 1, 1, 1);


        retranslateUi(NumberReservedTickets);

        QMetaObject::connectSlotsByName(NumberReservedTickets);
    } // setupUi

    void retranslateUi(QDialog *NumberReservedTickets)
    {
        NumberReservedTickets->setWindowTitle(QApplication::translate("NumberReservedTickets", "Dialog", 0));
        groupBox_info->setTitle(QString());
        label_info_cancel->setText(QApplication::translate("NumberReservedTickets", "Zam\303\263wienie anulowane", 0));
        pushButton_cancel_2->setText(QApplication::translate("NumberReservedTickets", "Powr\303\263t do ekranu g\305\202\303\263wnego", 0));
        groupBox_menu->setTitle(QString());
        label_logo_4->setText(QString());
        label_user_5->setText(QApplication::translate("NumberReservedTickets", "kowalski", 0));
        pushButton_logout_2->setText(QApplication::translate("NumberReservedTickets", "Wyloguj", 0));
        pushButton_back_2->setText(QString());
        groupBoxlogin->setTitle(QString());
        pushButton_card_scan->setText(QApplication::translate("NumberReservedTickets", "Wczytaj kart\304\231", 0));
        pushButton_next->setText(QApplication::translate("NumberReservedTickets", "Dalej", 0));
        pushButton_cancel->setText(QApplication::translate("NumberReservedTickets", "Anuluj zam\303\263wienie", 0));
        label_2->setText(QString());
        label_3->setText(QString());
        label->setText(QString());
        label_n->setText(QApplication::translate("NumberReservedTickets", "Bilety normalne", 0));
        pushButton_minus_normal->setText(QApplication::translate("NumberReservedTickets", "-", 0));
        lineEdit_number_normal->setText(QApplication::translate("NumberReservedTickets", "0", 0));
        pushButton_plus_normal->setText(QApplication::translate("NumberReservedTickets", "+", 0));
        label_number_student_ticket->setText(QApplication::translate("NumberReservedTickets", "Bilety ze zni\305\274k\304\205 studenck\304\205:", 0));
        pushButton_minus_student->setText(QApplication::translate("NumberReservedTickets", "-", 0));
        lineEdit_number_student->setText(QApplication::translate("NumberReservedTickets", "0", 0));
        pushButton_plus_student->setText(QApplication::translate("NumberReservedTickets", "+", 0));
        label_allticketsprice_3->setText(QApplication::translate("NumberReservedTickets", "Bilety ze zni\305\274k\304\205 seniora:", 0));
        pushButton_minus_senior->setText(QApplication::translate("NumberReservedTickets", "-", 0));
        lineEdit_number_senior->setText(QApplication::translate("NumberReservedTickets", "0", 0));
        pushButton_plus_senio->setText(QApplication::translate("NumberReservedTickets", "+", 0));
        label_total_price->setText(QApplication::translate("NumberReservedTickets", "Cena bilet\303\263w:", 0));
        label_total_price_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NumberReservedTickets: public Ui_NumberReservedTickets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBERRESERVEDTICKETS_H
