/********************************************************************************
** Form generated from reading UI file 'helpWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPWINDOW_H
#define UI_HELPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_helpWindow
{
public:
    QLabel *label;

    void setupUi(QGroupBox *helpWindow)
    {
        if (helpWindow->objectName().isEmpty())
            helpWindow->setObjectName(QString::fromUtf8("helpWindow"));
        helpWindow->resize(625, 606);
        label = new QLabel(helpWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 20, 411, 331));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../Desktop/\320\241\320\275\320\270\320\274\320\276\320\272 \321\215\320\272\321\200\320\260\320\275\320\260 2021-05-29 \320\262 02.47.42.png")));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        label->setTextInteractionFlags(Qt::NoTextInteraction);

        retranslateUi(helpWindow);

        QMetaObject::connectSlotsByName(helpWindow);
    } // setupUi

    void retranslateUi(QGroupBox *helpWindow)
    {
        helpWindow->setWindowTitle(QCoreApplication::translate("helpWindow", "GroupBox", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class helpWindow: public Ui_helpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPWINDOW_H
