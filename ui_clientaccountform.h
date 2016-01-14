/********************************************************************************
** Form generated from reading UI file 'clientaccountform.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTACCOUNTFORM_H
#define UI_CLIENTACCOUNTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientAccountForm
{
public:
    QGroupBox *groupBox_menu;
    QLabel *label_logo_2;
    QFrame *line_2;
    QPushButton *pushButton_back;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_user_2;
    QPushButton *pushButton_logout;
    QGroupBox *groupBoxlogin;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QLabel *label_surname;
    QLineEdit *lineEdit_surname;
    QLabel *label_telephone;
    QLineEdit *lineEdit_telephone;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QLabel *label_password_2;
    QLineEdit *lineEdit_password_2;
    QLabel *label_confirmpassword;
    QLineEdit *lineEdit_pconfirnpassword;
    QLabel *label_cinema_building;
    QComboBox *comboBox_building;
    QLabel *label_discount;
    QLineEdit *lineEdit_discount;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_confim_account;
    QPushButton *pushButton_confitm_discount;
    QPushButton *pushButton_add_card;
    QGroupBox *groupBox_info;
    QLabel *label_info_2;

    void setupUi(QDialog *ClientAccountForm)
    {
        if (ClientAccountForm->objectName().isEmpty())
            ClientAccountForm->setObjectName(QStringLiteral("ClientAccountForm"));
        ClientAccountForm->resize(702, 727);
        groupBox_menu = new QGroupBox(ClientAccountForm);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        groupBox_menu->setGeometry(QRect(10, 10, 671, 111));
        label_logo_2 = new QLabel(groupBox_menu);
        label_logo_2->setObjectName(QStringLiteral("label_logo_2"));
        label_logo_2->setGeometry(QRect(10, 10, 321, 91));
        line_2 = new QFrame(groupBox_menu);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(322, 0, 31, 121));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_back = new QPushButton(groupBox_menu);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(620, 40, 41, 23));
        layoutWidget = new QWidget(groupBox_menu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(350, 40, 261, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_user_2 = new QLabel(layoutWidget);
        label_user_2->setObjectName(QStringLiteral("label_user_2"));
        QFont font;
        font.setPointSize(11);
        label_user_2->setFont(font);

        horizontalLayout->addWidget(label_user_2);

        pushButton_logout = new QPushButton(layoutWidget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        horizontalLayout->addWidget(pushButton_logout);

        groupBoxlogin = new QGroupBox(ClientAccountForm);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 130, 671, 531));
        verticalLayoutWidget = new QWidget(groupBoxlogin);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 30, 361, 411));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(verticalLayoutWidget);
        label_name->setObjectName(QStringLiteral("label_name"));
        QFont font1;
        font1.setPointSize(10);
        label_name->setFont(font1);

        verticalLayout->addWidget(label_name);

        lineEdit_name = new QLineEdit(verticalLayoutWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        verticalLayout->addWidget(lineEdit_name);

        label_surname = new QLabel(verticalLayoutWidget);
        label_surname->setObjectName(QStringLiteral("label_surname"));
        label_surname->setFont(font1);

        verticalLayout->addWidget(label_surname);

        lineEdit_surname = new QLineEdit(verticalLayoutWidget);
        lineEdit_surname->setObjectName(QStringLiteral("lineEdit_surname"));

        verticalLayout->addWidget(lineEdit_surname);

        label_telephone = new QLabel(verticalLayoutWidget);
        label_telephone->setObjectName(QStringLiteral("label_telephone"));
        label_telephone->setFont(font1);

        verticalLayout->addWidget(label_telephone);

        lineEdit_telephone = new QLineEdit(verticalLayoutWidget);
        lineEdit_telephone->setObjectName(QStringLiteral("lineEdit_telephone"));

        verticalLayout->addWidget(lineEdit_telephone);

        label_email = new QLabel(verticalLayoutWidget);
        label_email->setObjectName(QStringLiteral("label_email"));
        label_email->setFont(font1);

        verticalLayout->addWidget(label_email);

        lineEdit_email = new QLineEdit(verticalLayoutWidget);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));

        verticalLayout->addWidget(lineEdit_email);

        label_password_2 = new QLabel(verticalLayoutWidget);
        label_password_2->setObjectName(QStringLiteral("label_password_2"));
        label_password_2->setFont(font1);

        verticalLayout->addWidget(label_password_2);

        lineEdit_password_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_password_2->setObjectName(QStringLiteral("lineEdit_password_2"));

        verticalLayout->addWidget(lineEdit_password_2);

        label_confirmpassword = new QLabel(verticalLayoutWidget);
        label_confirmpassword->setObjectName(QStringLiteral("label_confirmpassword"));
        label_confirmpassword->setFont(font1);

        verticalLayout->addWidget(label_confirmpassword);

        lineEdit_pconfirnpassword = new QLineEdit(verticalLayoutWidget);
        lineEdit_pconfirnpassword->setObjectName(QStringLiteral("lineEdit_pconfirnpassword"));

        verticalLayout->addWidget(lineEdit_pconfirnpassword);

        label_cinema_building = new QLabel(verticalLayoutWidget);
        label_cinema_building->setObjectName(QStringLiteral("label_cinema_building"));
        label_cinema_building->setFont(font1);

        verticalLayout->addWidget(label_cinema_building);

        comboBox_building = new QComboBox(verticalLayoutWidget);
        comboBox_building->setObjectName(QStringLiteral("comboBox_building"));

        verticalLayout->addWidget(comboBox_building);

        label_discount = new QLabel(verticalLayoutWidget);
        label_discount->setObjectName(QStringLiteral("label_discount"));
        label_discount->setFont(font1);

        verticalLayout->addWidget(label_discount);

        lineEdit_discount = new QLineEdit(verticalLayoutWidget);
        lineEdit_discount->setObjectName(QStringLiteral("lineEdit_discount"));

        verticalLayout->addWidget(lineEdit_discount);

        layoutWidget1 = new QWidget(groupBoxlogin);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 450, 421, 71));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_confim_account = new QPushButton(layoutWidget1);
        pushButton_confim_account->setObjectName(QStringLiteral("pushButton_confim_account"));

        horizontalLayout_2->addWidget(pushButton_confim_account);

        pushButton_confitm_discount = new QPushButton(layoutWidget1);
        pushButton_confitm_discount->setObjectName(QStringLiteral("pushButton_confitm_discount"));

        horizontalLayout_2->addWidget(pushButton_confitm_discount);

        pushButton_add_card = new QPushButton(layoutWidget1);
        pushButton_add_card->setObjectName(QStringLiteral("pushButton_add_card"));

        horizontalLayout_2->addWidget(pushButton_add_card);

        groupBox_info = new QGroupBox(ClientAccountForm);
        groupBox_info->setObjectName(QStringLiteral("groupBox_info"));
        groupBox_info->setGeometry(QRect(10, 670, 671, 51));
        label_info_2 = new QLabel(groupBox_info);
        label_info_2->setObjectName(QStringLiteral("label_info_2"));
        label_info_2->setGeometry(QRect(180, 10, 291, 31));
        label_info_2->setFont(font1);

        retranslateUi(ClientAccountForm);

        QMetaObject::connectSlotsByName(ClientAccountForm);
    } // setupUi

    void retranslateUi(QDialog *ClientAccountForm)
    {
        ClientAccountForm->setWindowTitle(QApplication::translate("ClientAccountForm", "Dialog", 0));
        groupBox_menu->setTitle(QString());
        label_logo_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_back->setToolTip(QApplication::translate("ClientAccountForm", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_back->setText(QApplication::translate("ClientAccountForm", "<-", 0));
        label_user_2->setText(QApplication::translate("ClientAccountForm", "Niezalogowany", 0));
        pushButton_logout->setText(QApplication::translate("ClientAccountForm", "Wyloguj", 0));
        groupBoxlogin->setTitle(QString());
        label_name->setText(QApplication::translate("ClientAccountForm", "Imi\304\231*", 0));
        label_surname->setText(QApplication::translate("ClientAccountForm", "Nazwisko*", 0));
        label_telephone->setText(QApplication::translate("ClientAccountForm", "Telefon*", 0));
        label_email->setText(QApplication::translate("ClientAccountForm", "Adres email", 0));
        label_password_2->setText(QApplication::translate("ClientAccountForm", "Has\305\202o*", 0));
        label_confirmpassword->setText(QApplication::translate("ClientAccountForm", "Potwierd\305\272 has\305\202o*", 0));
        label_cinema_building->setText(QApplication::translate("ClientAccountForm", "Budynek kina", 0));
        label_discount->setText(QApplication::translate("ClientAccountForm", "Zni\305\274ka", 0));
        pushButton_confim_account->setText(QApplication::translate("ClientAccountForm", "Potwierd\305\272 konto", 0));
        pushButton_confitm_discount->setText(QApplication::translate("ClientAccountForm", "Potwierd\305\272 zni\305\274k\304\231", 0));
        pushButton_add_card->setText(QApplication::translate("ClientAccountForm", "Dodaj kart\304\231", 0));
        groupBox_info->setTitle(QString());
        label_info_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ClientAccountForm: public Ui_ClientAccountForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTACCOUNTFORM_H
