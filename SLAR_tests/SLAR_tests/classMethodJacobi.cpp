#include "classMethodGauss.hpp"

methodGauss::methodGauss(int size, float e, vector<vector<float>> &A, vector<float> &B) : iterationCounter(0), Matrix(size, e, A, B) {
    oldX.resize(size);
}
methodGauss:: ~methodGauss() {
    oldX.clear();
}


bool methodGauss::Iteration(){
    print();
    if (!GoodConvergence())
        return false;
    do {
        iterationCounter++;
        setOldX();
        for (int i = 0; i < size; i++)
            X[i] = getIterationResult(i);
        printIteration();
    } while (countE() > e);
    return true;
}

bool methodGauss::GoodConvergence() {
    for (int i = 0; i < size; i++) {
        int diagonal = abs(A[i][i]);
        int others = 0;
        
        for (int j = 0; j < size; j++)
            if (j != i)
                others += abs(A[i][j]);
        
        if (diagonal < others) {
            cout << "Absolute value of the diagonal element [" << i << "; " << i << "] is smaller than absolute value of the sum of the other elements in this line!" << endl;
            cout << "So the system of equations has no solution." << endl;
            return false;
        }
    }
    return true;
}

float methodGauss::getIterationResult(int i) {
    float result = 0;
    for (int j = 0; j < size; j++)
        if (i != j)
            result += -(A[i][j] * oldX[j] / A[i][i]);
    result += B[i] / A[i][i];
    return result;
}

float methodGauss::countE(){
    float maxSubtraction = abs(X[0] - oldX[0]);
    for (int i = 1; i < size; i++)
        if (maxSubtraction < abs(X[i] - oldX[i]))
            maxSubtraction = abs(X[i] - oldX[i]);
    return maxSubtraction;
}

void methodGauss::setOldX() {
    for (int i = 0; i < size; i++)
        oldX[i] = X[i];
}

//PRINT_SOLUTION~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void methodGauss::printIteration() {
    cout << endl << "Old X:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "X" << i << " = " << oldX[i] << endl;
    }
    cout << endl;
    
    cout << "Iteration #" << iterationCounter << ":" << endl;
    for (int i = 0; i < size; i++) {
        cout << "X" << i << " = (";
        for (int j = 0; j < size; j++)
            if (i != j)
                cout << "( " << -A[i][j] << " * " << setw(7) << oldX[j] << ") + ";
        cout << B[i] << ") / " << A[i][i] << " = " << X[i] << endl;
    }
    cout << endl;
    
    cout << "e = " << e << ",\t" << "max subtraction = " << countE() << "\t->\t";
    if (countE() > e)
        cout << "maxX > e" << endl;
    else cout << "maxX <= e" << endl;
    cout << endl << endl;
}
