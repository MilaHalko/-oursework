#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void MainWindow::on_createArray_clicked() {
    if (goodInt(ui->size->text())) {
        ui->A->setRowCount(ui->size->text().toInt());
        ui->A->setColumnCount(ui->size->text().toInt());
        ui->B->setRowCount(ui->size->text().toInt());
        ui->B->setColumnCount(1);

        QStringList listA;
        QStringList listB;
        listB << "B";
        for (int i = 0; i < ui->size->text().toInt(); i++)
            listA << "X" + QVariant(i).toString();
        ui->A->setHorizontalHeaderLabels(listA);
        ui->B->setHorizontalHeaderLabels(listB);
    }
    else
        QMessageBox::critical(this, "Error!", "Please check you wrote size correctly!\n\nIf you need help click button 'Instruction' on the previos window.");
}

void MainWindow::on_generatingNums_clicked() {
    if (ui->A->columnCount() == ui->size->text().toInt()) {
        for (int i = 0; i < ui->size->text().toUInt(); i++) {
            for (int j = 0; j < ui->size->text().toUInt(); j++) {
                float numberA = QRandomGenerator::global()->bounded(-1000,1000) / 10;
                QTableWidgetItem *itemA = new QTableWidgetItem(tr("%1").arg(numberA));
                ui->A->setItem(i, j, itemA);
            }
            float numberB = QRandomGenerator::global()->bounded(-1000,1000) / 10;
            QTableWidgetItem *itemB = new QTableWidgetItem(tr("%1").arg(numberB));
            ui->B->setItem(0, i, itemB);
        }
    }
    else
        QMessageBox::critical(this, "Error!", "Please firstly create array (fill gap 'Size' and press 'Create array')!\n\nIf you need help click button 'Instruction' on the previos window.");
}

void MainWindow::on_start_clicked() {
    if (goodInt(ui->size->text())  &&  goodFloat(ui->accuracy->text())  &&  goodMethod()  &&  goodTable()) {
        Solving window2;
        window2.setModal(true);
        window2.exec();
    }
    else
        QMessageBox::critical(this, "Error!", "Please check:\n1) you chose all options;\n2) your data is correct.\n\nIf you need help click button 'Instruction' on the previos window.");
}



void MainWindow::on_actionNew_SOLE_triggered() {
    hide();
    nui = new MainWindow;
    nui->show();
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

bool MainWindow::goodInt(QString qstr) {
    std::string str = (qstr.toUtf8().constData());
    return CheckInt(str);
}

bool MainWindow::goodFloat(QString qstr) {
    std::string str = (qstr.toUtf8().constData());
    return CheckFloat(str);
}

bool MainWindow::goodMethod() {
    return (ui->m_Jacobi->isChecked()  ||  ui->m_Gauss->isChecked()  ||  ui->m_Gradient->isChecked());
}

bool MainWindow::goodTable() {
    for (int i = 0; i < ui->size->text().toInt(); i++ ) {
        if (!goodFloat(ui->B->item(0, i)->text()));
            return false;
        for (int j = 0; j < ui->size->text().toUInt(); j++)
            if (!goodFloat(ui->A->item(i, j)->text()))
                return false;
    }
    return true;
}



