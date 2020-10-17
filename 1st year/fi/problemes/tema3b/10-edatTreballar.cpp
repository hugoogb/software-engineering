#include <iostream>

using namespace std;

int main()
{
    int anyNaixement, edat;

    cout << "Escriu el teu any de naixement: ";
    cin >> anyNaixement;

    edat = 2020 - anyNaixement;

    cout << "Tens " << edat << " anys." << endl;

    if (edat >= 16 && edat < 67)
    {
        cout << "Estas en edat de treballar." << endl;
    }

    return 0;
}