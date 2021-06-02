#pragma once
#include <string>
#include <ctime>
using namespace std;

class Checking {
public:
    bool CheckInt(string &str);     //string checking for being int
    bool CheckAccuracy(string &str); // string checking for being unsigned float using dot
    bool CheckFloat(string &str);   //string checking for being float using dot
    int generateFloat(int);       //generates numbers for array
};
