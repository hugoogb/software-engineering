#include <iostream>

using namespace std;

int main()
{
    float base, altura, area;

    cout << "Introdueix la base del triangle: ";
    cin >> base;
    cout << "Introdueix l'altura del triangle: ";
    cin >> altura;

    area = (base * altura) / 2;

    cout << "L'area del triangle es " << area << endl;

    return 0;
}