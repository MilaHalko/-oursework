#pragma once
#include "matrix.h"

class methodGauss : public Matrix {
    float getIterationResult(int);
    void printIteration();
public:
    methodGauss (int, float, vector<vector<float>>&, vector<float>&);

    bool Iteration();
};
