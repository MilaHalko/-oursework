#pragma once
#include "matrix.h"

class MethodJacobi : public Matrix {
    float getIterationResult(int);      // X[i] counting
    void printIteration();              // data for ofstream answer
public:
    MethodJacobi (int, float, vector<vector<float>>&, vector<float>&);

    bool Iteration();                   // count X using Jacobi algorithm
};

