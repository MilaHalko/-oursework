#include "filename.h"
#include "ui_filename.h"

fileName::fileName(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fileName)
{
    ui->setupUi(this);
}

fileName::~fileName()
{
    delete ui;
}

QString fileName::getFilename() {return filename;}

void fileName::on_buttonBox_accepted()
{
    if (!(ui->filename->text().isEmpty())) {
        filename = ui->filename->text();
        close();
    }
    else
        QMessageBox::critical(this, "Error!:", "Field is empty.");
}

