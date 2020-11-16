#include <iostream>
#include "funcionsStrings.cpp"
#include "funcionsStrings.h"

#define LONG 50

using namespace std;

int main()
{
    char cadena[LONG];
    int longitud;

    cin >> cadena;

    longitud = LongCadena(cadena);

    cout << "La longitud de la cadena " << cadena << " es: " << longitud << endl;

    return 0;
}