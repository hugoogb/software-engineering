#include <iostream>

using namespace std;

int main()
{
    int num1, num2, suma, resta, producte, divisio;

    cout << "Escriu un nombre: ";
    cin >> num1;
    cout << "Escriu un altre nombre: ";
    cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    producte = num1 * num2;
    divisio = num1 / num2;

    cout << "El resultat de la suma es: " << suma << endl;
    cout << "El resultat de la resta es: " << resta << endl;
    cout << "El resultat de la multiplicacio es: " << producte << endl;
    cout << "El resultat de la divisio es: " << divisio << endl;

    return 0;
}