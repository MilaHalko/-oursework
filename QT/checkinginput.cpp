#include "checkinginput.h"

bool Checking::CheckInt(string &str)
{
    for (int i = 0; i < str.size(); i++)
        if(!(isnumber(str[i])))
            return false;
    int number = stoi(str);
    if (number <= 1  ||  number >50) return false;
    return true;
}


bool Checking::CheckAccuracy(string &str) {
    int dot = str.find('.');
    if (dot == 0  ||  str.find('.', dot + 1) != -1)
        return false;
    if (str.find("-") != -1)
        return false;

    for (int i = 0; i < str.size(); i++)
        if(!(isnumber(str[i])  ||  str[i] == '.'  ||  str[i] == '-'))
            return false;
    float number = stof(str);
    if(number == 0  || number > 999 || number < 0.00001)
        return false;
    return true;
}


bool Checking::CheckFloat(string &str) {
    if (str.size() >= 10) return false;
    int minus = str.find('-');
    int dot = str.find('.');
    if (dot == 0  ||  str.find('.', dot + 1) != -1  ||  minus > 1  ||  (minus == 0 && dot == 1))
        return false;

    for (int i = 0; i < str.size(); i++)
        if(!(isnumber(str[i])  ||  str[i] == '.'  ||  str[i] == '-'))
            return false;

    float number = abs(stof(str));
    float remain = number - (int)number;
    if(number > 999 || (remain < 0.00001 && remain != 0))
        return false;

    return true;
}

int Checking::generateFloat(int i) {
    int number = i * (rand() % 21 - 10);

    if (number > 999) {
        do {
            number -= rand() % 11;
        } while (number > 999);
    }

    if (number < -999) {
        do {
            number += rand() % 11;
        } while (number < -999);
    }
    return number;
}
