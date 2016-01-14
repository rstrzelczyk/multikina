/********************************************************************************
** Form generated from reading UI file 'orderinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERINFORMATION_H
#define UI_ORDERINFORMATION_H

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

class Ui_OrderInformation
{
public:
    QGroupBox *groupBoxlogin;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_tittle;
    QLabel *label_time;
    QLabel *label_building;
    QLabel *label_numberofticket;
    QLabel *label_allticketsprice;
    QLabel *label_nrreservation;
    QLabel *label_tittle_2;
    QLabel *label_time_2;
    QLabel *label_building_2;
    QLabel *label_numberofticket_2;
    QLabel *label_allticketsprice_2;
    QLabel *label_nrreservation_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_cash;
    QPushButton *pushButton_card;
    QPushButton *pushButton_cancel;
    QGroupBox *groupBox_menu;
    QLabel *label_logo_3;
    QFrame *line_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_user_4;
    QPushButton *pushButton_logout;
    QPushButton *pushButton_back;
    QGroupBox *groupBox_info;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_info_3;
    QPushButton *pushButton_main_menu_back;

    void setupUi(QDialog *OrderInformation)
    {
        if (OrderInformation->objectName().isEmpty())
            OrderInformation->setObjectName(QStringLiteral("OrderInformation"));
        OrderInformation->resize(669, 410);
        groupBoxlogin = new QGroupBox(OrderInformation);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 130, 651, 211));
        formLayoutWidget_3 = new QWidget(groupBoxlogin);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(130, 10, 361, 131));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_tittle = new QLabel(formLayoutWidget_3);
        label_tittle->setObjectName(QStringLiteral("label_tittle"));
        QFont font;
        font.setPointSize(10);
        label_tittle->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_tittle);

        label_time = new QLabel(formLayoutWidget_3);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_time);

        label_building = new QLabel(formLayoutWidget_3);
        label_building->setObjectName(QStringLiteral("label_building"));
        label_building->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_building);

        label_numberofticket = new QLabel(formLayoutWidget_3);
        label_numberofticket->setObjectName(QStringLiteral("label_numberofticket"));
        label_numberofticket->setFont(font);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_numberofticket);

        label_allticketsprice = new QLabel(formLayoutWidget_3);
        label_allticketsprice->setObjectName(QStringLiteral("label_allticketsprice"));
        label_allticketsprice->setFont(font);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_allticketsprice);

        label_nrreservation = new QLabel(formLayoutWidget_3);
        label_nrreservation->setObjectName(QStringLiteral("label_nrreservation"));
        label_nrreservation->setFont(font);

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_nrreservation);

        label_tittle_2 = new QLabel(formLayoutWidget_3);
        label_tittle_2->setObjectName(QStringLiteral("label_tittle_2"));
        label_tittle_2->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, label_tittle_2);

        label_time_2 = new QLabel(formLayoutWidget_3);
        label_time_2->setObjectName(QStringLiteral("label_time_2"));
        label_time_2->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, label_time_2);

        label_building_2 = new QLabel(formLayoutWidget_3);
        label_building_2->setObjectName(QStringLiteral("label_building_2"));
        label_building_2->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, label_building_2);

        label_numberofticket_2 = new QLabel(formLayoutWidget_3);
        label_numberofticket_2->setObjectName(QStringLiteral("label_numberofticket_2"));
        label_numberofticket_2->setFont(font);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, label_numberofticket_2);

        label_allticketsprice_2 = new QLabel(formLayoutWidget_3);
        label_allticketsprice_2->setObjectName(QStringLiteral("label_allticketsprice_2"));
        label_allticketsprice_2->setFont(font);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, label_allticketsprice_2);

        label_nrreservation_2 = new QLabel(formLayoutWidget_3);
        label_nrreservation_2->setObjectName(QStringLiteral("label_nrreservation_2"));
        label_nrreservation_2->setFont(font);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, label_nrreservation_2);

        layoutWidget = new QWidget(groupBoxlogin);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 150, 361, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_cash = new QPushButton(layoutWidget);
        pushButton_cash->setObjectName(QStringLiteral("pushButton_cash"));

        horizontalLayout_3->addWidget(pushButton_cash);

        pushButton_card = new QPushButton(layoutWidget);
        pushButton_card->setObjectName(QStringLiteral("pushButton_card"));

        horizontalLayout_3->addWidget(pushButton_card);

        pushButton_cancel = new QPushButton(layoutWidget);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout_3->addWidget(pushButton_cancel);

        groupBox_menu = new QGroupBox(OrderInformation);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        groupBox_menu->setGeometry(QRect(10, 10, 651, 111));
        label_logo_3 = new QLabel(groupBox_menu);
        label_logo_3->setObjectName(QStringLiteral("label_logo_3"));
        label_logo_3->setGeometry(QRect(10, 10, 321, 91));
        line_3 = new QFrame(groupBox_menu);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(322, 0, 31, 121));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        layoutWidget_2 = new QWidget(groupBox_menu);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(340, 40, 261, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_user_4 = new QLabel(layoutWidget_2);
        label_user_4->setObjectName(QStringLiteral("label_user_4"));
        QFont font1;
        font1.setPointSize(11);
        label_user_4->setFont(font1);

        horizontalLayout->addWidget(label_user_4);

        pushButton_logout = new QPushButton(layoutWidget_2);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        horizontalLayout->addWidget(pushButton_logout);

        pushButton_back = new QPushButton(groupBox_menu);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(610, 40, 31, 23));
        groupBox_info = new QGroupBox(OrderInformation);
        groupBox_info->setObjectName(QStringLiteral("groupBox_info"));
        groupBox_info->setGeometry(QRect(10, 350, 651, 51));
        layoutWidget_3 = new QWidget(groupBox_info);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 10, 491, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_info_3 = new QLabel(layoutWidget_3);
        label_info_3->setObjectName(QStringLiteral("label_info_3"));
        label_info_3->setFont(font);

        horizontalLayout_2->addWidget(label_info_3);

        pushButton_main_menu_back = new QPushButton(layoutWidget_3);
        pushButton_main_menu_back->setObjectName(QStringLiteral("pushButton_main_menu_back"));

        horizontalLayout_2->addWidget(pushButton_main_menu_back);


        retranslateUi(OrderInformation);

        QMetaObject::connectSlotsByName(OrderInformation);
    } // setupUi

    void retranslateUi(QDialog *OrderInformation)
    {
        OrderInformation->setWindowTitle(QApplication::translate("OrderInformation", "Dialog", 0));
        groupBoxlogin->setTitle(QString());
        label_tittle->setText(QApplication::translate("OrderInformation", "Tytu\305\202 filmu:", 0));
        label_time->setText(QApplication::translate("OrderInformation", "Godzina seansu:", 0));
        label_building->setText(QApplication::translate("OrderInformation", "Budynek:", 0));
        label_numberofticket->setText(QApplication::translate("OrderInformation", "Ilo\305\233\304\207 bilet\303\263w:", 0));
        label_allticketsprice->setText(QApplication::translate("OrderInformation", "Cena wszystkich bilet\303\263w:", 0));
        label_nrreservation->setText(QApplication::translate("OrderInformation", "Nr rezerwacji:", 0));
        label_tittle_2->setText(QString());
        label_time_2->setText(QString());
        label_building_2->setText(QString());
        label_numberofticket_2->setText(QString());
        label_allticketsprice_2->setText(QString());
        label_nrreservation_2->setText(QString());
        pushButton_cash->setText(QApplication::translate("OrderInformation", "P\305\202atno\305\233\304\207 got\303\263wk\304\205", 0));
        pushButton_card->setText(QApplication::translate("OrderInformation", "P\305\202atno\305\233\304\207 kart\304\205", 0));
        pushButton_cancel->setText(QApplication::translate("OrderInformation", "Anuluj zam\303\263wienie", 0));
        groupBox_menu->setTitle(QString());
        label_logo_3->setText(QString());
        label_user_4->setText(QApplication::translate("OrderInformation", "Niezalogowany", 0));
        pushButton_logout->setText(QApplication::translate("OrderInformation", "Wyloguj", 0));
        pushButton_back->setText(QApplication::translate("OrderInformation", "<-", 0));
        groupBox_info->setTitle(QString());
        label_info_3->setText(QApplication::translate("OrderInformation", "Zam\303\263wienie anulowane", 0));
        pushButton_main_menu_back->setText(QApplication::translate("OrderInformation", "Powr\303\263t do ekranu g\305\202\303\263wnego", 0));
    } // retranslateUi

};

namespace Ui {
    class OrderInformation: public Ui_OrderInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERINFORMATION_H
