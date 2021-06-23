/********************************************************************************
** Form generated from reading UI file 'graphic.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHIC_H
#define UI_GRAPHIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Graphic
{
public:
    QCustomPlot *graph;

    void setupUi(QDialog *Graphic)
    {
        if (Graphic->objectName().isEmpty())
            Graphic->setObjectName(QString::fromUtf8("Graphic"));
        Graphic->resize(829, 606);
        graph = new QCustomPlot(Graphic);
        graph->setObjectName(QString::fromUtf8("graph"));
        graph->setGeometry(QRect(10, 10, 811, 581));

        retranslateUi(Graphic);

        QMetaObject::connectSlotsByName(Graphic);
    } // setupUi

    void retranslateUi(QDialog *Graphic)
    {
        Graphic->setWindowTitle(QCoreApplication::translate("Graphic", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graphic: public Ui_Graphic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHIC_H
