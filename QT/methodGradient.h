#pragma once
#include "matrix.h"

class methodGradient : public Matrix {
    float getIterationResult(int);
    void printIteration();
    vector<int> v;
public:
    methodGradient (int, float, vector<vector<float>>&, vector<float>&);
    ~methodGradient();

    bool Iteration();
};
