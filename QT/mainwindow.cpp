#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_size_textChanged(const QString &arg1)     //array creating
{
    if(GoodSize())
    {

    }
    else
    {
        QMessageBox::critical(this, "Error!", "It's wrong symbol! Don`t write it \n\nIf you need help click button 'Instruction' on the previos window.");
        ui->size->text().clear();
    }
}

void MainWindow::on_generatingNums_clicked()    //generating numbers in array
{
    if (GoodSize())
    {

    }
    else
    {
        QMessageBox::critical(this, "Error!", "Please firstly create array (fill gap 'Size')!\n\nIf you need help click button 'Instruction' on the previos window.");
    }
}

void MainWindow::on_start_clicked()
{
    if (GoodSize()  &&  GoodAccuracy()  &&  GoodMethod())
    {
        Solving window2;
        window2.setModal(true);
        window2.exec();
    }
    else
    {
        QMessageBox::critical(this, "Error!", "Please check:\n1) you chose all options;\n2) your data is correct.\n\nIf you need help click button 'Instruction' on the previos window.");
    }
}



void MainWindow::on_actionNew_SOLE_triggered()  //New SOLE (new file)
{
    hide();
    nui = new MainWindow;
    nui->show();
}



bool MainWindow::GoodSize()
{
    std::string str = (ui->size->text()).toUtf8().constData();
    return CheckSize(str);
}

bool MainWindow::GoodMethod()
{
    return (ui->m_Jacobi->isChecked()  ||  ui->m_Gauss->isChecked()  ||  ui->m_Gradient->isChecked());
}

bool MainWindow::GoodAccuracy()
{
    std::string str = (ui->accuracy->text()).toUtf8().constData();
    return CheckAccuracy(str);
}


