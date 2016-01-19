/********************************************************************************
** Form generated from reading UI file 'payment.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_H
#define UI_PAYMENT_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Payment
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
    QGroupBox *groupBoxlogin;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_price;
    QLabel *label_price_2;
    QLabel *label_cash;
    QLineEdit *lineEdit_cash;
    QLabel *label_rest;
    QLabel *label_rest_2;
    QPushButton *pushButton_finish;

    void setupUi(QDialog *Payment)
    {
        if (Payment->objectName().isEmpty())
            Payment->setObjectName(QStringLiteral("Payment"));
        Payment->resize(670, 269);
        groupBox_menu = new QGroupBox(Payment);
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
        QFont font;
        font.setPointSize(11);
        label_user_5->setFont(font);

        horizontalLayout_5->addWidget(label_user_5);

        pushButton_logout_2 = new QPushButton(layoutWidget_5);
        pushButton_logout_2->setObjectName(QStringLiteral("pushButton_logout_2"));

        horizontalLayout_5->addWidget(pushButton_logout_2);

        pushButton_back_2 = new QPushButton(groupBox_menu);
        pushButton_back_2->setObjectName(QStringLiteral("pushButton_back_2"));
        pushButton_back_2->setGeometry(QRect(610, 40, 31, 23));
        groupBoxlogin = new QGroupBox(Payment);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 130, 651, 131));
        formLayoutWidget_4 = new QWidget(groupBoxlogin);
        formLayoutWidget_4->setObjectName(QStringLiteral("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(130, 10, 361, 71));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_price = new QLabel(formLayoutWidget_4);
        label_price->setObjectName(QStringLiteral("label_price"));
        QFont font1;
        font1.setPointSize(10);
        label_price->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_price);

        label_price_2 = new QLabel(formLayoutWidget_4);
        label_price_2->setObjectName(QStringLiteral("label_price_2"));
        label_price_2->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, label_price_2);

        label_cash = new QLabel(formLayoutWidget_4);
        label_cash->setObjectName(QStringLiteral("label_cash"));
        label_cash->setFont(font1);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_cash);

        lineEdit_cash = new QLineEdit(formLayoutWidget_4);
        lineEdit_cash->setObjectName(QStringLiteral("lineEdit_cash"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_cash);

        label_rest = new QLabel(formLayoutWidget_4);
        label_rest->setObjectName(QStringLiteral("label_rest"));
        label_rest->setFont(font1);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_rest);

        label_rest_2 = new QLabel(formLayoutWidget_4);
        label_rest_2->setObjectName(QStringLiteral("label_rest_2"));
        label_rest_2->setFont(font1);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, label_rest_2);

        pushButton_finish = new QPushButton(groupBoxlogin);
        pushButton_finish->setObjectName(QStringLiteral("pushButton_finish"));
        pushButton_finish->setGeometry(QRect(240, 100, 116, 23));

        retranslateUi(Payment);

        QMetaObject::connectSlotsByName(Payment);
    } // setupUi

    void retranslateUi(QDialog *Payment)
    {
        Payment->setWindowTitle(QApplication::translate("Payment", "Dialog", 0));
        groupBox_menu->setTitle(QString());
        label_logo_4->setText(QString());
        label_user_5->setText(QApplication::translate("Payment", "kowalski", 0));
        pushButton_logout_2->setText(QApplication::translate("Payment", "Wyloguj", 0));
        pushButton_back_2->setText(QString());
        groupBoxlogin->setTitle(QString());
        label_price->setText(QApplication::translate("Payment", "Do zap\305\202aty:", 0));
        label_price_2->setText(QString());
        label_cash->setText(QApplication::translate("Payment", "Got\303\263wka:", 0));
        label_rest->setText(QApplication::translate("Payment", "Reszta:", 0));
        label_rest_2->setText(QString());
        pushButton_finish->setText(QApplication::translate("Payment", "Koniec", 0));
    } // retranslateUi

};

namespace Ui {
    class Payment: public Ui_Payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
