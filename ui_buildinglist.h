/********************************************************************************
** Form generated from reading UI file 'buildinglist.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUILDINGLIST_H
#define UI_BUILDINGLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_BuildingList
{
public:
    QGroupBox *groupBox_buildinglist;
    QTableView *tableView;
    QListWidget *listWidget;

    void setupUi(QDialog *BuildingList)
    {
        if (BuildingList->objectName().isEmpty())
            BuildingList->setObjectName(QStringLiteral("BuildingList"));
        BuildingList->resize(385, 365);
        groupBox_buildinglist = new QGroupBox(BuildingList);
        groupBox_buildinglist->setObjectName(QStringLiteral("groupBox_buildinglist"));
        groupBox_buildinglist->setGeometry(QRect(10, 10, 361, 341));
        QFont font;
        font.setPointSize(11);
        groupBox_buildinglist->setFont(font);
        tableView = new QTableView(groupBox_buildinglist);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 30, 321, 291));
        listWidget = new QListWidget(groupBox_buildinglist);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 30, 321, 291));

        retranslateUi(BuildingList);

        QMetaObject::connectSlotsByName(BuildingList);
    } // setupUi

    void retranslateUi(QDialog *BuildingList)
    {
        BuildingList->setWindowTitle(QApplication::translate("BuildingList", "Dialog", 0));
        groupBox_buildinglist->setTitle(QApplication::translate("BuildingList", "Lista budynk\303\263w kina", 0));
    } // retranslateUi

};

namespace Ui {
    class BuildingList: public Ui_BuildingList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILDINGLIST_H
