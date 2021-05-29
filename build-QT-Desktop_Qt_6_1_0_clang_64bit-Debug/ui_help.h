/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_heplW
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *heplW)
    {
        if (heplW->objectName().isEmpty())
            heplW->setObjectName(QString::fromUtf8("heplW"));
        heplW->resize(800, 600);
        centralwidget = new QWidget(heplW);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 20, 481, 361));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 291, 361));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 6, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 7, 0, 1, 1);

        heplW->setCentralWidget(centralwidget);
        menubar = new QMenuBar(heplW);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        heplW->setMenuBar(menubar);
        statusbar = new QStatusBar(heplW);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        heplW->setStatusBar(statusbar);

        retranslateUi(heplW);

        QMetaObject::connectSlotsByName(heplW);
    } // setupUi

    void retranslateUi(QMainWindow *heplW)
    {
        heplW->setWindowTitle(QCoreApplication::translate("heplW", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("heplW", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("heplW", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("heplW", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("heplW", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("heplW", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("heplW", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("heplW", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("heplW", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class heplW: public Ui_heplW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
