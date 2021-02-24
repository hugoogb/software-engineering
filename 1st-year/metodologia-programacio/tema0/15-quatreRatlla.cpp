#include <iostream>

using namespace std;

const int N_FILES = 6;
const int N_COLUMNES = 7;

int tauler[N_FILES][N_COLUMNES];

int posaFitxa(int tauler[N_FILES][N_COLUMNES], int columna, int jugador)
{
    while (0 <= columna <= N_COLUMNES)
    {
        cout << "Columna fora del tauler..." << endl;
        cout << "A quina columna vols introduir la fitxa: ";
        cin >> columna;
    }

    if (tauler[0][columna] != 0)
    {
        return '-1';
    }
    else
    {
        for (int fila = 1; fila < N_FILES; fila++)
        {
            if (tauler[fila][columna] == 0)
            {
                return fila;
            }
        }
    }
}

bool quatreRatllaHoritzontal(int tauler[N_FILES][N_COLUMNES], int fila, int columna)
{
    int fitxaJugador = tauler[fila][columna];
    int fitxesIguals = 0;

    for (int i = 0; i < N_COLUMNES; i++)
    {
        if (tauler[fila][i] == fitxaJugador)
        {
            fitxesIguals++;
        }
        else
        {
            fitxesIguals = 0;
        }
    }

    if (fitxesIguals == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool quatreRatllaVertical(int tauler[N_FILES][N_COLUMNES], int fila, int columna)
{
    int fitxaJugador = tauler[fila][columna];
    int fitxesIguals = 0;

    for (int i = 0; i < N_FILES; i++)
    {
        if (tauler[N_FILES][columna] == fitxaJugador)
        {
            fitxesIguals++;
        }
        else
        {
            fitxesIguals = 0;
        }
    }

    if (fitxesIguals == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool quatreRatllaDiagonal1(int tauler[N_FILES][N_COLUMNES], int fila, int columna)
{
    int fitxaJugador = tauler[fila][columna];
    int fitxesIguals = 0;

    for (int i = 0; i < N_FILES; i++)
    {
        for (int j = 0; j < N_COLUMNES; j++)
        {
            if (tauler[i][j] == fitxaJugador)
            {
                fitxesIguals++;
            }
            else
            {
                fitxesIguals = 0;
            }
        }
    }

    if (fitxesIguals == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool quatreRatllaDiagonal2(int tauler[N_FILES][N_COLUMNES], int fila, int columna)
{
    int fitxaJugador = tauler[fila][columna];
    int fitxesIguals = 0;

    for (int i = N_FILES - 1; i >= 0; i++)
    {
        for (int j = N_COLUMNES - 1; i >= 0; i++)
        {
            if (tauler[i][j] == fitxaJugador)
            {
                fitxesIguals++;
            }
            else
            {
                fitxesIguals = 0;
            }
        }
    }

    if (fitxesIguals == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool quatreRatlla(int tauler[N_FILES][N_COLUMNES], int fila, int colummna)
{
}

int jugaQuatreRalla(int tauler[N_FILES][N_COLUMNES])
{
}