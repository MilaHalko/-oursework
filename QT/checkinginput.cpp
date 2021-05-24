#include "checkinginput.h"

bool CheckSize(string &str)
{
    bool correct = true;

    for (int i = 0; i < str.size(); i++)
    {
        if(!(isnumber(str[i])  ||  str[i] == ' '))
        {
            correct = false;
            break;
        }
    }
    return correct;
}

bool CheckAccuracy(string &str)
{
    bool correct = true;
    int pos = str.find('.');
    if (pos == 0  ||  pos == -1)
        return !correct;

    for (int i = 0; i < str.size(); i++)
    {
        if(!(isnumber(str[i])  ||  str[i] == ' '  ||  str[i] == '.'))
        {
            correct = false;
            break;
        }
    }
    return correct;
}
