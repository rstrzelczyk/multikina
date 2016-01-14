/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBoxlogin;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_login;
    QLineEdit *lineEdit_login;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QPushButton *pushButtonlog_in;
    QGroupBox *groupBox_info;
    QLabel *label_info;
    QGroupBox *groupBox_menu;
    QLabel *label_user;
    QLabel *label_logo;
    QFrame *line;
    QGroupBox *groupBox_menu_2;
    QLabel *label_user_2;
    QLabel *label_logo_2;
    QFrame *line_2;
    QGroupBox *groupBoxlogin_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_login_2;
    QLabel *label_password_2;
    QLineEdit *lineEdit_password_2;
    QPushButton *pushButtonlog_in_2;
    QLineEdit *lineEdit_login_2;
    QGroupBox *groupBox_info_2;
    QLabel *label_info_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(532, 390);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBoxlogin = new QGroupBox(centralWidget);
        groupBoxlogin->setObjectName(QStringLiteral("groupBoxlogin"));
        groupBoxlogin->setGeometry(QRect(10, 120, 511, 171));
        formLayoutWidget = new QWidget(groupBoxlogin);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(80, 50, 351, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_login = new QLabel(formLayoutWidget);
        label_login->setObjectName(QStringLiteral("label_login"));
        QFont font;
        font.setPointSize(12);
        label_login->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_login);

        lineEdit_login = new QLineEdit(formLayoutWidget);
        lineEdit_login->setObjectName(QStringLiteral("lineEdit_login"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_login);

        label_password = new QLabel(formLayoutWidget);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_password);

        lineEdit_password = new QLineEdit(formLayoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_password);

        pushButtonlog_in = new QPushButton(formLayoutWidget);
        pushButtonlog_in->setObjectName(QStringLiteral("pushButtonlog_in"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButtonlog_in);

        groupBox_info = new QGroupBox(centralWidget);
        groupBox_info->setObjectName(QStringLiteral("groupBox_info"));
        groupBox_info->setGeometry(QRect(10, 300, 511, 51));
        label_info = new QLabel(groupBox_info);
        label_info->setObjectName(QStringLiteral("label_info"));
        label_info->setEnabled(true);
        label_info->setGeometry(QRect(200, 10, 143, 31));
        QFont font1;
        font1.setPointSize(10);
        label_info->setFont(font1);
        groupBox_menu = new QGroupBox(centralWidget);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        groupBox_menu->setGeometry(QRect(10, 0, 511, 111));
        label_user = new QLabel(groupBox_menu);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(390, 40, 111, 31));
        QFont font2;
        font2.setPointSize(11);
        label_user->setFont(font2);
        label_logo = new QLabel(groupBox_menu);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setGeometry(QRect(10, 10, 321, 91));
        line = new QFrame(groupBox_menu);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(322, 0, 31, 121));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox_menu_2 = new QGroupBox(groupBox_menu);
        groupBox_menu_2->setObjectName(QStringLiteral("groupBox_menu_2"));
        groupBox_menu_2->setGeometry(QRect(0, 0, 511, 111));
        label_user_2 = new QLabel(groupBox_menu_2);
        label_user_2->setObjectName(QStringLiteral("label_user_2"));
        label_user_2->setGeometry(QRect(390, 40, 111, 31));
        label_user_2->setFont(font2);
        label_logo_2 = new QLabel(groupBox_menu_2);
        label_logo_2->setObjectName(QStringLiteral("label_logo_2"));
        label_logo_2->setGeometry(QRect(10, 10, 321, 91));
        line_2 = new QFrame(groupBox_menu_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(322, 0, 31, 121));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        groupBoxlogin_2 = new QGroupBox(groupBox_menu);
        groupBoxlogin_2->setObjectName(QStringLiteral("groupBoxlogin_2"));
        groupBoxlogin_2->setGeometry(QRect(0, 120, 511, 171));
        formLayoutWidget_2 = new QWidget(groupBoxlogin_2);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(80, 50, 351, 81));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_login_2 = new QLabel(formLayoutWidget_2);
        label_login_2->setObjectName(QStringLiteral("label_login_2"));
        label_login_2->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_login_2);

        label_password_2 = new QLabel(formLayoutWidget_2);
        label_password_2->setObjectName(QStringLiteral("label_password_2"));
        label_password_2->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_password_2);

        lineEdit_password_2 = new QLineEdit(formLayoutWidget_2);
        lineEdit_password_2->setObjectName(QStringLiteral("lineEdit_password_2"));
        lineEdit_password_2->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_password_2);

        pushButtonlog_in_2 = new QPushButton(formLayoutWidget_2);
        pushButtonlog_in_2->setObjectName(QStringLiteral("pushButtonlog_in_2"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pushButtonlog_in_2);

        lineEdit_login_2 = new QLineEdit(formLayoutWidget_2);
        lineEdit_login_2->setObjectName(QStringLiteral("lineEdit_login_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_login_2);

        groupBox_info_2 = new QGroupBox(groupBox_menu);
        groupBox_info_2->setObjectName(QStringLiteral("groupBox_info_2"));
        groupBox_info_2->setGeometry(QRect(0, 300, 511, 51));
        label_info_2 = new QLabel(groupBox_info_2);
        label_info_2->setObjectName(QStringLiteral("label_info_2"));
        label_info_2->setGeometry(QRect(200, 10, 143, 31));
        label_info_2->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 532, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBoxlogin->setTitle(QString());
        label_login->setText(QApplication::translate("MainWindow", "Login: ", 0));
        label_password->setText(QApplication::translate("MainWindow", "Has\305\202o: ", 0));
        pushButtonlog_in->setText(QApplication::translate("MainWindow", "Zaloguj", 0));
        groupBox_info->setTitle(QString());
        label_info->setText(QString());
        groupBox_menu->setTitle(QString());
        label_user->setText(QApplication::translate("MainWindow", "Niezalogowany", 0));
        label_logo->setText(QString());
        groupBox_menu_2->setTitle(QString());
        label_user_2->setText(QApplication::translate("MainWindow", "Niezalogowany", 0));
        label_logo_2->setText(QString());
        groupBoxlogin_2->setTitle(QString());
        label_login_2->setText(QApplication::translate("MainWindow", "Login: ", 0));
        label_password_2->setText(QApplication::translate("MainWindow", "Has\305\202o: ", 0));
        pushButtonlog_in_2->setText(QApplication::translate("MainWindow", "Zaloguj", 0));
        groupBox_info_2->setTitle(QString());
        label_info_2->setText(QApplication::translate("MainWindow", "Has\305\202o zosta\305\202o zmienione.", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
