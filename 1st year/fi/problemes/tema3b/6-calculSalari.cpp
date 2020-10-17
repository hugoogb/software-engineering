#include <iostream>

using namespace std;

int main()
{
    int anysAntiguetat;
    float salariInicial, salariFinal, percentatge;

    cout << "Introdueix el salari inicial: ";
    cin >> salariInicial;
    cout << "Introdueix l'antiguetat del treballador: ";
    cin >> anysAntiguetat;

    if (anysAntiguetat < 3)
    {
        percentatge = 0.01;
    }
    else
    {
        if (anysAntiguetat < 5)
        {
            percentatge = 0.02;
        }
        else
        {
            percentatge = 0.035;
        }
    }

    salariFinal = salariInicial * (1 + percentatge);

    cout << "El salari final es: " << salariFinal << endl;

    return 0;
}