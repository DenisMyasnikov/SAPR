/********************************************************************************
** Form generated from reading UI file 'postprocessor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTPROCESSOR_H
#define UI_POSTPROCESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PostProcessor
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *twUx;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *spinBox;
    QTableWidget *twNx;
    QWidget *tab_2;

    void setupUi(QWidget *PostProcessor)
    {
        if (PostProcessor->objectName().isEmpty())
            PostProcessor->setObjectName(QString::fromUtf8("PostProcessor"));
        PostProcessor->resize(1000, 600);
        PostProcessor->setMinimumSize(QSize(600, 400));
        PostProcessor->setMaximumSize(QSize(1500, 1500));
        formLayout = new QFormLayout(PostProcessor);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(PostProcessor);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        twUx = new QTableWidget(tab);
        if (twUx->columnCount() < 1)
            twUx->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twUx->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (twUx->rowCount() < 1)
            twUx->setRowCount(1);
        twUx->setObjectName(QString::fromUtf8("twUx"));
        twUx->setEnabled(true);
        sizePolicy.setHeightForWidth(twUx->sizePolicy().hasHeightForWidth());
        twUx->setSizePolicy(sizePolicy);
        twUx->setFont(font);
        twUx->setRowCount(1);
        twUx->setColumnCount(1);

        verticalLayout->addWidget(twUx);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_3);

        spinBox = new QSpinBox(tab);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy1);
        spinBox->setMaximumSize(QSize(70, 16777215));
        spinBox->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        twNx = new QTableWidget(tab);
        if (twNx->columnCount() < 1)
            twNx->setColumnCount(1);
        if (twNx->rowCount() < 1)
            twNx->setRowCount(1);
        twNx->setObjectName(QString::fromUtf8("twNx"));
        sizePolicy.setHeightForWidth(twNx->sizePolicy().hasHeightForWidth());
        twNx->setSizePolicy(sizePolicy);
        twNx->setRowCount(1);
        twNx->setColumnCount(1);

        verticalLayout->addWidget(twNx);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);


        formLayout->setLayout(0, QFormLayout::SpanningRole, verticalLayout_2);


        retranslateUi(PostProcessor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PostProcessor);
    } // setupUi

    void retranslateUi(QWidget *PostProcessor)
    {
        PostProcessor->setWindowTitle(QApplication::translate("PostProcessor", "Form", nullptr));
        label->setText(QApplication::translate("PostProcessor", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\321\217 ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twUx->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PostProcessor", "Ux", nullptr));
        label_2->setText(QApplication::translate("PostProcessor", "\320\237\321\200\320\276\320\264\320\276\320\273\321\214\320\275\321\213\320\265 \320\275\320\260\320\263\321\200\321\203\320\267\320\272\320\270", nullptr));
        label_3->setText(QApplication::translate("PostProcessor", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\276 \321\201\320\265\321\207\320\265\320\275\320\270\320\271:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PostProcessor", "\320\223\320\273\320\276\320\261\320\260\320\273\321\214\320\275\321\213\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PostProcessor", "\320\255\320\277\321\216\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PostProcessor: public Ui_PostProcessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTPROCESSOR_H
