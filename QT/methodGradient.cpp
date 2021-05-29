#include "methodGradient.h"

methodGradient::methodGradient(int size, float e, vector<vector<float>> &A, vector<float> &B) : Matrix(size, e, A, B) {
    v.resize(size);
}
 methodGradient::~methodGradient() {
     v.clear();
}

bool methodGradient::Iteration(){
    if (determinant(size) == 0  ||  !DiagonalPrevails()  ||  !SymmetryExists())
        return false;
    answer << "Determinant = " << determinant(size) << endl << endl;
    do {
        iterationCounter++;
        setOldX();
        for (int i = 0; i < size; i++) {
            X[i] = getIterationResult(i);
        }
        printIteration();
    } while (countE() > e);
    return true;
}

float methodGradient::getIterationResult(int i) {
    float result = 0;
    for (int j = 0; j < size; j++)
        if (i != j)
            result += -(A[i][j] * X[j] / A[i][i]);
    result += B[i] / A[i][i];
    return result;
}

void methodGradient::printIteration(){
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
        answer << "e >= maxX" << endl << "So the answer:" << endl; printX(); answer << endl;
    }
}
