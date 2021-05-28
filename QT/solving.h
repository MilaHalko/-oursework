#ifndef SOLVING_H
#define SOLVING_H
#pragma once
#include <QDialog>

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

private:
    Ui::Solving *ui;
};

#endif // SOLVING_H
