#include "SLARMethods.hpp"

int main() {
    
    int size = 4;
    float e = 0.0000001;
    
    vector<vector<float>> A {{20, 2, 3, 7}, {1, 12, -2, -5}, {5, -3, 13, 0}, {0, 0, -1, 15}};
    vector<float> B {5, 4, -3, 7};
    
    //vector<vector<float>> A {{1, 4, 3, 2}, {1, 2, 4, 3}, {7.8, 11, 25.8, -1.5}, {3, 0, 1, 7.4}};
    //vector<float> B {5, 4, 3, 7};
    
    methodJacobi matrix(size, e, A, B);
    if(!matrix.Iteration()) cout << "There is no solution!" << endl;
    
    cout << "----------------------------------------------" << endl;
    cout << "----------------------------------------------" << endl;
    
    methodGauss matrix2(size, e, A, B);
    if (!matrix2.Iteration()) cout << "There is no solution!" << endl;
    
    methodGradient matrix3(size, e, A, B);
    
    return 0;
}
