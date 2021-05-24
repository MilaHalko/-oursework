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
