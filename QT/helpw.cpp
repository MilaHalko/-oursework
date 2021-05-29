#include "helpw.h"
#include "ui_helpw.h"

helpW::helpW(QWidget *parent) : QDialog(parent), ui(new Ui::helpW)
{
    ui->setupUi(this);

    QPixmap pix("/Users/mila/Documents/Progs/Coursework/QT/photos/mainW.png");
    int w = ui->mainPict->width();
    int h = ui->mainPict->height();
    ui->mainPict->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

helpW::~helpW()
{
    delete ui;
}
