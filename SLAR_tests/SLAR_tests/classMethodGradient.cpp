#include "classMethodGradient.hpp"

methodGradient::methodGradient(int size, float e, vector<vector<float>> &A, vector<float> &B) : Matrix(size, e, A, B) {
    r.resize(size);
    w1.resize(size);
    w2.resize(size);
    insertMatrix.resize(size);
    u = 0;
    for (int i = 0; i < size; i++) {
        X[i] = B[i] / A[i][i];
        insertMatrix[i].resize(size);
    }
}
 methodGradient::~methodGradient() {
     r.clear();
     w1.clear();
     w2.clear();
}

bool methodGradient::Iteration(){
    printMatrix();
    methodGradient subMatrix(this->size, this->e, this->A, this->B);
    det = subMatrix.determinant(size);
    inverteMatrix();
    if (det == 0  ||  !DiagonalPrevails()  ||  !SymmetryExists())
        return false;
    cout << "Determinant = " << det << endl << endl;
    do {
        iterationCounter++;
        setOldX();
        countX1();
        printIteration();
        if (iterationCounter >= 1000)
            return false;
    } while (countE() > e);
    return true;
}

void methodGradient::countX1() {
    u = 0;
    for (int i = 0; i < size; i++) {
        r[i] = 0;
        w1[i] = 0;
        w2[i] = 0;
    }
    
    for (int i = 0; i < size; i++) {    // r counting
        cout << "r[" << i << "] = ";
        for (int j = 0; j < size; j++) {
            if (j != 0)
                cout << " + ";
            cout << A[i][j] << " * " << oldX[j];
            r[i] += A[i][j] * oldX[j];
        }
        r[i] -= B[i];
        cout << " - " << B[i] << " = " << r[i] << endl;
    }
    
    for (int i = 0; i < size; i++) {
        cout << "(A^ * r)[" << i << "]  = ";
        for (int j = 0; j < size; j++) {
            if (j != 0)
                cout << " + ";
            w1[i] += insertMatrix[i][j] * r[j];
            cout << insertMatrix[i][j] << " * " << r[j];
        }
        cout << " = " << w1[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << "(A * (A * r))[" << i << "]  = ";
        for (int j = 0; j < size; j++) {
            if (j != 0)
                cout << " + ";
            w2[i] += A[i][j] * w1[j];
            cout << A[i][j] << " * " << w1[j];
        }
        cout << " = " << w2[i] << endl;
    }
    cout << "u = (r, AAr) / (AAr, AAr)" << endl;
    cout << "u = (";
    double number1 = 0;
    double number2 = 0;
    for (int i = 0; i < size; i++) {
        if (i != 0)
            cout << " + ";
        number1 += r[i] * w2[i];
        cout << r[i] * w2[i];
    }
    cout << ") / (";
    for (int i = 0; i < size; i++){
        if (i != 0)
            cout << " + ";
        number2 += pow(w2[i], 2);
        cout << pow(w2[i], 2);
    }
    u = number1 / number2;
    cout << ") = " << u << endl;
    
    for (int i = 0; i < size; i++)
        X[i] = oldX[i] - u * w1[i];
}

void methodGradient::printIteration(){
    cout << endl << "Old X:" << endl;
    printX();
    cout << "Iteration #" << iterationCounter << ":" << endl;
    cout << "Xi = oldXi * u * (A * r)" << endl << "u = " << u << endl << "r = ";
    
    for (int i = 0; i < size; i++) {
        if (i != 0)
            cout << ", ";
        cout << r[i];
    }
    cout << endl << "Ar = ";
    for (int i = 0; i < size; i++){
        if (i != 0)
            cout << ", ";
        cout << w1[i];
    }
    cout << endl;
    
    for (int i = 0; i < size; i++)
        cout << "X" << i << " = " << oldX[i] << " * " << u << " * " << w1[i] << " = " << X[i] << endl;
    cout << endl;
    
    cout << "e = " << e << ",\t" << "maxR = " << countE() << "\t->\t";
    if (countE() > e)
        cout << "e < maxR" << endl << endl;
    else {
        cout << "e >= maxR" << endl << "So the answer:" << endl; printX(); cout << endl;
    }
}


float methodGradient::countE() {
    float maxR = r[0];
    for (int i = 1; i < size; i++)
        if (maxR < abs(r[i]))
            maxR = abs(r[i]);
    return maxR;
}


void methodGradient::inverteMatrix() {
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (i <= j) {
                methodGradient minor(size, e, A, B);
                minor.deleteRowColumn(i, j);
                minor.det = minor.determinant(minor.A.size());
                insertMatrix[i][j] = minor.det * pow(-1, i + j + 2) / det;
            }
            else
                insertMatrix[i][j] = insertMatrix[j][i];
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << insertMatrix[i][j] << "  ";
        }
        cout << endl;
    }
}

void methodGradient::deleteRowColumn(int row, int column) {
    for (int i = row; i < size - 1; i++) {
        swap(A[i], A[i + 1]);
    }
    A.pop_back();
    for (int i = 0; i < A.size(); i++) {
        for (int j = column; j < A.size(); j++) {
            swap(A[i][j], A[i][j + 1]);
        }
        A[i].pop_back();
    }
    
}



void methodGradient::countX() {
    u = 0;
    inverteMatrix();
    for (int i = 0; i < size; i++) {
        r[i] = 0;
        w1[i] = 0;
        w2[i] = 0;
    }
    
    for (int i = 0; i < size; i++) {    // r counting
        for (int j = 0; j < size; j++)
            r[i] += A[i][j] / det * oldX[j];
        r[i] -= B[i];
    }
    
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            w1[i] += A[i][j] / det * r[j];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            w2[i] += A[i][j] / det * w1[j];
    
    double number1 = 0;
    double number2 = 0;
    for (int i = 0; i < size; i++) {
        number1 += r[i] * w2[i];
        number2 += pow(w2[i], 2);
    }
    
    u = number1 / number2;
    
    for (int i = 0; i < size; i++)
        X[i] = oldX[i] - u * w1[i];
}
