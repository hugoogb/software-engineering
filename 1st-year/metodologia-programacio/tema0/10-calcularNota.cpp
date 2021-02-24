#include <iostream>
//#include "notes.h"

using namespace std;

float calculaNota(float teoria, float problemes, float practiques, char &acta)
{
    float notaFinal;

    if (teoria == -1 || problemes == -1 || practiques == -1)
    {
        notaFinal = -1;
        acta = 'P';
    }
    else
    {
        notaFinal = (0.4 * teoria) + (0.3 * problemes) + (0.3 * practiques);

        if (notaFinal == 10)
        {
            acta = 'M';
        }
        else if (notaFinal >= 9)
        {
            acta = 'E';
        }
        else if (notaFinal >= 7)
        {
            acta = 'N';
        }
        else if (notaFinal >= 5)
        {
            acta = 'A';
        }
        else if (notaFinal >= 0)
        {
            acta = 'S';
        }
    }

    return notaFinal;
}

int calculaNotes(float notesFinals[], char notesActa[])
{
    float notaTeoria, notaProblemes, notaPractiques;
    char c, acta;
    int i = 0;

    do
    {
        cout << "Introdueix la nota de teoria: ";
        cin >> notaTeoria;
        cout << "Introdueix la nota de problemes: ";
        cin >> notaProblemes;
        cout << "Introdueix la nota de practiques: ";
        cin >> notaPractiques;

        notesFinals[i] = calculaNota(notaTeoria, notaProblemes, notaPractiques, acta);
        notesActa[i] = acta;

        cout << "Vols continuar (S/N)? ";
        cin >> c;

        i++;
    } while (c == 'S');

    return i;
}
