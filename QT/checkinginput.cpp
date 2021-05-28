#include "checkinginput.h"

bool CheckInt(string &str)
{
    for (int i = 0; i < str.size(); i++) {
        if (str[0] == '0') return false;
        if(!(isnumber(str[i])))
            return false;
    }
    return true;
}

bool CheckFloat(string &str) {
    int minus = str.find('-');
    int dot = str.find('.');
    if (dot == 0  ||  str.find('.', dot + 1) != -1  ||  minus > 1)
        return false;

    for (int i = 0; i < str.size(); i++)
        if(!(isnumber(str[i])  ||  str[i] == '.'  ||  str[i] == '-'))
            return false;
    return true;
}

float generateFloat(int i) {
    float number = i * (rand() % 200 - 99);
    return number;
}
