#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void MainWindow::on_createArray_clicked() {
    if (!ui->size->text().isEmpty()  &&  goodInt(ui->size->text())) {
        ui->A->setRowCount(ui->size->text().toInt());
        ui->A->setColumnCount(ui->size->text().toInt() + 1);
        QStringList listA;
        for (int i = 0; i < ui->size->text().toInt(); i++)
            listA << "X" + QVariant(i).toString();
        listA << "B";
        ui->A->setHorizontalHeaderLabels(listA);
    }
    else
        QMessageBox::critical(this, "Error!", "Please check you wrote size correctly!\n\nIf you need help click button 'Instruction' on the previos window.");
}

void MainWindow::on_generatingNums_clicked() {
    if (!ui->size->text().isEmpty()  &&  ui->A->rowCount() == ui->size->text().toInt()) {
        for (uint i = 0; i < ui->size->text().toInt(); i++) {
            for (uint j = 0; j <= ui->size->text().toInt(); j++) {
                QTableWidgetItem *item;
                if (i > j  &&  ui->m_Gradient->isChecked())
                    item = new QTableWidgetItem((ui->A->item(j, i)->text()));
                else {
                    if (i != j)
                        item = new QTableWidgetItem(QVariant(check.generateFloat(1)).toString());
                    else
                        item = new QTableWidgetItem(QVariant(check.generateFloat(10 * ui->size->text().toUInt())).toString());
                }
                ui->A->setItem(i, j, item);
            }
        }
    }
    else
        QMessageBox::critical(this, "Error!", "Please firstly create array (fill gap 'Size' and press 'Create array')!\n\nIf you need help click button 'Instruction' on the previos window.");
}

void MainWindow::on_start_clicked() {
    if (!ui->size->text().isEmpty() && !ui->accuracy->text().isEmpty() && goodInt(ui->size->text()) && goodAccuracy(ui->accuracy->text()) && ui->A->rowCount() == ui->size->text().toInt() && goodMethod() && goodTable())
        countSOLE();
    else
        QMessageBox::critical(this, "Error!", "Please check:\n1) you chose all options;\n2) your data is correct.\n\nIf you need help click button 'Instruction' on the previos window.");
}

void MainWindow::countSOLE() {
    int size = ui->size->text().toInt();
    float e = ui->accuracy->text().toFloat();
    vector<vector<float>> A (ui->size->text().toInt());
    vector<float> B (ui->size->text().toInt());

    for (int i = 0; i < ui->size->text().toUInt(); i++) {
        A[i].resize(ui->size->text().toInt());
        for (int j = 0; j < ui->size->text().toUInt(); j++)
            A[i][j] = ui->A->item(i, j)->text().toInt();
    }

    for (int i = 0; i < ui->size->text().toInt(); i++)
        B[i] = ui->A->item(i,ui->size->text().toInt())->text().toInt();

    bool result = false;
    QVector<QString> answerSTR;
    answerSTR.resize(0);

    if (ui->m_Jacobi->isChecked()) {
        MethodJacobi matrix(size, e, A, B);
        result = matrix.Iteration();
        matrix.getAnswer(answerSTR);
    }
    if (ui->m_Gauss->isChecked()) {
        MethodGauss matrix(size, e, A, B);
        result = matrix.Iteration();
        matrix.getAnswer(answerSTR);
    }
    if (ui->m_Gradient->isChecked()) {
        MethodGradient matrix(size, e, A, B);
        result = matrix.Iteration();
        matrix.getAnswer(answerSTR);
    }
    if (result == false)
        QMessageBox::critical(this, "SOLE answer:", "There is no solution!");
    else {
        Solving window2;
        window2.setAnswerSTR(answerSTR);
        window2.setModal(true);
        window2.ShowAnswer(answerSTR);
        window2.exec();
    }
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
    return check.CheckInt(str);
}

bool MainWindow::goodAccuracy(QString qstr) {
    std::string str = (qstr.toUtf8().constData());
    return check.CheckAccuracy(str);
}

bool MainWindow::goodFloat(QString qstr) {
    std::string str = (qstr.toUtf8().constData());
    return check.CheckFloat(str);
}

bool MainWindow::goodMethod() {
    return (ui->m_Jacobi->isChecked()  ||  ui->m_Gauss->isChecked()  ||  ui->m_Gradient->isChecked());
}

bool MainWindow::goodTable() {
    for (int i = 0; i < ui->size->text().toInt(); i++ )
        for (int j = 0; j <= ui->size->text().toInt(); j++)
            if (ui->A->item(i, i)->text().isEmpty())
                return false;
            else
                if (!goodFloat(ui->A->item(i, j)->text()))
                    return false;
    return true;
}




void MainWindow::on_instruction_clicked()
{
    HelpWindow w;
    w.setModal(true);
    w.exec();
}

