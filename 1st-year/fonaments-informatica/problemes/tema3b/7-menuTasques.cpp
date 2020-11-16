#include <iostream>

using namespace std;

int main()
{
    int opcio;

    cout << "\tMenu" << endl;
    cout << "1 - Opcio 1" << endl;
    cout << "2 - Opcio 2" << endl;
    cout << "3 - Opcio 3" << endl;
    cout << "\nPrem una tecla per seleccionar opció: ";
    cin >> opcio;

    switch (opcio)
    {
    case 1:
        cout << "Fent tasca 1";
        break;
    case 2:
        cout << "Fent tasca 2";
        break;
    case 3:
        cout << "Fent tasca 3";
        break;
    default:
        cout << "Opcio incorrecta";
        break;
    }

    cout << endl;

    return 0;
}