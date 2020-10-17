#include <iostream>

using namespace std;

int main()
{
    int numero, unitatsMiler, unitatsDeMes;

    cout << "Introdueix un numero enter: ";
    cin >> numero;

    unitatsMiler = numero / 1000;
    unitatsDeMes = (unitatsMiler / 10) * 10;
    unitatsMiler = unitatsMiler - unitatsDeMes;

    cout << "Les unitats de miler del nombre " << numero << " son " << unitatsMiler << endl;

    return 0;
}