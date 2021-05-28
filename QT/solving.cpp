#include "solving.h"
#include "ui_solving.h"

Solving::Solving(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Solving)
{
    ui->setupUi(this);
}

Solving::~Solving()
{
    delete ui;
}

void Solving::ShowAnswer(QVector<QString> answerSRT) {
    ui->answer->setColumnCount(1);
    ui->answer->setRowCount(answerSRT.size());

    for (int i = 0; i < answerSRT.size(); i++) {
        QTableWidgetItem *item = new QTableWidgetItem(answerSRT[i]);
        ui->answer->setItem(i, 1, item);
    }
}
