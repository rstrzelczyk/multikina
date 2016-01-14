/********************************************************************************
** Form generated from reading UI file 'employeedataform.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEDATAFORM_H
#define UI_EMPLOYEEDATAFORM_H

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

class Ui_EmployeeDataForm
{
public:
    QGroupBox *groupBox_menu;
    QLabel *label_logo_3;
    QFrame *line_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_user_4;
    QPushButton *pushButton_logout;
    QPushButton *pushButton_back;
    QGroupBox *groupBoxlogin;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_newpassword;
    QLabel *label_repeatnewpassword;
    QLineEdit *lineEdit_repeatnewpassword;
    QPushButton *pushButtonlog_in_3;
    QLineEdit *lineEdit_newpassword;
    QGroupBox *groupBox_info;
    QLabel *label_info_3;

    void setupUi(QDialog *EmployeeDataForm)
    {
        if (EmployeeDataForm->objectName().isEmpty())
            EmployeeDataForm->setObjectName(QStringLiteral("EmployeeDataForm"));
        EmployeeDataForm->resize(675, 370);
        groupBox_menu = new QGroupBox(EmployeeDataForm);
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
        layoutWidget = new QWidget(groupBox_menu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(340, 40, 251, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_user_4 = new QLabel(layoutWidget);
        label_user_4->setObjectName(QStringLiteral("label_user_4"));
        QFont font;
        font.setPointSize(11);
        label_user_4->setFont(font);

        horizontalLayout->addWidget(label_user_4);

        pushButton_logout = new QPushButton(layoutWidget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        horizontalLayout->addWidget(pushButton_logout);

        pushButton_back = new QPushButton(groupBox_menu);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(600, 32, 27, 27));
        groupBoxlogin = new QGroupBox(EmployeeDataForm);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 130, 651, 171));
        formLayoutWidget_3 = new QWidget(groupBoxlogin);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(160, 50, 351, 81));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_newpassword = new QLabel(formLayoutWidget_3);
        label_newpassword->setObjectName(QStringLiteral("label_newpassword"));
        QFont font1;
        font1.setPointSize(10);
        label_newpassword->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_newpassword);

        label_repeatnewpassword = new QLabel(formLayoutWidget_3);
        label_repeatnewpassword->setObjectName(QStringLiteral("label_repeatnewpassword"));
        label_repeatnewpassword->setFont(font1);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_repeatnewpassword);

        lineEdit_repeatnewpassword = new QLineEdit(formLayoutWidget_3);
        lineEdit_repeatnewpassword->setObjectName(QStringLiteral("lineEdit_repeatnewpassword"));
        lineEdit_repeatnewpassword->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_repeatnewpassword);

        pushButtonlog_in_3 = new QPushButton(formLayoutWidget_3);
        pushButtonlog_in_3->setObjectName(QStringLiteral("pushButtonlog_in_3"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, pushButtonlog_in_3);

        lineEdit_newpassword = new QLineEdit(formLayoutWidget_3);
        lineEdit_newpassword->setObjectName(QStringLiteral("lineEdit_newpassword"));
        lineEdit_newpassword->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_newpassword);

        groupBox_info = new QGroupBox(EmployeeDataForm);
        groupBox_info->setObjectName(QStringLiteral("groupBox_info"));
        groupBox_info->setGeometry(QRect(10, 310, 651, 51));
        label_info_3 = new QLabel(groupBox_info);
        label_info_3->setObjectName(QStringLiteral("label_info_3"));
        label_info_3->setGeometry(QRect(230, 10, 271, 31));
        label_info_3->setFont(font1);

        retranslateUi(EmployeeDataForm);

        QMetaObject::connectSlotsByName(EmployeeDataForm);
    } // setupUi

    void retranslateUi(QDialog *EmployeeDataForm)
    {
        EmployeeDataForm->setWindowTitle(QApplication::translate("EmployeeDataForm", "Dialog", 0));
        groupBox_menu->setTitle(QString());
        label_logo_3->setText(QString());
        label_user_4->setText(QString());
        pushButton_logout->setText(QApplication::translate("EmployeeDataForm", "Wyloguj", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_back->setToolTip(QApplication::translate("EmployeeDataForm", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_back->setText(QString());
        groupBoxlogin->setTitle(QString());
        label_newpassword->setText(QApplication::translate("EmployeeDataForm", "Wpisz nowe has\305\202o:", 0));
        label_repeatnewpassword->setText(QApplication::translate("EmployeeDataForm", "Powt\303\263rz nowe has\305\202o:", 0));
        pushButtonlog_in_3->setText(QApplication::translate("EmployeeDataForm", "Zatwierd\305\272", 0));
        lineEdit_newpassword->setText(QString());
        groupBox_info->setTitle(QString());
        label_info_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EmployeeDataForm: public Ui_EmployeeDataForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEDATAFORM_H
