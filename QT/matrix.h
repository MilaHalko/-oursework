#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <QVector>

using namespace std;

class Matrix {
public:
    void getAnswer(QVector<QString> &); //uses ofstream answer to show a solving or safe a solving
protected:
    string answerFile;  // temporary file for ofstream answer
    ofstream answer;    // contains text of algorithm solving
    int size;           // array's size
    float e;            // accuracy
    vector<vector<float>> A;    // coefficients of SOLE
    vector<float> B;            // free nums of SOLE
    vector<float> X;            // unknowns of SOLE
    vector<float> oldX;         // old version of X
    int iterationCounter;       // number of iterations
    long double det;                 // determinant of A

    float countE();             // checking numbers for stopping algorithm
    void setOldX();             // set X to oldX
    bool DiagonalPrevails();    // check diagonal numbers for being prevailing
    bool changeMatrix();        // change array to standart form
    long double determinant(int);    // count a determinant of A
    bool SymmetryExists();      // checking array's symmetry

    Matrix(int, float, vector<vector<float>>&, vector<float>&);
    ~Matrix();
    void printX();              // data for ofstream answer about X value
};
