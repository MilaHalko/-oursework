/********************************************************************************
** Form generated from reading UI file 'filename.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILENAME_H
#define UI_FILENAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fileName
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *filename;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *fileName)
    {
        if (fileName->objectName().isEmpty())
            fileName->setObjectName(QString::fromUtf8("fileName"));
        fileName->resize(400, 300);
        fileName->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 228, 255);"));
        verticalLayoutWidget = new QWidget(fileName);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 110, 361, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 14.0em;\n"
"font-family: 'Times New Roman', 14;"));

        verticalLayout->addWidget(label);

        filename = new QLineEdit(verticalLayoutWidget);
        filename->setObjectName(QString::fromUtf8("filename"));
        filename->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;\n"
"background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));

        verticalLayout->addWidget(filename);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(fileName);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, fileName, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, fileName, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(fileName);
    } // setupUi

    void retranslateUi(QDialog *fileName)
    {
        fileName->setWindowTitle(QCoreApplication::translate("fileName", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("fileName", "Enter file name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileName: public Ui_fileName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILENAME_H
