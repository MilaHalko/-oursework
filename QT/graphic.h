#ifndef GRAPHIC_H
#define GRAPHIC_H
#pragma once

#include <QDialog>
#include "qcustomplot.h"
#include "matrix.h"

namespace Ui {
class Graphic;
}

class Graphic : public QDialog
{
    Q_OBJECT

public:
    explicit Graphic(QWidget *parent = nullptr);
    ~Graphic();
    void showGraph(vector<vector<long double>> A, vector<long double>);

private:
    Ui::Graphic *ui;
};

#endif // GRAPHIC_H
