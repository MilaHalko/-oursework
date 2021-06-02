#include "matrix.h"

Matrix::Matrix(int size, float e, vector<vector<float>> &A, vector<float> &B): size(size), e(e), iterationCounter(0), answerFile("Answer.txt") {
    this->A.resize(size);
    this->B.resize(size);
    this->X.resize(size);
    this->oldX.resize(size);
    answer.open(answerFile);

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
            answer << "Absolute value of the diagonal element [" << i << "; " << i << "] is smaller than absolute value of the sum of the other elements in this line!" << endl;
            return false;
        }
    }
    return true;
}


long double Matrix::determinant(int size) {
    long double result;
    if (size > 2) {
        for (int j = A.size() - size + 1; j < A.size(); j++) {
            if (A[A.size() - size][j] != 0) {
                long double sub = A[A.size() - size][j] / A[A.size() - size][A.size() - size];
                for (int i = A.size() - size; i < A.size(); i++) {
                    A[i][j] -= sub * A[i][A.size() - size];
                }
            }
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
    answer << "But array has been successfully upgraded!" << endl;
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

void Matrix::printX() {
    for (int i = 0; i < size; i++) {
        answer << "X" << i << " = " << oldX[i] << endl;
    }
    answer << endl;
}


void Matrix::getAnswer(QVector<QString> &answerSTR) {
    answer.close();
    string subSTR;

    ifstream answerIn (answerFile);
    while (getline(answerIn, subSTR)) {
        QString subQSTR = QString::fromStdString(subSTR);
        answerSTR.push_back(QString(subQSTR));
    }
    answerIn.close();
}
