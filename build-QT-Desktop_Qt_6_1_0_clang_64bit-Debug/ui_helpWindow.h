/********************************************************************************
** Form generated from reading UI file 'helpwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPWINDOW_H
#define UI_HELPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpWindow
{
public:
    QLabel *label_6;
    QWidget *verticalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *mainPict;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_16;
    QLabel *label_11;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QLabel *label_17;

    void setupUi(QDialog *HelpWindow)
    {
        if (HelpWindow->objectName().isEmpty())
            HelpWindow->setObjectName(QString::fromUtf8("HelpWindow"));
        HelpWindow->resize(760, 460);
        HelpWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 228, 255);"));
        label_6 = new QLabel(HelpWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 120, 231, 17));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(true);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));
        verticalLayoutWidget = new QWidget(HelpWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 400, 401, 18));
        horizontalLayout = new QHBoxLayout(verticalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(14);
        font1.setBold(true);
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));

        horizontalLayout->addWidget(label_14);

        label_15 = new QLabel(verticalLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(14);
        font2.setItalic(true);
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));

        horizontalLayout->addWidget(label_15);

        label_10 = new QLabel(HelpWindow);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 350, 61, 16));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));
        label_10->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        verticalLayoutWidget_3 = new QWidget(HelpWindow);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 180, 361, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(label_3);

        label_9 = new QLabel(verticalLayoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));

        verticalLayout_2->addWidget(label_9);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));

        verticalLayout_2->addWidget(label_5);

        label = new QLabel(HelpWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 31, 31));
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_7 = new QLabel(HelpWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 290, 51, 16));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(HelpWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 120, 81, 16));
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mainPict = new QLabel(HelpWindow);
        mainPict->setObjectName(QString::fromUtf8("mainPict"));
        mainPict->setGeometry(QRect(420, 10, 331, 391));
        mainPict->setLayoutDirection(Qt::LeftToRight);
        mainPict->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));
        mainPict->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(HelpWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(600, 540, 112, 32));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;\n"
"background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));
        label_4 = new QLabel(HelpWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 70, 311, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));
        label_16 = new QLabel(HelpWindow);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 10, 91, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(35);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(true);
        label_16->setFont(font3);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));
        label_11 = new QLabel(HelpWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(80, 350, 321, 20));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_8 = new QLabel(HelpWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 290, 201, 20));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pushButton_2 = new QPushButton(HelpWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(640, 410, 112, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setBold(true);
        pushButton_2->setFont(font4);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;\n"
"background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));
        label_17 = new QLabel(HelpWindow);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 430, 581, 16));
        label_17->setFont(font2);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));

        retranslateUi(HelpWindow);
        QObject::connect(pushButton_2, &QPushButton::clicked, HelpWindow, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(HelpWindow);
    } // setupUi

    void retranslateUi(QDialog *HelpWindow)
    {
        HelpWindow->setWindowTitle(QCoreApplication::translate("HelpWindow", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("HelpWindow", "click after correct size input.", nullptr));
        label_14->setText(QCoreApplication::translate("HelpWindow", "Array:", nullptr));
        label_15->setText(QCoreApplication::translate("HelpWindow", "don\342\200\231t leave the fields empty, write numbers. Use a dot instead ", nullptr));
        label_10->setText(QCoreApplication::translate("HelpWindow", "Accuracy:", nullptr));
        label_3->setText(QCoreApplication::translate("HelpWindow", "Generate numbers: ", nullptr));
        label_9->setText(QCoreApplication::translate("HelpWindow", "click after table creating using \"Create array\" button. Also,", nullptr));
        label_5->setText(QCoreApplication::translate("HelpWindow", " table size and size from field \"Size\" must be equal.", nullptr));
        label->setText(QCoreApplication::translate("HelpWindow", "Size: ", nullptr));
        label_7->setText(QCoreApplication::translate("HelpWindow", "Choose:", nullptr));
        label_2->setText(QCoreApplication::translate("HelpWindow", "Create array:", nullptr));
        mainPict->setText(QString());
        pushButton->setText(QCoreApplication::translate("HelpWindow", "Go back", nullptr));
        label_4->setText(QCoreApplication::translate("HelpWindow", "write only numbers. Size can be from 2 to 50.", nullptr));
        label_16->setText(QCoreApplication::translate("HelpWindow", "Rules", nullptr));
        label_11->setText(QCoreApplication::translate("HelpWindow", "write float positive number using a dot. (0.0.. -  0.00001)", nullptr));
        label_8->setText(QCoreApplication::translate("HelpWindow", "choose one of 3 methods.", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HelpWindow", "Go Back", nullptr));
        label_17->setText(QCoreApplication::translate("HelpWindow", "of coma if you need float number. Numbers can be from -999 to 999, remain is not less than 0.00001.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpWindow: public Ui_HelpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPWINDOW_H
