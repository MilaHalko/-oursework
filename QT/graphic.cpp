#include "graphic.h"
#include "ui_graphic.h"

Graphic::Graphic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Graphic)
{
    ui->setupUi(this);
}

Graphic::~Graphic()
{
    delete ui;
}

void Graphic::showGraph( vector<vector<long double>> A, vector<long double> B) {

    ui->graph->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    QVector<double> x1(100), y1(100);
    QVector<double> x2(100), y2(100);

    for (int i = 0; i < 100; ++i) {
        x1[i] = x2[i] = i - 50;
        y1[i] = (B[0] - A[0][0] * x1[i]) / A[0][1];
        y2[i] = (B[1] - A[1][0] * x2[i]) / A[1][1];
    }

    ui->graph->addGraph();
    ui->graph->graph(0)->setData(x1, y1);
    ui->graph->addGraph();
    ui->graph->graph(1)->setData(x2, y2);

    ui->graph->xAxis->setLabel("x");
    ui->graph->yAxis->setLabel("y");

    ui->graph->xAxis->setRange(-50, 50);
    ui->graph->yAxis->setRange(-50, 50);
    ui->graph->replot();
    this->exec();
}
