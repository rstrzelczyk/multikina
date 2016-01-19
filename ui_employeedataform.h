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
#include <QtWidgets/QFormLayout>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeDataForm
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_info;
    QLabel *label_info_4;
    QGroupBox *groupBox_menu;
    QLabel *label_logo_4;
    QFrame *line_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_user_5;
    QPushButton *pushButton_logout_2;
    QPushButton *pushButton_back_2;
    QGroupBox *groupBoxlogin;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_newpassword_2;
    QLabel *label_repeatnewpassword_2;
    QLineEdit *lineEdit_repeatnewpassword_2;
    QPushButton *pushButtonlog_in_4;
    QLineEdit *lineEdit_newpassword_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EmployeeDataForm)
    {
        if (EmployeeDataForm->objectName().isEmpty())
            EmployeeDataForm->setObjectName(QStringLiteral("EmployeeDataForm"));
        EmployeeDataForm->resize(670, 402);
        centralwidget = new QWidget(EmployeeDataForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_info = new QGroupBox(centralwidget);
        groupBox_info->setObjectName(QStringLiteral("groupBox_info"));
        groupBox_info->setGeometry(QRect(10, 310, 651, 51));
        label_info_4 = new QLabel(groupBox_info);
        label_info_4->setObjectName(QStringLiteral("label_info_4"));
        label_info_4->setGeometry(QRect(230, 10, 271, 31));
        QFont font;
        font.setPointSize(10);
        label_info_4->setFont(font);
        groupBox_menu = new QGroupBox(centralwidget);
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
        layoutWidget_2 = new QWidget(groupBox_menu);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(340, 27, 251, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_user_5 = new QLabel(layoutWidget_2);
        label_user_5->setObjectName(QStringLiteral("label_user_5"));
        QFont font1;
        font1.setPointSize(11);
        label_user_5->setFont(font1);

        horizontalLayout_2->addWidget(label_user_5);

        pushButton_logout_2 = new QPushButton(layoutWidget_2);
        pushButton_logout_2->setObjectName(QStringLiteral("pushButton_logout_2"));
        pushButton_logout_2->setMinimumSize(QSize(50, 30));

        horizontalLayout_2->addWidget(pushButton_logout_2);

        pushButton_back_2 = new QPushButton(groupBox_menu);
        pushButton_back_2->setObjectName(QStringLiteral("pushButton_back_2"));
        pushButton_back_2->setGeometry(QRect(610, 30, 27, 27));
        groupBoxlogin = new QGroupBox(centralwidget);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 130, 651, 171));
        formLayoutWidget_4 = new QWidget(groupBoxlogin);
        formLayoutWidget_4->setObjectName(QStringLiteral("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(160, 50, 351, 81));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_newpassword_2 = new QLabel(formLayoutWidget_4);
        label_newpassword_2->setObjectName(QStringLiteral("label_newpassword_2"));
        label_newpassword_2->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_newpassword_2);

        label_repeatnewpassword_2 = new QLabel(formLayoutWidget_4);
        label_repeatnewpassword_2->setObjectName(QStringLiteral("label_repeatnewpassword_2"));
        label_repeatnewpassword_2->setFont(font);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_repeatnewpassword_2);

        lineEdit_repeatnewpassword_2 = new QLineEdit(formLayoutWidget_4);
        lineEdit_repeatnewpassword_2->setObjectName(QStringLiteral("lineEdit_repeatnewpassword_2"));
        lineEdit_repeatnewpassword_2->setEchoMode(QLineEdit::Password);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_repeatnewpassword_2);

        pushButtonlog_in_4 = new QPushButton(formLayoutWidget_4);
        pushButtonlog_in_4->setObjectName(QStringLiteral("pushButtonlog_in_4"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, pushButtonlog_in_4);

        lineEdit_newpassword_2 = new QLineEdit(formLayoutWidget_4);
        lineEdit_newpassword_2->setObjectName(QStringLiteral("lineEdit_newpassword_2"));
        lineEdit_newpassword_2->setEchoMode(QLineEdit::Password);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_newpassword_2);

        EmployeeDataForm->setCentralWidget(centralwidget);
        groupBox_info->raise();
        groupBox_menu->raise();
        groupBoxlogin->raise();
        menubar = new QMenuBar(EmployeeDataForm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 670, 21));
        EmployeeDataForm->setMenuBar(menubar);
        statusbar = new QStatusBar(EmployeeDataForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        EmployeeDataForm->setStatusBar(statusbar);

        retranslateUi(EmployeeDataForm);

        QMetaObject::connectSlotsByName(EmployeeDataForm);
    } // setupUi

    void retranslateUi(QMainWindow *EmployeeDataForm)
    {
        EmployeeDataForm->setWindowTitle(QApplication::translate("EmployeeDataForm", "MainWindow", 0));
        groupBox_info->setTitle(QString());
        label_info_4->setText(QString());
        groupBox_menu->setTitle(QString());
        label_logo_4->setText(QString());
        label_user_5->setText(QString());
        pushButton_logout_2->setText(QApplication::translate("EmployeeDataForm", "Wyloguj", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_back_2->setToolTip(QApplication::translate("EmployeeDataForm", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_back_2->setText(QString());
        groupBoxlogin->setTitle(QString());
        label_newpassword_2->setText(QApplication::translate("EmployeeDataForm", "Wpisz nowe has\305\202o:", 0));
        label_repeatnewpassword_2->setText(QApplication::translate("EmployeeDataForm", "Powt\303\263rz nowe has\305\202o:", 0));
        pushButtonlog_in_4->setText(QApplication::translate("EmployeeDataForm", "Zatwierd\305\272", 0));
        lineEdit_newpassword_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EmployeeDataForm: public Ui_EmployeeDataForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEDATAFORM_H
