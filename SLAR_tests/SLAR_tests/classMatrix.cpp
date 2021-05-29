#include "classMatrix.hpp"

Matrix::Matrix(int size, float e, vector<vector<float>> &A, vector<float> &B): size(size), e(e), iterationCounter(0) {
    this->A.resize(size);
    this->B.resize(size);
    this->X.resize(size);
    this->oldX.resize(size);
    
    for (int i = 0; i < size; i++) {
        this->A[i].resize(size);
        for (int j = 0; j < size; j++)
            this->A[i][j] = A[i][j];
        this->B[i] = B[i];
    }
}

Matrix::~Matrix(){
    A.clear();
    B.clear();
    X.clear();
    oldX.clear();
}


bool Matrix::DiagonalPrevails() {
    for (int i = 0; i < size; i++) {
        int diagonal = abs(A[i][i]);
        int others = 0;
        
        for (int j = 0; j < size; j++)
            if (j != i)
                others += abs(A[i][j]);
        
        if (diagonal < others) {
            cout << "Absolute value of the diagonal element [" << i << "; " << i << "] is smaller than absolute value of the sum of the other elements in this line!" << endl;
            return changeMatrix();
        }
    }
    return true;
}


double Matrix::determinant(int size) {
    float result;
    if (size > 2) {
        for (int j = A.size() - size + 1; j < A.size(); j++) {
            if (A[A.size() - size][j] != 0) {
                float sub = A[A.size() - size][j] / A[A.size() - size][A.size() - size];
                for (int i = A.size() - size; i < A.size(); i++) {
                    A[i][j] -= sub * A[i][A.size() - size];
                }
            }
            else
                return 0;
        }
        result = A[A.size() - size][A.size() - size] * determinant(size - 1);
    }
    else {
        if (size == 1)
            result = A[0][0];
        else {
            result = A[A.size() - size][A.size() - size] * A[A.size() - size + 1][A.size() - size + 1];
            result -= A[A.size() - size][A.size() - size + 1] * A[A.size() - size + 1][A.size() - size];
        }
    }
    return result;
}


bool Matrix::changeMatrix() {
    vector<bool> sub (size, false);
    vector<vector<float>> subA (size);
    vector<float> subB (size);
    
    for (int i = 0; i < size; i++)
        subA[i].resize(size);
    
    for (int i = 0; i < size; i++) {
        int maxIndex = 0;
        for (int j = 1; j < size; j++)
            if (abs(A[i][maxIndex]) < abs(A[i][j]))
                maxIndex = j;
        
        if (sub[maxIndex] == true)
            return false;
        
        sub[maxIndex] = true;
        for (int j = 0; j < size; j++) {
            subA[maxIndex][j] = A[i][j];
        }
        subB[maxIndex] = B[i];
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            A[i][j] = subA[i][j];
        B[i] = subB[i];
    }
    cout << ".. Array upgrading process .." << endl;
    printMatrix();
    cout << "New array has been successfully upgraded!" << endl;
    return true;
}


bool Matrix::SymmetryExists() {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (A[i][j] != A[j][i]) return false;
        }
    }
    return true;
}


float Matrix::countE(){
    float maxSubtraction = abs(X[0] - oldX[0]);
    for (int i = 1; i < size; i++)
        if (maxSubtraction < abs(X[i] - oldX[i]))
            maxSubtraction = abs(X[i] - oldX[i]);
    return maxSubtraction;
}

void Matrix::setOldX() {
    for (int i = 0; i < size; i++)
        oldX[i] = X[i];
}

//PRINT_SOLUTION~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void Matrix::printMatrix() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << A[i][j] << " ";
        cout << "   =   " << B[i] << endl;
    }
    cout << endl;
}


void Matrix::printX() {
    for (int i = 0; i < size; i++) {
        cout << "X" << i << " = " << oldX[i] << endl;
    }
    cout << endl;
}


