#include "classMatrix.hpp"

class methodGauss : Matrix {
    vector<float> oldX;
    int iterationCounter;
    
    float countE();
    void setOldX();
    float getIterationResult(int);
    void printIteration();
    bool GoodConvergence();
    
public:
    methodGauss(int, float, vector<vector<float>>&, vector<float>&);
    ~methodGauss();
    bool Iteration();
};

