#include <iostream>

using namespace std;

int main()
{
    int anyNaixement, edat;

    cout << "Introdueix l'any de naixement: ";
    cin >> anyNaixement;

    edat = 2020 - anyNaixement;

    cout << "Tens " << edat << " anys" << endl;

    return 0;
}