#ifndef SOLVING_H
#define SOLVING_H
#pragma once
#include <QDialog>
#include <QDir>
#include <QFileDialog>
#include "filename.h"

namespace Ui {
class Solving;
}

class Solving : public QDialog
{
    Q_OBJECT

public:
    explicit Solving(QWidget *parent = nullptr);
    ~Solving();
    void ShowAnswer(QVector<QString> answerSTR);        // shows an answer ond solving of algorithm
    void setAnswerSTR(QVector<QString>);                // put an answer from mainwindow and convert to attribute answerSTR

private slots:
    void on_pushButton_2_clicked();                     // button "Safe solution"

private:
    Ui::Solving *ui;                                    // solving window
    QVector<QString> answerSTR;                         // algorithm solving text
};

#endif // SOLVING_H
