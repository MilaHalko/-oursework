#pragma once
#include "matrix.h"

class MethodJacobi : public Matrix {
    long double getIterationResult(int);      // X[i] counting
    void printIteration();              // data for ofstream answer
public:
    MethodJacobi (int, long double, vector<vector<long double>>&, vector<long double>&);

    string Iteration();                   // count X using Jacobi algorithm
};

