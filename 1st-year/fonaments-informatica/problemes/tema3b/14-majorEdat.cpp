#include <iostream>

using namespace std;

int main()
{
    int anyNaixement, edat;

    cout << "Introdueix el teu any de naixement: ";
    cin >> anyNaixement;

    edat = 2020 - anyNaixement;

    if (edat >= 18)
    {
        cout << "Tens " << edat << " anys i ets major d'edat";
    }
    else
    {
        cout << "Tens " << edat << " anys i ets menor d'edat";
    }

    cout << endl;

    return 0;
}