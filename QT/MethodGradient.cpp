#include "MethodGradient.h"

MethodGradient::MethodGradient(int size, long double e, vector<vector<long double>> &A, vector<long double> &B) : Matrix(size, e, A, B) {
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
 MethodGradient::~MethodGradient() {
     r.clear();
     w1.clear();
     w2.clear();
}

string MethodGradient::Iteration(){
    MethodGradient subMatrix(this->size, this->e, this->A, this->B);
    det = subMatrix.determinant(size);
    if (det == 0  ||  isnan(det)) return "The determinant is 0 or NAN";
    if(!DiagonalPrevails())
        if(!changeMatrix())
            return "Diagonal elements are not prevailing";
    if (!DiagonalPrevails()) return "Diagonal elements are not prevailing";
    if (!SymmetryExists()) return "Matrix is not symmetrical";
    if (!inverteMatrix()) return "It is not available to inverse matrix because of NAN numbers";

    do {
        iterationCounter++;
        setOldX();
        if (!countX()){
            break;
        }
        printIteration();
    } while (countE() > e);
    return "1";
}

bool MethodGradient::countX() {
    u = 0;
    for (int i = 0; i < size; i++) {
        r[i] = 0;
        w1[i] = 0;
        w2[i] = 0;
    }

    for (int i = 0; i < size; i++) {    // r counting
        answer << "r[" << i << "] = ";
        for (int j = 0; j < size; j++) {
            if (j != 0)
                answer << " + ";
            answer << A[i][j] << " * " << oldX[j];
            r[i] += A[i][j] * oldX[j];
        }
        r[i] -= B[i];
        if (isnan(r[i])) {
            answer << "There are can not be more iterations because of NAN numbers" << endl;
            return false;
        }
        answer << " - " << B[i] << " = " << r[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        answer << "(A^ * r)[" << i << "]  = ";
        for (int j = 0; j < size; j++) {
            if (j != 0)
                answer << " + ";
            w1[i] += insertMatrix[i][j] * r[j];
            answer << insertMatrix[i][j] << " * " << r[j];
        }
        if (isnan(w1[i]))  {
            answer << "There are can not be more iterations because of NAN numbers" << endl;
            return false;
        }
        answer << " = " << w1[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        answer << "(A * (A * r))[" << i << "]  = ";
        for (int j = 0; j < size; j++) {
            if (j != 0)
                answer << " + ";
            w2[i] += A[i][j] * w1[j];
            answer << A[i][j] << " * " << w1[j];
        }
        if (isnan(w2[i])) {
            answer << "There are can not be more iterations because of NAN numbers" << endl;
            return false;
        }
        answer << " = " << w2[i] << endl;
    }
    answer << "u = (r, AAr) / (AAr, AAr)" << endl;
    answer << "u = (";
    long double number1 = 0;
    long double number2 = 0;
    for (int i = 0; i < size; i++) {
        if (i != 0)
            answer << " + ";
        number1 += r[i] * w2[i];
        answer << r[i] * w2[i];
    }
    answer << ") / (";
    for (int i = 0; i < size; i++){
        if (i != 0)
            answer << " + ";
        number2 += pow(w2[i], 2);
        answer << pow(w2[i], 2);
    }
    u = number1 / number2;
    answer << ") = " << u << endl;

    if (isnan(u)) {
        answer << "There are can not be more iterations because of NAN numbers" << endl;
        return false;
    }

    for (int i = 0; i < size; i++)
        X[i] = oldX[i] - u * w1[i];
    return true;
}

void MethodGradient::printIteration(){
    answer << endl << "Old X:" << endl;
    printX();
    answer << "Iteration #" << iterationCounter << ":" << endl;
    answer << "Xi = oldXi * u * (A * r)" << endl << "u = " << u << endl << "r = ";

    for (int i = 0; i < size; i++) {
        if (i != 0)
            answer << ", ";
        answer << r[i];
    }
    answer << endl << "Ar = ";
    for (int i = 0; i < size; i++){
        if (i != 0)
            answer << ", ";
        answer << w1[i];
    }
    answer << endl;

    for (int i = 0; i < size; i++)
        answer << "X" << i << " = " << oldX[i] << " * " << u << " * " << w1[i] << " = " << X[i] << endl;
    answer << endl;

    answer << "e = " << e << ",\t" << "maxR = " << countE() << "\t->\t";
    if (countE() > e)
        answer << "e < maxR" << endl << endl;
    else {
        answer << "e >= maxR" << endl << "So the answer:" << endl; printNewX(); answer << endl;
    }
}


long double MethodGradient::countE() {
    long double maxR = abs(r[0]);
    for (int i = 1; i < size; i++)
        if (maxR < abs(r[i]))
            maxR = abs(r[i]);
    return maxR;
}


bool MethodGradient::inverteMatrix() {
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (i <= j) {
                MethodGradient minor(size, e, A, B);
                minor.deleteRowColumn(i, j);
                minor.det = minor.determinant(minor.A.size());
                insertMatrix[i][j] = minor.det * pow(-1, i + j + 2) / det;
                if (isnan(insertMatrix[i][j])) return false;
            }
            else
                insertMatrix[i][j] = insertMatrix[j][i];
        }
    }
    answer << "Determinant = " << det << endl << endl;
    answer << "insertMatrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            answer << insertMatrix[i][j] << "  ";
        }
        answer << endl;
    }
    answer << endl;
    return true;
}

void MethodGradient::deleteRowColumn(int row, int column) {
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
