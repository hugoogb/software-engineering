#include <iostream>

using namespace std;

int main()
{
    int opcio;
    float num1, num2, res;

    cout << "\tMENU";
    cout << "\n1 - Suma";
    cout << "\n2 - Resta";
    cout << "\n3 - Producte";
    cout << "\n4 - Divisio";
    cout << "\n5 - Sortir";
    cout << "\nSelecciona una de les opcions: ";
    cin >> opcio;

    switch (opcio)
    {
    case 1:
        cout << "Introdueix un numero: ";
        cin >> num1;
        cout << "Introdueix l'altre numero: ";
        cin >> num2;

        res = num1 + num2;

        cout << num1 << " + " << num2 << " = " << res;

        break;
    case 2:
        cout << "Introdueix un numero: ";
        cin >> num1;
        cout << "Introdueix l'altre numero: ";
        cin >> num2;

        res = num1 - num2;

        cout << num1 << " - " << num2 << " = " << res;

        break;
    case 3:
        cout << "Introdueix un numero: ";
        cin >> num1;
        cout << "Introdueix l'altre numero: ";
        cin >> num2;

        res = num1 * num2;

        cout << num1 << " * " << num2 << " = " << res;

        break;
    case 4:
        cout << "Introdueix un numero: ";
        cin >> num1;
        cout << "Introdueix l'altre numero: ";
        cin >> num2;

        if (num2 != 0)
        {
            res = num1 / num2;

            cout << num1 << " : " << num2 << " = " << res;
        }
        else
        {
            cout << "Error: Divisio per zero";
        }

        break;
    case 5:
        cout << "Sortint de la calculadora...";

        break;

    default:
        cout << "Error: Opcio no valida";
        break;
    }

    cout << endl;

    return 0;
}