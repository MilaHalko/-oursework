#pragma once
#include "matrix.h"

class MethodGradient : public Matrix {
    vector<long double> r;            // vector r for counting u
    long double u;              // number u = oldX - u * AA'r
    vector<long double> w1;           // vector A'r
    vector<long double> w2;           // vector AA'r
    vector<vector<long double>> insertMatrix;     // A'

    bool countX();                          // counts all X for 1 itteration
    long double countE();                         // compare e to r vector max number
    bool inverteMatrix();                   // creates invertMatrix
    void deleteRowColumn(int, int);         // Minor creating
    void printIteration();                  // data for ofstrean answer
public:
    MethodGradient (int, long double, vector<vector<long double>>&, vector<long double>&);
    ~MethodGradient();

    string Iteration();           // count X using Gradient method
};
