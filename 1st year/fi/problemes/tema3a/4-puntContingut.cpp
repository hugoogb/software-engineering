#include <iostream>

using namespace std;

int main()
{
    int x, y;
    bool resultat;

    cout << "Introdueix un punt (x,y), coordenada x: ";
    cin >> x;
    cout << "Coordenada y: ";
    cin >> y;

    resultat = (x >= 0 && x <= 10 && y >= 0 && y <= 10);

    cout << "El resultat es: " << resultat << endl;

    return 0;
}