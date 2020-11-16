#include <iostream>

using namespace std;

int main()
{
    int nombre;

    cout << "Introdueix un nombre enter: ";
    cin >> nombre;

    if (nombre >= 0 && nombre <= 10)
    {
        cout << "El nombre " << nombre << " esta en l'interval" << endl;
    }
    else
    {
        cout << "El nombre " << nombre << " NO esta en l'interval" << endl;
    }

    return 0;
}