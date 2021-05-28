#include "checkinginput.h"

bool CheckInt(string &str)
{
    bool correct = true;

    if (str.empty())
        return false;

    for (int i = 0; i < str.size(); i++) {
        if (str[0] == '0') return false;
        if(!(isnumber(str[i]))) {
            correct = false;
            break;
        }
    }
    return correct;
}

bool CheckFloat(string &str) {
    int minus = str.find('-');
    int dot = str.find('.');
    if (dot == 0  ||  str.find('.', dot + 1) != -1  ||  str.empty()  ||  minus > 1)
        return false;

    for (int i = 0; i < str.size(); i++)
        if(!(isnumber(str[i])  ||  str[i] == '.'  ||  str[i] == '-'))
            return false;
    return true;
}
