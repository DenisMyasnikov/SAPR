/********************************************************************************
** Form generated from reading UI file 'globaltable.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALTABLE_H
#define UI_GLOBALTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_globalTable
{
public:
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QTableView *tableView_2;
    QTableView *tableView_3;

    void setupUi(QWidget *globalTable)
    {
        if (globalTable->objectName().isEmpty())
            globalTable->setObjectName(QString::fromUtf8("globalTable"));
        globalTable->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(globalTable);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableView = new QTableView(globalTable);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QFont font;
        font.setPointSize(12);
        tableView->setFont(font);

        verticalLayout_2->addWidget(tableView);

        tableView_2 = new QTableView(globalTable);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setFont(font);

        verticalLayout_2->addWidget(tableView_2);

        tableView_3 = new QTableView(globalTable);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setBaseSize(QSize(3, 0));
        tableView_3->setFont(font);

        verticalLayout_2->addWidget(tableView_3);


        retranslateUi(globalTable);

        QMetaObject::connectSlotsByName(globalTable);
    } // setupUi

    void retranslateUi(QWidget *globalTable)
    {
        globalTable->setWindowTitle(QApplication::translate("globalTable", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class globalTable: public Ui_globalTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALTABLE_H
