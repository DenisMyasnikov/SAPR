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
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PostProcessor
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *PostProcessor)
    {
        if (PostProcessor->objectName().isEmpty())
            PostProcessor->setObjectName(QString::fromUtf8("PostProcessor"));
        PostProcessor->resize(1051, 800);
        verticalLayout_2 = new QVBoxLayout(PostProcessor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(PostProcessor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        label = new QLabel(PostProcessor);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);

        verticalLayout_2->addWidget(label);


        retranslateUi(PostProcessor);

        QMetaObject::connectSlotsByName(PostProcessor);
    } // setupUi

    void retranslateUi(QWidget *PostProcessor)
    {
        PostProcessor->setWindowTitle(QApplication::translate("PostProcessor", "Form", nullptr));
        label_2->setText(QApplication::translate("PostProcessor", "TextLabel", nullptr));
        label->setText(QApplication::translate("PostProcessor", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PostProcessor: public Ui_PostProcessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTPROCESSOR_H
