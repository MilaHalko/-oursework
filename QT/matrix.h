#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <QVector>
#include <math.h>

using namespace std;

class Matrix {
public:
    void getAnswer(QVector<QString> &); //uses ofstream answer to show a solving or safe a solving
protected:
    string answerFile = "/Users/mila/Desktop/answerFile.txt";  // temporary file for ofstream answer
    ofstream answer;    // contains text of algorithm solving
    int size;           // array's size
    long double e;            // accuracy
    vector<vector<long double>> A;    // coefficients of SOLE
    vector<long double> B;            // free nums of SOLE
    vector<long double> X;            // unknowns of SOLE
    vector<long double> oldX;         // old version of X
    int iterationCounter;       // number of iterations
    long double det;                 // determinant of A

    virtual string Iteration() = 0;
    long double countE();             // checking numbers for stopping algorithm
    void setOldX();             // set X to oldX
    bool DiagonalPrevails();    // check diagonal numbers for being prevailing
    bool changeMatrix();        // change array to standart form
    long double determinant(int);    // count a determinant of A
    bool SymmetryExists();      // checking array's symmetry

    Matrix(int, long double, vector<vector<long double>>&, vector<long double>&);
    ~Matrix();
    void printX();              // data for ofstream answer about X value
    void printNewX();           // data for ofstream answer about new X value
};
