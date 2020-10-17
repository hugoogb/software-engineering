#include <iostream>

using namespace std;

int main()
{
    int anyNaixement, edat;

    cout << "Introdueix l'any de naixement: ";
    cin >> anyNaixement;

    edat = 2020 - anyNaixement;

    if (edat < 18)
    {
        cout << "Tens " << edat << " anys i ets menor d'edat. ";

        if (edat > 12)
        {
            cout << "Has acabat primaria." << endl;
        }
        else
        {
            cout << "Encara no has acabat primaria." << endl;
        }
    }
    else
    {
        cout << "Tens " << edat << " anys i ets major d'edat. ";

        if (edat < 67)
        {
            cout << "Estas en edat de treballar." << endl;
        }
        else
        {
            cout << "Estas en edat de jubilacio." << endl;
        }
    }

    return 0;
}