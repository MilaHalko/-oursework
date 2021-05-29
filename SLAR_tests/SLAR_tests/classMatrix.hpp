#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

class Matrix {
protected:
    int size;
    float e;
    vector<vector<float>> A;
    vector<float> B;
    vector<float> X;
    vector<float> oldX;
    int iterationCounter;
    double det;
    
    float countE();
    void setOldX();
    bool DiagonalPrevails();
    bool changeMatrix();
    bool SymmetryExists();
    double determinant(int);
    
    Matrix(int, float, vector<vector<float>>&, vector<float>&);
    ~Matrix();
    void printMatrix();
    void printX();
};
