#include "checkinginput.h"

bool Checking::CheckInt(string &str)
{
    if (str[0] == '0') return false;
    for (int i = 0; i < str.size(); i++)
        if(!(isnumber(str[i])))
            return false;
    return true;
}


bool Checking::CheckAccuracy(string &str) {
    int dot = str.find('.');
    if (dot == 0  ||  str.find('.', dot + 1) != -1)
        return false;

    for (int i = 0; i < str.size(); i++)
        if(!(isnumber(str[i])  ||  str[i] == '.'  ||  str[i] == '-'))
            return false;
    return true;
}


bool Checking::CheckFloat(string &str) {
    int minus = str.find('-');
    int dot = str.find('.');
    if (dot == 0  ||  str.find('.', dot + 1) != -1  ||  minus > 1)
        return false;

    for (int i = 0; i < str.size(); i++)
        if(!(isnumber(str[i])  ||  str[i] == '.'  ||  str[i] == '-'))
            return false;
    return true;
}

int Checking::generateFloat(int i) {
    int number = i * (rand() % 200 - 99);
    return number;
}
