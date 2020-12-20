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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PostProcessor
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QComboBox *comboBox;
    QGraphicsView *graphicsView;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QSpinBox *sbUx;
    QTableWidget *twUx;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *sbSNx;
    QTableWidget *twNx;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpinBox *sbSSigma;
    QTableWidget *twSigma;

    void setupUi(QWidget *PostProcessor)
    {
        if (PostProcessor->objectName().isEmpty())
            PostProcessor->setObjectName(QString::fromUtf8("PostProcessor"));
        PostProcessor->resize(1000, 600);
        PostProcessor->setMinimumSize(QSize(600, 400));
        PostProcessor->setMaximumSize(QSize(1500, 1500));
        verticalLayout_3 = new QVBoxLayout(PostProcessor);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
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
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setPointSize(12);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_7);

        comboBox = new QComboBox(tab);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaximumSize(QSize(70, 16777215));
        comboBox->setFont(font);

        horizontalLayout_4->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        graphicsView = new QGraphicsView(tab);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 942, 1102));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(scrollAreaWidgetContents_9);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(12);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(scrollAreaWidgetContents_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font2;
        font2.setPointSize(10);
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_6);

        sbUx = new QSpinBox(scrollAreaWidgetContents_9);
        sbUx->setObjectName(QString::fromUtf8("sbUx"));
        sbUx->setMaximumSize(QSize(70, 16777215));
        sbUx->setBaseSize(QSize(2, 0));
        sbUx->setFont(font2);
        sbUx->setValue(8);

        horizontalLayout_3->addWidget(sbUx);


        verticalLayout_5->addLayout(horizontalLayout_3);

        twUx = new QTableWidget(scrollAreaWidgetContents_9);
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
        twUx->setMinimumSize(QSize(0, 300));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font3.setPointSize(8);
        twUx->setFont(font3);
        twUx->setRowCount(1);
        twUx->setColumnCount(1);

        verticalLayout_5->addWidget(twUx);

        label_2 = new QLabel(scrollAreaWidgetContents_9);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(scrollAreaWidgetContents_9);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_3);

        sbSNx = new QSpinBox(scrollAreaWidgetContents_9);
        sbSNx->setObjectName(QString::fromUtf8("sbSNx"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sbSNx->sizePolicy().hasHeightForWidth());
        sbSNx->setSizePolicy(sizePolicy1);
        sbSNx->setMaximumSize(QSize(70, 16777215));
        sbSNx->setFont(font2);
        sbSNx->setLayoutDirection(Qt::LeftToRight);
        sbSNx->setMinimum(1);
        sbSNx->setValue(8);

        horizontalLayout->addWidget(sbSNx);


        verticalLayout_5->addLayout(horizontalLayout);

        twNx = new QTableWidget(scrollAreaWidgetContents_9);
        if (twNx->columnCount() < 1)
            twNx->setColumnCount(1);
        if (twNx->rowCount() < 1)
            twNx->setRowCount(1);
        twNx->setObjectName(QString::fromUtf8("twNx"));
        sizePolicy.setHeightForWidth(twNx->sizePolicy().hasHeightForWidth());
        twNx->setSizePolicy(sizePolicy);
        twNx->setMinimumSize(QSize(0, 300));
        twNx->setRowCount(1);
        twNx->setColumnCount(1);

        verticalLayout_5->addWidget(twNx);

        label_4 = new QLabel(scrollAreaWidgetContents_9);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(scrollAreaWidgetContents_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_5);

        sbSSigma = new QSpinBox(scrollAreaWidgetContents_9);
        sbSSigma->setObjectName(QString::fromUtf8("sbSSigma"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sbSSigma->sizePolicy().hasHeightForWidth());
        sbSSigma->setSizePolicy(sizePolicy2);
        sbSSigma->setMaximumSize(QSize(70, 16777215));
        sbSSigma->setMinimum(1);
        sbSSigma->setValue(8);

        horizontalLayout_2->addWidget(sbSSigma);


        verticalLayout_5->addLayout(horizontalLayout_2);

        twSigma = new QTableWidget(scrollAreaWidgetContents_9);
        if (twSigma->columnCount() < 1)
            twSigma->setColumnCount(1);
        if (twSigma->rowCount() < 1)
            twSigma->setRowCount(1);
        twSigma->setObjectName(QString::fromUtf8("twSigma"));
        twSigma->setMinimumSize(QSize(0, 300));
        twSigma->setRowCount(1);
        twSigma->setColumnCount(1);

        verticalLayout_5->addWidget(twSigma);

        scrollArea->setWidget(scrollAreaWidgetContents_9);

        verticalLayout_4->addWidget(scrollArea);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(PostProcessor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PostProcessor);
    } // setupUi

    void retranslateUi(QWidget *PostProcessor)
    {
        PostProcessor->setWindowTitle(QApplication::translate("PostProcessor", "Form", nullptr));
        label_7->setText(QApplication::translate("PostProcessor", "\320\255\320\277\321\216\321\200\320\260 - ", nullptr));
        comboBox->setItemText(0, QApplication::translate("PostProcessor", "Ux(\320\274)", nullptr));
        comboBox->setItemText(1, QApplication::translate("PostProcessor", "Nx(\320\235)", nullptr));
        comboBox->setItemText(2, QApplication::translate("PostProcessor", "\317\203x(\320\237\320\260)", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PostProcessor", "\320\255\320\277\321\216\321\200\321\213", nullptr));
        label->setText(QApplication::translate("PostProcessor", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\321\217 (\320\274)", nullptr));
        label_6->setText(QApplication::translate("PostProcessor", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\276 \321\201\320\265\321\207\320\265\320\275\320\270\320\271:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twUx->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PostProcessor", "Ux", nullptr));
        label_2->setText(QApplication::translate("PostProcessor", "\320\237\321\200\320\276\320\264\320\276\320\273\321\214\320\275\321\213\320\265 \320\275\320\260\320\263\321\200\321\203\320\267\320\272\320\270 (\320\235)", nullptr));
        label_3->setText(QApplication::translate("PostProcessor", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\276 \321\201\320\265\321\207\320\265\320\275\320\270\320\271:", nullptr));
        label_4->setText(QApplication::translate("PostProcessor", "\320\235\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\265 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\321\217 (\320\237\320\260)", nullptr));
        label_5->setText(QApplication::translate("PostProcessor", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\276 \321\201\320\265\321\207\320\265\320\275\320\270\320\271:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PostProcessor", "\320\242\320\260\320\261\320\273\320\270\321\206\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PostProcessor: public Ui_PostProcessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTPROCESSOR_H
