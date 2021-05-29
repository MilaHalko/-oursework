#include "classMethodJacobi.hpp"

methodJacobi::methodJacobi(int size, float e, vector<vector<float>> &A, vector<float> &B) : Matrix(size, e, A, B) {}

bool methodJacobi::Iteration(){
    printMatrix();
    methodJacobi subMatrix(this->size, this->e, this->A, this->B);
    det = subMatrix.determinant(size);
    if (!DiagonalPrevails()  ||  det == 0)
        return false;
    cout << "Determinant = " << det << endl << endl;
    do {
        iterationCounter++;
        setOldX();
        for (int i = 0; i < size; i++)
            X[i] = getIterationResult(i);
        printIteration();
        if (iterationCounter >= 1000)
            return false;
    } while (countE() > e);
    return true;
}

float methodJacobi::getIterationResult(int i) {
    float result = 0;
    for (int j = 0; j < size; j++)
        if (i != j)
            result += -(A[i][j] * oldX[j] / A[i][i]);
    result += B[i] / A[i][i];
    return result;
}


void methodJacobi::printIteration() {
    printX();
    cout << "Iteration #" << iterationCounter << ":" << endl;
    for (int i = 0; i < size; i++) {
        cout << "X" << i << " = (";
        for (int j = 0; j < size; j++)
            if (i != j)
                cout << "(" << -A[i][j] << " * " << oldX[j] << ") + ";
        cout << B[i] << ") / " << A[i][i] << " = " << X[i] << endl;
    }
    cout << endl;
    
    cout << "e = " << e << ",\t" << "max subtraction = " << countE() << "\t->\t";
    if (countE() > e)
        cout << "e < maxX" << endl << endl;
    else {
        cout << "e >= maxX" << endl << "So the answer:" << endl; printX(); cout << endl;
    }
}
