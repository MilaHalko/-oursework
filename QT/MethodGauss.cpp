#include "MethodGauss.h"

MethodGauss::MethodGauss(int size, long double e, vector<vector<long double>> &A, vector<long double> &B) : Matrix(size, e, A, B) {}

string MethodGauss::Iteration(){
    MethodGauss subMatrix(this->size, this->e, this->A, this->B);
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

long double MethodGauss::getIterationResult(int i) {
    float result = 0;
    for (int j = 0; j < size; j++)
        if (i != j)
            result += -(A[i][j] * X[j] / A[i][i]);
    result += B[i] / A[i][i];
    return result;
}

void MethodGauss::printIteration(){
    printX();
    answer << "Iteration #" << iterationCounter << ":" << endl;
    for (int i = 0; i < size; i++) {
        answer << "X" << i << " = (";
        for (int j = 0; j < size; j++)
            if (i != j) {
                    answer << "(" << -(A[i][j]) << " * ";
                if (i < j)
                    answer << oldX[j] << ") + ";
                else
                    answer << X[j] << ") + ";
            }
        answer << B[i] << ") / " << A[i][i] << " = " << X[i] << endl;
    }
    answer << endl;
    answer << "e = " << e << ",\t" << "max subtraction =" << countE() << "\t->\t";
    if (countE() > e)
        answer << "e < maxX" << endl << endl;
    else {
        answer << "e >= maxX" << endl << "So the answer:" << endl; printNewX(); answer << endl;
    }
}
