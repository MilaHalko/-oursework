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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Solving
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QTableWidget *answer;

    void setupUi(QDialog *Solving)
    {
        if (Solving->objectName().isEmpty())
            Solving->setObjectName(QString::fromUtf8("Solving"));
        Solving->resize(857, 604);
        Solving->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 228, 255);"));
        verticalLayoutWidget = new QWidget(Solving);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(730, 10, 118, 571));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
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

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;\n"
"background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));

        verticalLayout->addWidget(pushButton_2);

        verticalLayoutWidget_2 = new QWidget(Solving);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 711, 581));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(verticalLayoutWidget_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 707, 577));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));

        verticalLayout_3->addWidget(label);

        answer = new QTableWidget(scrollAreaWidgetContents);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));
        answer->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        answer->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        answer->setRowCount(0);
        answer->setColumnCount(0);
        answer->horizontalHeader()->setVisible(false);
        answer->horizontalHeader()->setDefaultSectionSize(300);
        answer->horizontalHeader()->setStretchLastSection(true);
        answer->verticalHeader()->setVisible(false);
        answer->verticalHeader()->setStretchLastSection(false);

        verticalLayout_3->addWidget(answer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(Solving);
        QObject::connect(pushButton, &QPushButton::clicked, Solving, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Solving);
    } // setupUi

    void retranslateUi(QDialog *Solving)
    {
        Solving->setWindowTitle(QCoreApplication::translate("Solving", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Solving", "Go back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Solving", "Safe solution", nullptr));
        label->setText(QCoreApplication::translate("Solving", "Solution:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Solving: public Ui_Solving {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLVING_H
