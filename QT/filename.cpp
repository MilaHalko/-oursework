#include "filename.h"
#include "ui_filename.h"

FileName::FileName(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileName)
{
    ui->setupUi(this);
}

FileName::~FileName()
{
    delete ui;
}

QString FileName::getFilename() {return filename;}

void FileName::on_buttonBox_accepted()
{
    if (!(ui->filename->text().isEmpty())) {
        filename = ui->filename->text();
        close();
    }
    else
        QMessageBox::critical(this, "Error!:", "Field is empty.");
}

