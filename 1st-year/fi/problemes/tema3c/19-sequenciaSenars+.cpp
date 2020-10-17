#include <iostream>

using namespace std;

int main()
{
    int nombre, parell;

    while (nombre != 0)
    {
        cout << "Introdueix un nombre enter: ";
        cin >> nombre;

        if ((nombre % 2) == 0 && nombre != 0)
        {
            parell = 1;
        }
    }

    if (parell == 1)
    {
        cout << "Algun nombre de la sequencia es parell.";
    }
    else
    {
        cout << "No hi ha cap nombre parell en la sequencia.";
    }

    cout << endl;

    return 0;
}