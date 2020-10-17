#include <iostream>

using namespace std;

int main()
{
    float EUR, USD, GBP, CHF, JPY;
    int opcio;

    cout << "Introdueix la quantitat d'euros a cambiar: ";
    cin >> EUR;

    cout << "\tMENU";
    cout << "\n1 - Dolars(USD)";
    cout << "\n2 - Lliures(GBP)";
    cout << "\n3 - Francs suïssos(CHF)";
    cout << "\n4 - Yens(JPY)";
    cout << "\nEscull la moneda a la que convertir els euros: ";
    cin >> opcio;

    switch (opcio)
    {
    case 1:
        USD = EUR * 1.34;
        cout << EUR << " euros son " << USD << " (USD)";
        break;
    case 2:
        GBP = EUR * 0.83;
        cout << EUR << " euros son " << GBP << " (GBP)";
        break;
    case 3:
        CHF = EUR * 1.23;
        cout << EUR << " euros son " << CHF << " (CHF)";
        break;
    case 4:
        JPY = EUR * 133.11;
        cout << EUR << " euros son " << JPY << " (JPY)";
        break;
    default:
        cout << "Error: moneda no disponible.";
        break;
    }

    cout << endl;

    return 0;
}