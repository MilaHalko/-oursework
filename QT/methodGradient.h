#pragma once
#include "matrix.h"

class methodGradient : public Matrix {
    void printIteration();
    vector<float> r;
    long double u;
    vector<float> w1;
    vector<float> w2;
    vector<vector<float>> insertMatrix;

    void countX();
    float countE();
    void inverteMatrix();
    void deleteRowColumn(int, int);
public:
    methodGradient (int, float, vector<vector<float>>&, vector<float>&);
    ~methodGradient();

    bool Iteration();
};
