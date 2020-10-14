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
#include <QtWidgets/QComboBox>
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
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_5;
    QSpinBox *sbPropOfRod;
    QFrame *line_2;
    QLineEdit *leLenngth;
    QLineEdit *leArea;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QFrame *line_3;
    QComboBox *cbUnitLength;
    QComboBox *cbUnitArea;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 960);
        MainWindow->setMinimumSize(QSize(1280, 960));
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
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);
        label_2->setFont(font);

        verticalLayout_7->addWidget(label_2);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy5.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy5);
        label_5->setFont(font);

        verticalLayout_7->addWidget(label_5);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);
        label_6->setFont(font);

        verticalLayout_7->addWidget(label_6);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        sbPropOfRod = new QSpinBox(centralwidget);
        sbPropOfRod->setObjectName(QString::fromUtf8("sbPropOfRod"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(sbPropOfRod->sizePolicy().hasHeightForWidth());
        sbPropOfRod->setSizePolicy(sizePolicy6);
        sbPropOfRod->setFont(font);
        sbPropOfRod->setMinimum(1);
        sbPropOfRod->setMaximum(1000);

        verticalLayout_5->addWidget(sbPropOfRod);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        leLenngth = new QLineEdit(centralwidget);
        leLenngth->setObjectName(QString::fromUtf8("leLenngth"));
        sizePolicy6.setHeightForWidth(leLenngth->sizePolicy().hasHeightForWidth());
        leLenngth->setSizePolicy(sizePolicy6);
        leLenngth->setFont(font);
        leLenngth->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(leLenngth);

        leArea = new QLineEdit(centralwidget);
        leArea->setObjectName(QString::fromUtf8("leArea"));
        sizePolicy6.setHeightForWidth(leArea->sizePolicy().hasHeightForWidth());
        leArea->setSizePolicy(sizePolicy6);
        leArea->setFont(font);

        verticalLayout_5->addWidget(leArea);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy7);
        label_4->setFont(font);

        verticalLayout_4->addWidget(label_4);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_3);

        cbUnitLength = new QComboBox(centralwidget);
        cbUnitLength->addItem(QString());
        cbUnitLength->addItem(QString());
        cbUnitLength->addItem(QString());
        cbUnitLength->addItem(QString());
        cbUnitLength->setObjectName(QString::fromUtf8("cbUnitLength"));
        sizePolicy1.setHeightForWidth(cbUnitLength->sizePolicy().hasHeightForWidth());
        cbUnitLength->setSizePolicy(sizePolicy1);
        cbUnitLength->setFont(font);

        verticalLayout_4->addWidget(cbUnitLength);

        cbUnitArea = new QComboBox(centralwidget);
        cbUnitArea->addItem(QString());
        cbUnitArea->addItem(QString());
        cbUnitArea->addItem(QString());
        cbUnitArea->addItem(QString());
        cbUnitArea->setObjectName(QString::fromUtf8("cbUnitArea"));
        sizePolicy1.setHeightForWidth(cbUnitArea->sizePolicy().hasHeightForWidth());
        cbUnitArea->setSizePolicy(sizePolicy1);
        cbUnitArea->setFont(font);
        cbUnitArea->setEditable(false);
        cbUnitArea->setInsertPolicy(QComboBox::NoInsert);
        cbUnitArea->setIconSize(QSize(16, 16));
        cbUnitArea->setDuplicatesEnabled(true);

        verticalLayout_4->addWidget(cbUnitArea);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(graphicsView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 20));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());

        retranslateUi(MainWindow);

        cbUnitLength->setCurrentIndex(2);
        cbUnitArea->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "E = 2e5 \320\234\320\237\320\260, [\317\203] = 160 \320\234\320\237\320\260", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\320\265\321\200\320\266\320\275\320\265\320\271:", nullptr));
        btnChangeNumberOfRods->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\272\320\276\320\273\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\320\265\321\200\320\266\320\275\320\265\320\271", nullptr));
        btnAcceptNumberOfRods->setText(QApplication::translate("MainWindow", "OK", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\260 \321\201\321\202\320\265\321\200\320\266\320\275\321\217 -", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\277\320\276\320\277\320\265\321\200\320\265\321\207\320\275\320\276\320\263\320\276 \321\201\320\265\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\225\320\264\320\270\320\275\320\270\321\206\321\213 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217", nullptr));
        cbUnitLength->setItemText(0, QApplication::translate("MainWindow", "\320\274\320\272\320\274", nullptr));
        cbUnitLength->setItemText(1, QApplication::translate("MainWindow", "\320\274\320\274", nullptr));
        cbUnitLength->setItemText(2, QApplication::translate("MainWindow", "\321\201\320\274", nullptr));
        cbUnitLength->setItemText(3, QApplication::translate("MainWindow", "\320\272\320\274", nullptr));

        cbUnitArea->setItemText(0, QApplication::translate("MainWindow", "\320\274\320\272\320\274 (\320\272\320\262)", nullptr));
        cbUnitArea->setItemText(1, QApplication::translate("MainWindow", "\320\274\320\274 (\320\272\320\262)", nullptr));
        cbUnitArea->setItemText(2, QApplication::translate("MainWindow", "\321\201\320\274 (\320\272\320\262)", nullptr));
        cbUnitArea->setItemText(3, QApplication::translate("MainWindow", "\320\272\320\274 (\320\272\320\262)", nullptr));

        menu->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\277\321\200\320\276\321\206\320\272\321\201\321\201\320\276\321\200", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
