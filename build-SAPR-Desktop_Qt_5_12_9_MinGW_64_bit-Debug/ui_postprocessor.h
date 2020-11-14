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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PostProcessor
{
public:

    void setupUi(QWidget *PostProcessor)
    {
        if (PostProcessor->objectName().isEmpty())
            PostProcessor->setObjectName(QString::fromUtf8("PostProcessor"));
        PostProcessor->resize(1051, 800);

        retranslateUi(PostProcessor);

        QMetaObject::connectSlotsByName(PostProcessor);
    } // setupUi

    void retranslateUi(QWidget *PostProcessor)
    {
        PostProcessor->setWindowTitle(QApplication::translate("PostProcessor", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PostProcessor: public Ui_PostProcessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTPROCESSOR_H
