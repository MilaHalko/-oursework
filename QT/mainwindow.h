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
#include "helpwindow.h"

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

    void on_createArray_clicked();      // creates empty array m*m based on a size from field "Size"

    void on_generatingNums_clicked();   // generates and put numbers to created array

    void on_start_clicked();            // button "Start" returns a algorithm result or error message

    void on_actionNew_SOLE_triggered(); // creates new main window and new project

    void countSOLE();                   // count X using chosen algorithm

    void on_instruction_clicked();      // opens instruction window


    //INPUT_CHECKING~~~~~~~~~~~~~~~~~~~
    bool goodInt(QString);      // string checking for being int
    bool goodAccuracy(QString); // string checking for being unsigned float using dot
    bool goodFloat(QString);    // string checking for being float using dot
    bool goodMethod();          // checks that 1 of 3 methods was chosen
    bool goodTable();           // checks all array's field for being correct

private:
    Ui::MainWindow *ui;       // main window
    MainWindow *nui;          // new main window (new project)
    Solving *window2;         // window with algorithm solving
    Checking check;
};
#endif // MAINWINDOW_H
