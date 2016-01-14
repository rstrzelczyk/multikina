/********************************************************************************
** Form generated from reading UI file 'ordervalidationticketoffice.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERVALIDATIONTICKETOFFICE_H
#define UI_ORDERVALIDATIONTICKETOFFICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderValidationTicketOffice
{
public:
    QGroupBox *groupBoxlogin;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_number_order;
    QLabel *label_number_order_2;
    QLabel *label_state;
    QLabel *label_state_2;
    QLabel *label;
    QPushButton *pushButton_finish_2;
    QGroupBox *groupBox_menu;
    QLabel *label_logo_5;
    QFrame *line_5;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_user_6;
    QPushButton *pushButton_logout_3;
    QPushButton *pushButton_back_3;

    void setupUi(QDialog *OrderValidationTicketOffice)
    {
        if (OrderValidationTicketOffice->objectName().isEmpty())
            OrderValidationTicketOffice->setObjectName(QStringLiteral("OrderValidationTicketOffice"));
        OrderValidationTicketOffice->resize(669, 260);
        groupBoxlogin = new QGroupBox(OrderValidationTicketOffice);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 130, 651, 121));
        formLayoutWidget_5 = new QWidget(groupBoxlogin);
        formLayoutWidget_5->setObjectName(QStringLiteral("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(130, 10, 381, 65));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_number_order = new QLabel(formLayoutWidget_5);
        label_number_order->setObjectName(QStringLiteral("label_number_order"));
        QFont font;
        font.setPointSize(12);
        label_number_order->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_number_order);

        label_number_order_2 = new QLabel(formLayoutWidget_5);
        label_number_order_2->setObjectName(QStringLiteral("label_number_order_2"));
        label_number_order_2->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, label_number_order_2);

        label_state = new QLabel(formLayoutWidget_5);
        label_state->setObjectName(QStringLiteral("label_state"));
        label_state->setFont(font);

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_state);

        label_state_2 = new QLabel(formLayoutWidget_5);
        label_state_2->setObjectName(QStringLiteral("label_state_2"));
        label_state_2->setFont(font);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, label_state_2);

        label = new QLabel(formLayoutWidget_5);
        label->setObjectName(QStringLiteral("label"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label);

        pushButton_finish_2 = new QPushButton(groupBoxlogin);
        pushButton_finish_2->setObjectName(QStringLiteral("pushButton_finish_2"));
        pushButton_finish_2->setGeometry(QRect(250, 90, 116, 23));
        groupBox_menu = new QGroupBox(OrderValidationTicketOffice);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        groupBox_menu->setGeometry(QRect(10, 10, 651, 111));
        label_logo_5 = new QLabel(groupBox_menu);
        label_logo_5->setObjectName(QStringLiteral("label_logo_5"));
        label_logo_5->setGeometry(QRect(10, 10, 321, 91));
        line_5 = new QFrame(groupBox_menu);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(322, 0, 31, 121));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        layoutWidget_6 = new QWidget(groupBox_menu);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(340, 40, 261, 27));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_user_6 = new QLabel(layoutWidget_6);
        label_user_6->setObjectName(QStringLiteral("label_user_6"));
        QFont font1;
        font1.setPointSize(11);
        label_user_6->setFont(font1);

        horizontalLayout_6->addWidget(label_user_6);

        pushButton_logout_3 = new QPushButton(layoutWidget_6);
        pushButton_logout_3->setObjectName(QStringLiteral("pushButton_logout_3"));

        horizontalLayout_6->addWidget(pushButton_logout_3);

        pushButton_back_3 = new QPushButton(groupBox_menu);
        pushButton_back_3->setObjectName(QStringLiteral("pushButton_back_3"));
        pushButton_back_3->setGeometry(QRect(610, 40, 31, 23));

        retranslateUi(OrderValidationTicketOffice);

        QMetaObject::connectSlotsByName(OrderValidationTicketOffice);
    } // setupUi

    void retranslateUi(QDialog *OrderValidationTicketOffice)
    {
        OrderValidationTicketOffice->setWindowTitle(QApplication::translate("OrderValidationTicketOffice", "Dialog", 0));
        groupBoxlogin->setTitle(QString());
        label_number_order->setText(QApplication::translate("OrderValidationTicketOffice", "Nr zam\303\263wienia", 0));
        label_number_order_2->setText(QString());
        label_state->setText(QApplication::translate("OrderValidationTicketOffice", "Status p\305\202atno\305\233ci:", 0));
        label_state_2->setText(QString());
        label->setText(QString());
        pushButton_finish_2->setText(QApplication::translate("OrderValidationTicketOffice", "Koniec", 0));
        groupBox_menu->setTitle(QString());
        label_logo_5->setText(QString());
        label_user_6->setText(QApplication::translate("OrderValidationTicketOffice", "Niezalogowany", 0));
        pushButton_logout_3->setText(QApplication::translate("OrderValidationTicketOffice", "Wyloguj", 0));
        pushButton_back_3->setText(QApplication::translate("OrderValidationTicketOffice", "<-", 0));
    } // retranslateUi

};

namespace Ui {
    class OrderValidationTicketOffice: public Ui_OrderValidationTicketOffice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERVALIDATIONTICKETOFFICE_H
