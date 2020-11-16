#include <iostream>

using namespace std;

int main()
{
    float km, costViatge;

    cout << "Escriu el nombre de km fets: ";
    cin >> km;

    costViatge = km * 2;

    cout << "El cost final del viatge es de: " << costViatge << "€" << endl;

    return 0;
}