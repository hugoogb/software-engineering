#include "FuncionsMasterMind.h"

using namespace std;

int Aleatori(int NumMin, int NumMax)
{
    int NumAleatori;

    srand((unsigned)time(NULL));

    NumAleatori = NumMin + (rand() % (NumMax - NumMin + 1));

    return NumAleatori;
}

void Menu()
{
    cout << "MASTER MIND" << endl
         << endl;
    cout << "Escull una opcio: " << endl
         << endl;
    cout << "Opcio 1 Ajuda" << endl;
    cout << "Opcio 2 Jugar" << endl;
    cout << "Opcio 3 Sortir" << endl;
}

void Ajuda()
{
    cout << "L'objectiu del joc es trobar el codi ocult" << endl;
    cout << "El codi es de longitud " << LongCodi << "nombres del 0 al 9" << endl;
    cout << "Despres de cada intent et dona la seguent informacio: " << endl;
    cout << "\tNombre de nombres encertats (en la posicio correcte)" << endl;
    cout << "\tNombre de nombres aproximats (correctes pero mal col.locats)" << endl;
    cout << "El nombre de intents son " << MaxIntents << endl;
}

void GenerarCodiOcult(int CodiMaster[], int Dim)
{
    for (int i = 0; i < Dim; i++)
    {
        CodiMaster[i] = Aleatori(0, Dim);
    }
}

int LlegirNombre(int min, int max)
{
    int Num;

    cout << "Entra valor entre " << min << " i " << max << ": ";
    cin >> Num;

    while (Num < min || Num > max)
    {
        cout << "Error: valor fora de l'interval" << endl;

        cout << "Entra valor entre " << min << " i " << max << ": ";
        cin >> Num;
    }

    return Num;
}

void intToArray(int Nombre, int Codi[], int Dim)
{
    int divisor = 1, numAux = Nombre;

    while (numAux >= 10)
    {
        numAux /= 10;

        if (numAux >= 10)
        {
            divisor *= 10;
        }
    }

    for (int i = 0; i < Dim; i++)
    {
        Codi[i] = Nombre / divisor;
        Nombre -= Codi[i] * divisor;
        divisor /= 10;
    }
}

void InicialitzarArray(int Array[], int Dim, int Valor)
{
    for (int i = 0; i < Dim; i++)
    {
        Array[i] = Valor;
    }
}

void FrequenciaDigit(int Codi[], int Dim, int Frequencia[])
{
    for (int i = 0; i < Dim; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (Codi[i] == j)
            {
                Frequencia[j]++;
            }
        }
    }
}

int NombreEncerts(int CodiMaster[], int CodiBreaker[], int Dim)
{
    int counterCorrecte = 0;

    for (int i = 0; i < Dim; i++)
    {
        if (CodiMaster[i] == CodiBreaker[i])
        {
            counterCorrecte++;
        }
    }
}

int Minim(int Valor1, int Valor2)
{
    if (Valor1 < Valor2)
    {
        return Valor1;
    }
    else if (Valor2 < Valor1)
    {
        return Valor2;
    }
    else
    {
        return Valor1;
    }
}

int NombreAproximacions(int FrequenciaCodiMaster[], int FrequenciaCodiBreaker[], int Encerts)
{
    int w, res;

    for (int i = 0; i < 10; i++)
    {
        res = (Minim(FrequenciaCodiMaster[i], FrequenciaCodiBreaker[i]) - Encerts);
        w += res;
    }

    return w;
}