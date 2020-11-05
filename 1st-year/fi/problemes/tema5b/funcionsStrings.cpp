#include <iostream>
#include <string.h>
#include "funcionsStrings.h"

using namespace std;

int LongCadena(char c[])
{
    int length = 0;

    length = strlen(c);

    return length;
}

void ConcatenarCadena(char cad1[], char cad2[], char cad3[])
{
    int i = 0, j = 0;

    while (cad1[i] != '\0')
    {
        cad3[i] = cad1[i];

        i++;
    }

    while (cad2[j] != '\0')
    {
        cad3[i] = cad2[j];

        i++;
        j++;
    }

    cad3[i] = '\0';
}

char TrobarCaracter(char cad[], char c)
{
    int i = 0;
    bool find = false;

    while (cad[i] != '\0' && !find)
    {
        if (cad[i] == c)
        {
            find = true;
        }
        else
        {
            i++;
        }
    }

    if (find)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}