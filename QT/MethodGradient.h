#pragma once
#include "matrix.h"

class MethodGradient : public Matrix {
    vector<float> r;            // vector r for counting u
    long double u;              // number u = oldX - u * AA'r
    vector<float> w1;           // vector A'r
    vector<float> w2;           // vector AA'r
    vector<vector<float>> insertMatrix;     // A'

    void countX();                          // counts all X for 1 itteration
    float countE();                         // compare e to r vector max number
    void inverteMatrix();                   // creates invertMatrix
    void deleteRowColumn(int, int);         // Minor creating
    void printIteration();      // data for ofstrean answer
public:
    MethodGradient (int, float, vector<vector<float>>&, vector<float>&);
    ~MethodGradient();

    bool Iteration();           // count X using Gradient method
};
