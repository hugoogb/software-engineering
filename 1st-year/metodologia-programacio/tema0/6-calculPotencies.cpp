#include <iostream>

using namespace std;

float calculPotencia(int x, int n)
{
    float resultat = 1;

    if (n == 0)
    {
        resultat = 1;
    }
    else if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            resultat *= x;
        }
    }
    else
    {
        n *= -1;

        for (int i = 1; i <= n; i++)
        {
            resultat *= x;
        }
        resultat = 1 / resultat;
    }

    return resultat;
}

int main()
{
    int x, n;
    float resultat;

    cout << "Introdueix el valor de x: ";
    cin >> x;
    cout << "Introdueix el valor de n: ";
    cin >> n;

    resultat = calculPotencia(x, n);

    cout << "Resultat d'elevar " << x << " a " << n << ": " << resultat << endl;

    return 0;
}