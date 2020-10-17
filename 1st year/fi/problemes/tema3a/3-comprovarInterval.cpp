#include <iostream>

using namespace std;

int main()
{
    int valor;
    bool resultat;

    cout << "Entra un valor enter: ";
    cin >> valor;

    resultat = (valor > 0 && valor < 10);

    cout << "El resultat de la comparacio es: " << resultat << endl;

    return 0;
}