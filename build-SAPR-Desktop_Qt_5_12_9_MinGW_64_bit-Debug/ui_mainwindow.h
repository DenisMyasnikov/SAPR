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
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actioncSave;
    QAction *actionGo_to_post;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *flNumberOfRods;
    QLabel *label;
    QSpinBox *sbNumberOfrods;
    QPushButton *btnChangeNumberOfRods;
    QPushButton *btnAcceptNumberOfRods;
    QFrame *line_4;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cbSetLeftProp;
    QCheckBox *cbSetRightProp;
    QLabel *label_9;
    QSpinBox *sbLoadOnNode;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *leLoadOnNode;
    QComboBox *cbUnitLoadOnNode;
    QSpinBox *sbLoadOnRod;
    QLabel *label_11;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *leLoadOnRod;
    QComboBox *cbUnitLoadOnRod;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_5;
    QSpinBox *sbPropOfRod;
    QFrame *line_2;
    QLineEdit *leLenngth;
    QLineEdit *leArea;
    QLineEdit *leModuleE;
    QLineEdit *leModuleSigma;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QFrame *line_3;
    QComboBox *cbUnitLength;
    QComboBox *cbUnitArea;
    QComboBox *cbModuleE;
    QComboBox *cbModuleSigma;
    QPushButton *btnAcceptPropOfRods;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1051, 800);
        MainWindow->setMinimumSize(QSize(800, 600));
        actioncSave = new QAction(MainWindow);
        actioncSave->setObjectName(QString::fromUtf8("actioncSave"));
        actionGo_to_post = new QAction(MainWindow);
        actionGo_to_post->setObjectName(QString::fromUtf8("actionGo_to_post"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
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
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        flNumberOfRods = new QFormLayout();
        flNumberOfRods->setObjectName(QString::fromUtf8("flNumberOfRods"));
        flNumberOfRods->setSizeConstraint(QLayout::SetMinimumSize);
        flNumberOfRods->setHorizontalSpacing(6);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);

        flNumberOfRods->setWidget(0, QFormLayout::LabelRole, label);

        sbNumberOfrods = new QSpinBox(centralwidget);
        sbNumberOfrods->setObjectName(QString::fromUtf8("sbNumberOfrods"));
        sbNumberOfrods->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sbNumberOfrods->sizePolicy().hasHeightForWidth());
        sbNumberOfrods->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(12);
        sbNumberOfrods->setFont(font1);
        sbNumberOfrods->setMaximum(1000);

        flNumberOfRods->setWidget(0, QFormLayout::FieldRole, sbNumberOfrods);

        btnChangeNumberOfRods = new QPushButton(centralwidget);
        btnChangeNumberOfRods->setObjectName(QString::fromUtf8("btnChangeNumberOfRods"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnChangeNumberOfRods->sizePolicy().hasHeightForWidth());
        btnChangeNumberOfRods->setSizePolicy(sizePolicy3);
        btnChangeNumberOfRods->setFont(font);

        flNumberOfRods->setWidget(1, QFormLayout::LabelRole, btnChangeNumberOfRods);

        btnAcceptNumberOfRods = new QPushButton(centralwidget);
        btnAcceptNumberOfRods->setObjectName(QString::fromUtf8("btnAcceptNumberOfRods"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnAcceptNumberOfRods->sizePolicy().hasHeightForWidth());
        btnAcceptNumberOfRods->setSizePolicy(sizePolicy4);
        btnAcceptNumberOfRods->setFont(font);

        flNumberOfRods->setWidget(1, QFormLayout::FieldRole, btnAcceptNumberOfRods);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setEnabled(true);
        sizePolicy1.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy1);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        flNumberOfRods->setWidget(7, QFormLayout::LabelRole, line_4);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        flNumberOfRods->setWidget(2, QFormLayout::LabelRole, label_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        cbSetLeftProp = new QCheckBox(centralwidget);
        cbSetLeftProp->setObjectName(QString::fromUtf8("cbSetLeftProp"));
        cbSetLeftProp->setFont(font);

        horizontalLayout->addWidget(cbSetLeftProp);

        cbSetRightProp = new QCheckBox(centralwidget);
        cbSetRightProp->setObjectName(QString::fromUtf8("cbSetRightProp"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(cbSetRightProp->sizePolicy().hasHeightForWidth());
        cbSetRightProp->setSizePolicy(sizePolicy5);
        cbSetRightProp->setFont(font);
        cbSetRightProp->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(cbSetRightProp);


        flNumberOfRods->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        flNumberOfRods->setWidget(3, QFormLayout::LabelRole, label_9);

        sbLoadOnNode = new QSpinBox(centralwidget);
        sbLoadOnNode->setObjectName(QString::fromUtf8("sbLoadOnNode"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(sbLoadOnNode->sizePolicy().hasHeightForWidth());
        sbLoadOnNode->setSizePolicy(sizePolicy6);
        sbLoadOnNode->setFont(font);
        sbLoadOnNode->setValue(1);

        flNumberOfRods->setWidget(3, QFormLayout::FieldRole, sbLoadOnNode);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        flNumberOfRods->setWidget(4, QFormLayout::LabelRole, label_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        leLoadOnNode = new QLineEdit(centralwidget);
        leLoadOnNode->setObjectName(QString::fromUtf8("leLoadOnNode"));
        leLoadOnNode->setEnabled(true);
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(100);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(leLoadOnNode->sizePolicy().hasHeightForWidth());
        leLoadOnNode->setSizePolicy(sizePolicy7);
        leLoadOnNode->setMaximumSize(QSize(16777215, 16777215));
        leLoadOnNode->setFont(font);

        horizontalLayout_3->addWidget(leLoadOnNode);

        cbUnitLoadOnNode = new QComboBox(centralwidget);
        cbUnitLoadOnNode->addItem(QString());
        cbUnitLoadOnNode->addItem(QString());
        cbUnitLoadOnNode->addItem(QString());
        cbUnitLoadOnNode->setObjectName(QString::fromUtf8("cbUnitLoadOnNode"));
        cbUnitLoadOnNode->setFont(font);

        horizontalLayout_3->addWidget(cbUnitLoadOnNode);


        flNumberOfRods->setLayout(4, QFormLayout::FieldRole, horizontalLayout_3);

        sbLoadOnRod = new QSpinBox(centralwidget);
        sbLoadOnRod->setObjectName(QString::fromUtf8("sbLoadOnRod"));
        sizePolicy6.setHeightForWidth(sbLoadOnRod->sizePolicy().hasHeightForWidth());
        sbLoadOnRod->setSizePolicy(sizePolicy6);
        sbLoadOnRod->setFont(font);
        sbLoadOnRod->setValue(1);

        flNumberOfRods->setWidget(5, QFormLayout::FieldRole, sbLoadOnRod);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        flNumberOfRods->setWidget(5, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        flNumberOfRods->setWidget(6, QFormLayout::LabelRole, label_12);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        leLoadOnRod = new QLineEdit(centralwidget);
        leLoadOnRod->setObjectName(QString::fromUtf8("leLoadOnRod"));
        leLoadOnRod->setFont(font);

        horizontalLayout_5->addWidget(leLoadOnRod);

        cbUnitLoadOnRod = new QComboBox(centralwidget);
        cbUnitLoadOnRod->addItem(QString());
        cbUnitLoadOnRod->addItem(QString());
        cbUnitLoadOnRod->addItem(QString());
        cbUnitLoadOnRod->setObjectName(QString::fromUtf8("cbUnitLoadOnRod"));
        cbUnitLoadOnRod->setFont(font);

        horizontalLayout_5->addWidget(cbUnitLoadOnRod);


        flNumberOfRods->setLayout(6, QFormLayout::FieldRole, horizontalLayout_5);


        horizontalLayout_2->addLayout(flNumberOfRods);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy8);
        label_2->setFont(font);

        verticalLayout_7->addWidget(label_2);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy8.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy8);
        label_5->setFont(font);

        verticalLayout_7->addWidget(label_5);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy8.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy8);
        label_6->setFont(font);

        verticalLayout_7->addWidget(label_6);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_7->addWidget(label_3);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout_7->addWidget(label_7);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        sbPropOfRod = new QSpinBox(centralwidget);
        sbPropOfRod->setObjectName(QString::fromUtf8("sbPropOfRod"));
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

        leModuleE = new QLineEdit(centralwidget);
        leModuleE->setObjectName(QString::fromUtf8("leModuleE"));
        sizePolicy6.setHeightForWidth(leModuleE->sizePolicy().hasHeightForWidth());
        leModuleE->setSizePolicy(sizePolicy6);
        leModuleE->setFont(font);

        verticalLayout_5->addWidget(leModuleE);

        leModuleSigma = new QLineEdit(centralwidget);
        leModuleSigma->setObjectName(QString::fromUtf8("leModuleSigma"));
        sizePolicy6.setHeightForWidth(leModuleSigma->sizePolicy().hasHeightForWidth());
        leModuleSigma->setSizePolicy(sizePolicy6);
        leModuleSigma->setFont(font);

        verticalLayout_5->addWidget(leModuleSigma);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy9);
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
        cbUnitLength->addItem(QString());
        cbUnitLength->setObjectName(QString::fromUtf8("cbUnitLength"));
        sizePolicy3.setHeightForWidth(cbUnitLength->sizePolicy().hasHeightForWidth());
        cbUnitLength->setSizePolicy(sizePolicy3);
        cbUnitLength->setFont(font);

        verticalLayout_4->addWidget(cbUnitLength);

        cbUnitArea = new QComboBox(centralwidget);
        cbUnitArea->addItem(QString());
        cbUnitArea->addItem(QString());
        cbUnitArea->addItem(QString());
        cbUnitArea->addItem(QString());
        cbUnitArea->addItem(QString());
        cbUnitArea->setObjectName(QString::fromUtf8("cbUnitArea"));
        sizePolicy3.setHeightForWidth(cbUnitArea->sizePolicy().hasHeightForWidth());
        cbUnitArea->setSizePolicy(sizePolicy3);
        cbUnitArea->setFont(font);
        cbUnitArea->setEditable(false);
        cbUnitArea->setInsertPolicy(QComboBox::NoInsert);
        cbUnitArea->setIconSize(QSize(16, 16));
        cbUnitArea->setDuplicatesEnabled(true);

        verticalLayout_4->addWidget(cbUnitArea);

        cbModuleE = new QComboBox(centralwidget);
        cbModuleE->addItem(QString());
        cbModuleE->addItem(QString());
        cbModuleE->addItem(QString());
        cbModuleE->setObjectName(QString::fromUtf8("cbModuleE"));
        sizePolicy3.setHeightForWidth(cbModuleE->sizePolicy().hasHeightForWidth());
        cbModuleE->setSizePolicy(sizePolicy3);
        cbModuleE->setFont(font);

        verticalLayout_4->addWidget(cbModuleE);

        cbModuleSigma = new QComboBox(centralwidget);
        cbModuleSigma->addItem(QString());
        cbModuleSigma->addItem(QString());
        cbModuleSigma->addItem(QString());
        cbModuleSigma->setObjectName(QString::fromUtf8("cbModuleSigma"));
        sizePolicy3.setHeightForWidth(cbModuleSigma->sizePolicy().hasHeightForWidth());
        cbModuleSigma->setSizePolicy(sizePolicy3);
        cbModuleSigma->setFont(font);

        verticalLayout_4->addWidget(cbModuleSigma);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        btnAcceptPropOfRods = new QPushButton(centralwidget);
        btnAcceptPropOfRods->setObjectName(QString::fromUtf8("btnAcceptPropOfRods"));
        btnAcceptPropOfRods->setFont(font);
        btnAcceptPropOfRods->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_2->addWidget(btnAcceptPropOfRods);


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
        menubar->setGeometry(QRect(0, 0, 1051, 20));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actioncSave);
        menu_3->addAction(actionGo_to_post);

        retranslateUi(MainWindow);

        cbUnitLoadOnNode->setCurrentIndex(1);
        cbUnitLoadOnRod->setCurrentIndex(1);
        cbUnitLength->setCurrentIndex(3);
        cbUnitArea->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actioncSave->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
#ifndef QT_NO_SHORTCUT
        actioncSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionGo_to_post->setText(QApplication::translate("MainWindow", "Go to post", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\320\265\321\200\320\266\320\275\320\265\320\271:", nullptr));
        btnChangeNumberOfRods->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\320\265\321\200\320\266\320\275\320\265\320\271", nullptr));
        btnAcceptNumberOfRods->setText(QApplication::translate("MainWindow", "OK", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\236\320\277\320\276\321\200\321\213", nullptr));
        cbSetLeftProp->setText(QApplication::translate("MainWindow", "L", nullptr));
        cbSetRightProp->setText(QApplication::translate("MainWindow", "R", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\243\320\267\320\265\320\273 -", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \320\262 \321\203\320\267\320\273\320\265 ", nullptr));
        cbUnitLoadOnNode->setItemText(0, QApplication::translate("MainWindow", "\320\274\320\235", nullptr));
        cbUnitLoadOnNode->setItemText(1, QApplication::translate("MainWindow", "\320\235", nullptr));
        cbUnitLoadOnNode->setItemText(2, QApplication::translate("MainWindow", "\320\272\320\235", nullptr));

        label_11->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\265\321\200\320\266\320\265\320\275\321\214-", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\321\221\320\275\320\275\320\260\321\217 \320\275\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \320\275\320\260 \321\201\321\202\320\265\321\200\320\266\320\265\320\275\321\214 -", nullptr));
        cbUnitLoadOnRod->setItemText(0, QApplication::translate("MainWindow", "\320\274\320\235/\320\274", nullptr));
        cbUnitLoadOnRod->setItemText(1, QApplication::translate("MainWindow", "\320\235/\320\274", nullptr));
        cbUnitLoadOnRod->setItemText(2, QApplication::translate("MainWindow", "\320\272\320\235/\320\274", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\260 \321\201\321\202\320\265\321\200\320\266\320\275\321\217 -", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 - L", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\277\320\276\320\277\320\265\321\200\320\265\321\207\320\275\320\276\320\263\320\276 \321\201\320\265\321\207\320\265\320\275\320\270\321\217-A", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\234\320\276\320\264\321\203\320\273\321\214 \321\203\320\277\321\200\320\263\320\276\321\201\321\202\320\270 - E", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\277\321\203\321\201\320\272\320\260\320\265\320\274\320\276\320\265 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 - [\317\203]", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\225\320\264\320\270\320\275\320\270\321\206\321\213 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217", nullptr));
        cbUnitLength->setItemText(0, QApplication::translate("MainWindow", "\320\274\320\272\320\274", nullptr));
        cbUnitLength->setItemText(1, QApplication::translate("MainWindow", "\320\274\320\274", nullptr));
        cbUnitLength->setItemText(2, QApplication::translate("MainWindow", "\321\201\320\274", nullptr));
        cbUnitLength->setItemText(3, QApplication::translate("MainWindow", "\320\274", nullptr));
        cbUnitLength->setItemText(4, QApplication::translate("MainWindow", "\320\272\320\274", nullptr));

        cbUnitArea->setItemText(0, QApplication::translate("MainWindow", "\320\274\320\272\320\274 (\320\272\320\262)", nullptr));
        cbUnitArea->setItemText(1, QApplication::translate("MainWindow", "\320\274\320\274 (\320\272\320\262)", nullptr));
        cbUnitArea->setItemText(2, QApplication::translate("MainWindow", "\321\201\320\274 (\320\272\320\262)", nullptr));
        cbUnitArea->setItemText(3, QApplication::translate("MainWindow", "\320\274 (\320\272\320\262)", nullptr));
        cbUnitArea->setItemText(4, QApplication::translate("MainWindow", "\320\272\320\274 (\320\272\320\262)", nullptr));

        cbModuleE->setItemText(0, QApplication::translate("MainWindow", "\320\237\320\260", nullptr));
        cbModuleE->setItemText(1, QApplication::translate("MainWindow", "\320\232\320\237\320\260", nullptr));
        cbModuleE->setItemText(2, QApplication::translate("MainWindow", "\320\234\320\237\320\260", nullptr));

        cbModuleSigma->setItemText(0, QApplication::translate("MainWindow", "\320\237\320\260", nullptr));
        cbModuleSigma->setItemText(1, QApplication::translate("MainWindow", "\320\232\320\237\320\260", nullptr));
        cbModuleSigma->setItemText(2, QApplication::translate("MainWindow", "\320\234\320\237\320\220", nullptr));

        btnAcceptPropOfRods->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\270 \321\201\321\202\320\265\321\200\320\266\320\275\320\265\320\271", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
