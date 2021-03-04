#include <iostream>
#include <math.h>

using namespace std;

int BinariADecimal(int binari[], int longitud)
{
    int decimal = 0;

    if (binari[0] == 1)
    {
        decimal = -int(pow(2, (longitud - 1)));
    }

    for (int i = 1; i < longitud; i++)
    {
        decimal += binari[i] * int(pow(2, longitud - i - 1));
    }

    return decimal;
}