#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, notaMitjana;

    cout << "Introdueix la primera nota: ";
    cin >> nota1;
    cout << "Introdueix la segona nota: ";
    cin >> nota2;
    cout << "Introdueix la tercera nota: ";
    cin >> nota3;

    notaMitjana = (nota1 + nota2 + nota3) / 3;

    cout << "La mitjana de les tres notes " << nota1 << ", " << nota2 << " i " << nota3 << " es " << notaMitjana << endl;

    return 0;
}