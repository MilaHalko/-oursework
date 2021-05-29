#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#pragma once
#include <QMainWindow>
#include <QMessageBox>
#include <QProcess>
#include <QRandomGenerator>
#include <ctime>
#include "checkinginput.h"
#include "solving.h"
#include "SOLEMethodsLibrary.h"
#include "helpw.h"


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

    void countSOLE();


    //INPUT_CHECKING~~~~~~~~~~~~~~~~~~~
    bool goodInt(QString);
    bool goodFloat(QString);
    bool goodMethod();
    bool goodTable();


    void on_instruction_clicked();

private:
    Ui::MainWindow *ui;
    MainWindow *nui;
    Solving *window2;
};
#endif // MAINWINDOW_H
