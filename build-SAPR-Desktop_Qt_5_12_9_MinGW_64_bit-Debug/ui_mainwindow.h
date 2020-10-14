/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *flNumberOfRods;
    QLabel *label;
    QSpinBox *sbNumberOfrods;
    QPushButton *btnChangeNumberOfRods;
    QPushButton *btnAcceptNumberOfRods;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QFrame *line;
    QSpinBox *sbPropOfRod;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(867, 607);
        MainWindow->setMinimumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        flNumberOfRods = new QFormLayout();
        flNumberOfRods->setObjectName(QString::fromUtf8("flNumberOfRods"));
        flNumberOfRods->setSizeConstraint(QLayout::SetMinimumSize);
        flNumberOfRods->setHorizontalSpacing(6);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);

        flNumberOfRods->setWidget(0, QFormLayout::LabelRole, label);

        sbNumberOfrods = new QSpinBox(centralwidget);
        sbNumberOfrods->setObjectName(QString::fromUtf8("sbNumberOfrods"));
        sbNumberOfrods->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sbNumberOfrods->sizePolicy().hasHeightForWidth());
        sbNumberOfrods->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(12);
        sbNumberOfrods->setFont(font1);
        sbNumberOfrods->setMaximum(1000);

        flNumberOfRods->setWidget(0, QFormLayout::FieldRole, sbNumberOfrods);

        btnChangeNumberOfRods = new QPushButton(centralwidget);
        btnChangeNumberOfRods->setObjectName(QString::fromUtf8("btnChangeNumberOfRods"));
        sizePolicy1.setHeightForWidth(btnChangeNumberOfRods->sizePolicy().hasHeightForWidth());
        btnChangeNumberOfRods->setSizePolicy(sizePolicy1);
        btnChangeNumberOfRods->setFont(font);

        flNumberOfRods->setWidget(1, QFormLayout::LabelRole, btnChangeNumberOfRods);

        btnAcceptNumberOfRods = new QPushButton(centralwidget);
        btnAcceptNumberOfRods->setObjectName(QString::fromUtf8("btnAcceptNumberOfRods"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnAcceptNumberOfRods->sizePolicy().hasHeightForWidth());
        btnAcceptNumberOfRods->setSizePolicy(sizePolicy4);
        btnAcceptNumberOfRods->setFont(font);

        flNumberOfRods->setWidget(1, QFormLayout::FieldRole, btnAcceptNumberOfRods);


        horizontalLayout_2->addLayout(flNumberOfRods);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy5);
        lineEdit_2->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy6);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(1, QFormLayout::LabelRole, line);

        sbPropOfRod = new QSpinBox(centralwidget);
        sbPropOfRod->setObjectName(QString::fromUtf8("sbPropOfRod"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(sbPropOfRod->sizePolicy().hasHeightForWidth());
        sbPropOfRod->setSizePolicy(sizePolicy7);
        sbPropOfRod->setFont(font);
        sbPropOfRod->setMinimum(1);
        sbPropOfRod->setMaximum(1000);

        formLayout->setWidget(0, QFormLayout::FieldRole, sbPropOfRod);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_3->addWidget(graphicsView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 867, 20));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "E = 2e5 \320\234\320\237\320\260, [\317\203] = 160 \320\234\320\237\320\260", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\320\265\321\200\320\266\320\275\320\265\320\271:", nullptr));
        btnChangeNumberOfRods->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\272\320\276\320\273\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\320\265\321\200\320\266\320\275\320\265\320\271", nullptr));
        btnAcceptNumberOfRods->setText(QApplication::translate("MainWindow", "OK", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\277\320\276\320\277\320\265\321\200\320\265\321\207\320\275\320\276\320\263\320\276 \321\201\320\265\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\260 \321\201\321\202\320\265\321\200\320\266\320\275\321\217 -", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\277\321\200\320\276\321\206\320\272\321\201\321\201\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
