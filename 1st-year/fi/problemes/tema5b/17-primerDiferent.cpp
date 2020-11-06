#include <iostream>
#include "funcionsStrings.cpp"
#include "funcionsStrings.h"

using namespace std;

#define LONG 50

int main()
{
    char cad1[LONG], cad2[LONG], primerCharDiferent;

    cin >> cad1 >> cad2;

    primerCharDiferent = PrimerDiferent(cad1, cad2);

    if (primerCharDiferent == '\0')
    {
        cout << "No hi ha cap caracter diferent";
    }
    else
    {
        cout << "El primer caracter diferent es " << primerCharDiferent;
    }
    cout << endl;

    return 0;
}