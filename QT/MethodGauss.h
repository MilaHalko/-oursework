#pragma once
#include "matrix.h"

class MethodGauss : public Matrix {
    float getIterationResult(int);  // X[i] counting
    void printIteration();          // ofstream answer data
public:
    MethodGauss (int, float, vector<vector<float>>&, vector<float>&);

    bool Iteration();               // count X using Gauss algorithm
};
