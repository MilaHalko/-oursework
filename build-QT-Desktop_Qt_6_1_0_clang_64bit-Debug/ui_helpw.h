/********************************************************************************
** Form generated from reading UI file 'helpw.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPW_H
#define UI_HELPW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helpW
{
public:
    QLabel *mainPict;
    QPushButton *pushButton;

    void setupUi(QWidget *helpW)
    {
        if (helpW->objectName().isEmpty())
            helpW->setObjectName(QString::fromUtf8("helpW"));
        helpW->resize(725, 581);
        helpW->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 228, 255);"));
        mainPict = new QLabel(helpW);
        mainPict->setObjectName(QString::fromUtf8("mainPict"));
        mainPict->setGeometry(QRect(220, 10, 491, 511));
        mainPict->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));
        pushButton = new QPushButton(helpW);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(600, 540, 112, 32));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;\n"
"background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));

        retranslateUi(helpW);
        QObject::connect(pushButton, &QPushButton::clicked, helpW, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(helpW);
    } // setupUi

    void retranslateUi(QWidget *helpW)
    {
        helpW->setWindowTitle(QCoreApplication::translate("helpW", "Form", nullptr));
        mainPict->setText(QString());
        pushButton->setText(QCoreApplication::translate("helpW", "Go back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class helpW: public Ui_helpW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPW_H
