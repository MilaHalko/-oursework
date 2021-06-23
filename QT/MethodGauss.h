#pragma once
#include "matrix.h"

class MethodGauss : public Matrix {
    long double getIterationResult(int);  // X[i] counting
    void printIteration();          // ofstream answer data
public:
    MethodGauss (int, long double, vector<vector<long double>>&, vector<long double>&);

    string Iteration();               // count X using Gauss algorithm
};
