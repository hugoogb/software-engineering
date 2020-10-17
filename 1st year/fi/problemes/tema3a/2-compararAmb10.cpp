#include <iostream>

using namespace std;

int main()
{
    int nombre;
    bool resultat;

    cout << "Introdueix un nombre enter: ";
    cin >> nombre;

    resultat = (nombre <= 10);

    cout << "El resultat de la comparacio es: " << resultat << endl;

    return 0;
}