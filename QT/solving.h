#ifndef SOLVING_H
#define SOLVING_H
#pragma once
#include <QDialog>
#include <QDir>
#include <QFileDialog>
#include "filename.h"
#include "graphic.h"

namespace Ui {
class Solving;
}

class Solving : public QDialog
{
    Q_OBJECT

public:
    explicit Solving(QWidget *parent = nullptr);
    ~Solving();
    void ShowAnswer();        // shows an answer ond solving of algorithm
    void setAnswerSTR(QVector<QString>);                // put an answer from mainwindow and convert to attribute answerSTR
    void setABSize (vector<vector<long double>> A, vector<long double> B, int size); //sets vectors A & B

private slots:
    void on_pushButton_2_clicked();                     // button "Safe solution"
    void on_pushButton_3_clicked();

private:
    Ui::Solving *ui;                                    // solving window
    QVector<QString> answerSTR;                         // algorithm solving text

    vector<vector<long double>> A;
    vector <long double> B;
    int size;
};

#endif // SOLVING_H
