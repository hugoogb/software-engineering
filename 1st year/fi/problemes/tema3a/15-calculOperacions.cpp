#include <iostream>

using namespace std;

int main()
{
    float x, resultatA, resultatB;

    cout << "Introdueix un valor enter: ";
    cin >> x;

    resultatA = 2 / (x - 4);
    resultatB = (1 + 4 - x) / (3 * (x + 3));

    cout << "Resultat: " << resultatA << "\nResultat: " << resultatB << endl;

    return 0;
}