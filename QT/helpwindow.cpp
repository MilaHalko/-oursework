#include "helpwindow.h"
#include "ui_helpWindow.h"

HelpWindow::HelpWindow(QWidget *parent) : QDialog(parent), ui(new Ui::HelpWindow)
{
    ui->setupUi(this);

    QPixmap pix("/Users/mila/Documents/Progs/Coursework/QT/photos/mainW.png");
    int w = ui->mainPict->width();
    int h = ui->mainPict->height();
    ui->mainPict->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

HelpWindow::~HelpWindow()
{
    delete ui;
}
