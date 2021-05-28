#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "solving.h"
#include <QMessageBox>
#include <QProcess>
#include "checkinginput.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_createArray_clicked();

    void on_generatingNums_clicked();

    void on_start_clicked();

    void on_actionNew_SOLE_triggered();


    //INPUT_CHECKING~~~~~~~~~~~~~~~~~~~
    bool goodInt(QString);
    bool goodFloat(QString);
    bool goodMethod();
    bool goodTable();


private:
    Ui::MainWindow *ui;
    MainWindow *nui;
    Solving *window2;
};
#endif // MAINWINDOW_H
