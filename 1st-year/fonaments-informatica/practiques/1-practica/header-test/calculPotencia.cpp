#include <iostream>
#include "Potencia.cpp"
#include "Potencia.h"

using namespace std;

int main()
{
    int res, base, exponent;

    cout << "Introdueix la base de la potencia: ";
    cin >> base;
    cout << "Introdueix l'exponent de la potencia: ";
    cin >> exponent;

    res = Potencia(base, exponent);

    cout << res << endl;

    return 0;
}