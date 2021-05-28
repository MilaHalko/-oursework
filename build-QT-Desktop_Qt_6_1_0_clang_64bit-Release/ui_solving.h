/********************************************************************************
** Form generated from reading UI file 'solving.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLVING_H
#define UI_SOLVING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Solving
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Solving)
    {
        if (Solving->objectName().isEmpty())
            Solving->setObjectName(QString::fromUtf8("Solving"));
        Solving->resize(617, 587);
        pushButton = new QPushButton(Solving);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(490, 10, 112, 32));

        retranslateUi(Solving);
        QObject::connect(pushButton, &QPushButton::clicked, Solving, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Solving);
    } // setupUi

    void retranslateUi(QDialog *Solving)
    {
        Solving->setWindowTitle(QCoreApplication::translate("Solving", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Solving", "Go back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Solving: public Ui_Solving {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLVING_H
