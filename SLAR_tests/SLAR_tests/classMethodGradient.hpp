#pragma once
#include "classMatrix.hpp"

class methodGradient : Matrix {
    void printIteration();
    vector<float> r;
    long double u;
    vector<float> w1;
    vector<float> w2;
    vector<vector<float>> insertMatrix;
    
    void countX();
    void countX1();
    float countE();
    void inverteMatrix();
    void deleteRowColumn(int, int);
public:
    methodGradient (int, float, vector<vector<float>>&, vector<float>&);
    ~methodGradient();
    
    bool Iteration();
};
