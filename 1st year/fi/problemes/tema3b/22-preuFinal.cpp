#include <iostream>

using namespace std;

int main()
{
    float unitatsProducte, preuProducte, preuInicial, preuTotal, preuFinal, IVA, descompte;

    cout << "Introdueix el preu per producte: ";
    cin >> preuProducte;
    cout << "Introdueix el numero d'unitats venudes: ";
    cin >> unitatsProducte;

    preuInicial = unitatsProducte * preuProducte;
    IVA = preuInicial * 0.07;
    preuTotal = preuInicial + IVA;

    if (preuTotal <= 500)
    {
        preuFinal = preuTotal;
    }
    else
    {
        if (preuTotal > 500 && preuTotal <= 1000)
        {
            descompte = preuTotal * 0.05;
            preuFinal = preuTotal - descompte;
        }
        else
        {
            if (preuTotal > 1000)
            {
                descompte = preuTotal * 0.10;
                preuFinal = preuTotal - descompte;
            }
        }
    }

    cout << "L'import final de la compra son " << preuFinal << " euros." << endl;

    return 0;
}