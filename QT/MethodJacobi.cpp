#include "MethodJacobi.h"

MethodJacobi::MethodJacobi(int size, float e, vector<vector<float>> &A, vector<float> &B) : Matrix(size, e, A, B) {}

bool MethodJacobi::Iteration(){
    MethodJacobi subMatrix(this->size, this->e, this->A, this->B);
    det = subMatrix.determinant(size);
    if (det == 0) return false;
    if(!DiagonalPrevails())
        if(!changeMatrix())
            return false;
    if (!DiagonalPrevails()) return false;
    answer << "Determinant = " << det << endl << endl;
    do {
        iterationCounter++;
        setOldX();
        for (int i = 0; i < size; i++)
            X[i] = getIterationResult(i);
        printIteration();
    } while (countE() > e);
    return true;
}

float MethodJacobi::getIterationResult(int i) {
    float result = 0;
    for (int j = 0; j < size; j++)
        if (i != j)
            result += -(A[i][j] * oldX[j] / A[i][i]);
    result += B[i] / A[i][i];
    return result;
}

void MethodJacobi::printIteration() {
    printX();
    answer << "Iteration #" << iterationCounter << ":" << endl;
    for (int i = 0; i < size; i++) {
        answer << "X" << i << " = (";
        for (int j = 0; j < size; j++)
            if (i != j)
                answer << "(" << -A[i][j] << " * " << oldX[j] << ") + ";
        answer << B[i] << ") / " << A[i][i] << " = " << X[i] << endl;
    }
    answer << endl;

    answer << "e = " << e << ",\t" << "max subtraction = " << countE() << "\t->\t";
    if (countE() > e)
        answer << "e < maxX" << endl << endl;
    else {
        answer << "e >= maxX" << endl << "So the answer:" << endl; printX(); answer << endl;
    }
}