#include "MethodJacobi.h"

MethodJacobi::MethodJacobi(int size, long double e, vector<vector<long double>> &A, vector<long double> &B) : Matrix(size, e, A, B) {}

string MethodJacobi::Iteration(){
    MethodJacobi subMatrix(this->size, this->e, this->A, this->B);
    det = subMatrix.determinant(size);
    if (det == 0  ||  isnan(det)) return "The determinant is 0 or NAN";
    if(!DiagonalPrevails())
        if(!changeMatrix())
            return "Diagonal elements are not prevailing";
    if (!DiagonalPrevails()) return "Diagonal elements are not prevailing";
    answer << "Determinant = " << det << endl << endl;
    do {
        iterationCounter++;
        setOldX();
        for (int i = 0; i < size; i++) {
            X[i] = getIterationResult(i);
            if (isnan(X[i])) {
                answer << "There are can not be more iterations because of NAN numbers" << endl;
                break;
            }
        }
        printIteration();
    } while (countE() > e);
    return "1";
}

long double MethodJacobi::getIterationResult(int i) {
    long double result = 0;
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
        answer << "e >= maxX" << endl << "So the answer:" << endl; printNewX(); answer << endl;
    }
}
