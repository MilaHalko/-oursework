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
    void ShowAnswer(QVector<QString> answerSTR);
    void setAnswerSTR(QVector<QString>);

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Solving *ui;
    QVector<QString> answerSTR;
};

#endif // SOLVING_H
