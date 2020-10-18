#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int iniciLimit, finalLimit, denominador = 0;
    float suma = 0, producte = 1, mitjana = 0;

    cout << "Introdueix els dos límits: ";
    cin >> iniciLimit >> finalLimit;

    for (int i = iniciLimit; i <= finalLimit; i++)
    {
        if (i % 2 == 0)
        {
            suma += i;
            producte *= i;
            denominador += 1;
        }
    }

    mitjana = suma / denominador;

    cout << "Suma: " << suma << setprecision(0) << fixed << " - Producte: " << producte << " - Mitjana: " << mitjana << endl;

    return 0;
}