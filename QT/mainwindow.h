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

    void on_size_textChanged(const QString &arg1);

    void on_generatingNums_clicked();

    void on_start_clicked();

    void on_actionNew_SOLE_triggered();


    //INPUT_CHECKING~~~~~~~~~~~~~~~~~~~
    bool GoodSize();
    bool GoodMethod();
    bool GoodAccuracy();


private:
    Ui::MainWindow *ui;
    MainWindow *nui;
    Solving *window2;
};
#endif // MAINWINDOW_H
