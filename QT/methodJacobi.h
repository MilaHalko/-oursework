#pragma once
#include "matrix.h"

class methodJacobi : public Matrix {
    float getIterationResult(int);
    void printIteration();
public:
    methodJacobi (int, float, vector<vector<float>>&, vector<float>&);

    bool Iteration();
};

