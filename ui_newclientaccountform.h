/********************************************************************************
** Form generated from reading UI file 'newclientaccountform.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCLIENTACCOUNTFORM_H
#define UI_NEWCLIENTACCOUNTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewClientAccountForm
{
public:
    QGroupBox *groupBoxlogin;
    QPushButton *pushButton_ok;
    QLabel *label_places_involved;
    QPushButton *pushButton_choose_building;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_surname;
    QLineEdit *lineEdit_surname;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_telephone;
    QLineEdit *lineEdit_validtelephone;
    QLineEdit *lineEdit_telephone;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_email;
    QLineEdit *lineEdit_validemail;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_password_2;
    QLineEdit *lineEdit_validpass;
    QLineEdit *lineEdit_password_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_confirmpassword;
    QLineEdit *lineEdit_validpass2;
    QLineEdit *lineEdit_confirnpassword;
    QLabel *label_cinema_building;
    QLineEdit *lineEdit_building;
    QLabel *label_discount;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_senior_discount;
    QPushButton *pushButton_confitm_student_discount;

    void setupUi(QDialog *NewClientAccountForm)
    {
        if (NewClientAccountForm->objectName().isEmpty())
            NewClientAccountForm->setObjectName(QStringLiteral("NewClientAccountForm"));
        NewClientAccountForm->resize(393, 554);
        groupBoxlogin = new QGroupBox(NewClientAccountForm);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 10, 371, 526));
        pushButton_ok = new QPushButton(groupBoxlogin);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(70, 450, 101, 31));
        label_places_involved = new QLabel(groupBoxlogin);
        label_places_involved->setObjectName(QStringLiteral("label_places_involved"));
        label_places_involved->setGeometry(QRect(10, 500, 111, 16));
        QFont font;
        font.setPointSize(8);
        label_places_involved->setFont(font);
        pushButton_choose_building = new QPushButton(groupBoxlogin);
        pushButton_choose_building->setObjectName(QStringLiteral("pushButton_choose_building"));
        pushButton_choose_building->setGeometry(QRect(270, 360, 91, 23));
        layoutWidget = new QWidget(groupBoxlogin);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 10, 241, 421));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_name = new QLabel(layoutWidget);
        label_name->setObjectName(QStringLiteral("label_name"));
        QFont font1;
        font1.setPointSize(10);
        label_name->setFont(font1);

        horizontalLayout->addWidget(label_name);


        verticalLayout->addLayout(horizontalLayout);

        lineEdit_name = new QLineEdit(layoutWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        verticalLayout->addWidget(lineEdit_name);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_surname = new QLabel(layoutWidget);
        label_surname->setObjectName(QStringLiteral("label_surname"));
        label_surname->setFont(font1);

        horizontalLayout_4->addWidget(label_surname);


        verticalLayout->addLayout(horizontalLayout_4);

        lineEdit_surname = new QLineEdit(layoutWidget);
        lineEdit_surname->setObjectName(QStringLiteral("lineEdit_surname"));

        verticalLayout->addWidget(lineEdit_surname);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_telephone = new QLabel(layoutWidget);
        label_telephone->setObjectName(QStringLiteral("label_telephone"));
        label_telephone->setFont(font1);

        horizontalLayout_7->addWidget(label_telephone);

        lineEdit_validtelephone = new QLineEdit(layoutWidget);
        lineEdit_validtelephone->setObjectName(QStringLiteral("lineEdit_validtelephone"));
        QFont font2;
        font2.setPointSize(7);
        lineEdit_validtelephone->setFont(font2);
        lineEdit_validtelephone->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEdit_validtelephone);


        verticalLayout->addLayout(horizontalLayout_7);

        lineEdit_telephone = new QLineEdit(layoutWidget);
        lineEdit_telephone->setObjectName(QStringLiteral("lineEdit_telephone"));
        lineEdit_telephone->setDragEnabled(false);

        verticalLayout->addWidget(lineEdit_telephone);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_email = new QLabel(layoutWidget);
        label_email->setObjectName(QStringLiteral("label_email"));
        label_email->setFont(font1);

        horizontalLayout_6->addWidget(label_email);

        lineEdit_validemail = new QLineEdit(layoutWidget);
        lineEdit_validemail->setObjectName(QStringLiteral("lineEdit_validemail"));
        lineEdit_validemail->setFont(font2);
        lineEdit_validemail->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_validemail);


        verticalLayout->addLayout(horizontalLayout_6);

        lineEdit_email = new QLineEdit(layoutWidget);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));

        verticalLayout->addWidget(lineEdit_email);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_password_2 = new QLabel(layoutWidget);
        label_password_2->setObjectName(QStringLiteral("label_password_2"));
        label_password_2->setFont(font1);

        horizontalLayout_5->addWidget(label_password_2);

        lineEdit_validpass = new QLineEdit(layoutWidget);
        lineEdit_validpass->setObjectName(QStringLiteral("lineEdit_validpass"));
        lineEdit_validpass->setFont(font2);
        lineEdit_validpass->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_validpass);


        verticalLayout->addLayout(horizontalLayout_5);

        lineEdit_password_2 = new QLineEdit(layoutWidget);
        lineEdit_password_2->setObjectName(QStringLiteral("lineEdit_password_2"));
        lineEdit_password_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_password_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_confirmpassword = new QLabel(layoutWidget);
        label_confirmpassword->setObjectName(QStringLiteral("label_confirmpassword"));
        label_confirmpassword->setFont(font1);

        horizontalLayout_3->addWidget(label_confirmpassword);

        lineEdit_validpass2 = new QLineEdit(layoutWidget);
        lineEdit_validpass2->setObjectName(QStringLiteral("lineEdit_validpass2"));
        lineEdit_validpass2->setEnabled(true);
        lineEdit_validpass2->setFont(font2);
        lineEdit_validpass2->setLayoutDirection(Qt::LeftToRight);
        lineEdit_validpass2->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_validpass2);


        verticalLayout->addLayout(horizontalLayout_3);

        lineEdit_confirnpassword = new QLineEdit(layoutWidget);
        lineEdit_confirnpassword->setObjectName(QStringLiteral("lineEdit_confirnpassword"));
        lineEdit_confirnpassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_confirnpassword);

        label_cinema_building = new QLabel(layoutWidget);
        label_cinema_building->setObjectName(QStringLiteral("label_cinema_building"));
        label_cinema_building->setFont(font1);

        verticalLayout->addWidget(label_cinema_building);

        lineEdit_building = new QLineEdit(layoutWidget);
        lineEdit_building->setObjectName(QStringLiteral("lineEdit_building"));
        lineEdit_building->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_building);

        label_discount = new QLabel(layoutWidget);
        label_discount->setObjectName(QStringLiteral("label_discount"));
        label_discount->setFont(font1);

        verticalLayout->addWidget(label_discount);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_senior_discount = new QPushButton(layoutWidget);
        pushButton_senior_discount->setObjectName(QStringLiteral("pushButton_senior_discount"));

        horizontalLayout_2->addWidget(pushButton_senior_discount);

        pushButton_confitm_student_discount = new QPushButton(layoutWidget);
        pushButton_confitm_student_discount->setObjectName(QStringLiteral("pushButton_confitm_student_discount"));

        horizontalLayout_2->addWidget(pushButton_confitm_student_discount);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(NewClientAccountForm);

        QMetaObject::connectSlotsByName(NewClientAccountForm);
    } // setupUi

    void retranslateUi(QDialog *NewClientAccountForm)
    {
        NewClientAccountForm->setWindowTitle(QApplication::translate("NewClientAccountForm", "Dialog", 0));
        groupBoxlogin->setTitle(QString());
        pushButton_ok->setText(QApplication::translate("NewClientAccountForm", "Zatwierd\305\272", 0));
        label_places_involved->setText(QApplication::translate("NewClientAccountForm", "* Pola wymagane", 0));
        pushButton_choose_building->setText(QApplication::translate("NewClientAccountForm", "Wybierz budynek", 0));
        label_name->setText(QApplication::translate("NewClientAccountForm", "Imi\304\231*", 0));
        label_surname->setText(QApplication::translate("NewClientAccountForm", "Nazwisko*", 0));
        label_telephone->setText(QApplication::translate("NewClientAccountForm", "Telefon*", 0));
        lineEdit_validtelephone->setText(QApplication::translate("NewClientAccountForm", "         Niepoprawny format danych", 0));
        label_email->setText(QApplication::translate("NewClientAccountForm", "Adres email*", 0));
        lineEdit_validemail->setText(QApplication::translate("NewClientAccountForm", "      Adres nie jest unikalny", 0));
        label_password_2->setText(QApplication::translate("NewClientAccountForm", "Has\305\202o*", 0));
        lineEdit_validpass->setText(QApplication::translate("NewClientAccountForm", "Has\305\202o powinno mie\304\207 co najmniej 8 znak\303\263w", 0));
        label_confirmpassword->setText(QApplication::translate("NewClientAccountForm", "Potwierd\305\272 has\305\202o*", 0));
        lineEdit_validpass2->setText(QApplication::translate("NewClientAccountForm", "       Niepoprawne has\305\202o", 0));
        label_cinema_building->setText(QApplication::translate("NewClientAccountForm", "Budynek kina", 0));
        label_discount->setText(QApplication::translate("NewClientAccountForm", "Zni\305\274ka", 0));
        pushButton_senior_discount->setText(QApplication::translate("NewClientAccountForm", "Seniorska", 0));
        pushButton_confitm_student_discount->setText(QApplication::translate("NewClientAccountForm", "Studencka", 0));
    } // retranslateUi

};

namespace Ui {
    class NewClientAccountForm: public Ui_NewClientAccountForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCLIENTACCOUNTFORM_H
