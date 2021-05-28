#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
#include <QVector>

using namespace std;

class Matrix {
public:
    void getAnswer(QVector<QString> &);
protected:
    string answerFile;
    ofstream answer;
    int size;
    float e;
    vector<vector<float>> A;
    vector<float> B;
    vector<float> X;
    vector<float> oldX;
    int iterationCounter;

    float countE();
    void setOldX();
    bool DiagonalPrevails();
    bool changeMatrix();
    float determinant(int);
    bool SymmetryExists();

    Matrix(int, float, vector<vector<float>>&, vector<float>&);
    ~Matrix();
    void printX();
};
