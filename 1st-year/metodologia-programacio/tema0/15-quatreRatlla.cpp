#include <iostream>

using namespace std;

const int N_FILES = 6;
const int N_COLUMNES = 7;

int tauler[N_FILES][N_COLUMNES];

int posaFitxa(int tauler[N_FILES][N_COLUMNES], int columna, int jugador)
{
    int fila = N_FILES - 1;
    bool posarFitxa = false;

    while (fila >= 0 && !posarFitxa)
    {
        if (tauler[fila][columna] == 0)
        {
            posarFitxa = true;

            if (jugador == 1)
            {
                tauler[fila][columna] = 1;
            }
            else if (jugador == 2)
            {
                tauler[fila][columna] = 2;
            }
        }
        else
        {
            fila--;
        }
    }

    if (posarFitxa)
    {
        return fila;
    }
    else
    {
        return -1;
    }
}

bool quatreRatllaHoritzontal(int tauler[N_FILES][N_COLUMNES], int fila, int columna)
{
    int fitxaJugador = tauler[fila][columna], fitxesIguals = 0, posicio, j = 0;
    bool quatreRatlla;

    for (int i = 0; i < N_COLUMNES; i++)
    {
        if (tauler[fila][i] == fitxaJugador)
        {
            quatreRatlla = true;
            posicio = i;

            while ((fitxesIguals < 4) && quatreRatlla)
            {
                if (tauler[fila][posicio + j] != fitxaJugador)
                {
                    quatreRatlla = false;
                    fitxesIguals = 0;
                }
                else
                {
                    fitxesIguals++;
                    j++;
                }
            }
        }
    }

    return quatreRatlla;
}

bool quatreRatllaVertical(int tauler[N_FILES][N_COLUMNES], int fila, int columna)
{
    int fitxaJugador = tauler[fila][columna], fitxesIguals = 0, posicio, j = 0;
    bool quatreRatlla;

    for (int i = 0; i < N_FILES; i++)
    {
        if (tauler[i][columna] == fitxaJugador)
        {
            quatreRatlla = true;
            posicio = i;

            while ((fitxesIguals < 4) && quatreRatlla)
            {
                if (tauler[posicio + j][columna] != fitxaJugador)
                {
                    quatreRatlla = false;
                    fitxesIguals = 0;
                }
                else
                {
                    fitxesIguals++;
                    j++;
                }
            }
        }
    }

    return quatreRatlla;
}

bool quatreRatllaDiagonalEsquerra(int tauler[N_FILES][N_COLUMNES], int fila, int columna)
{
    int fitxaJugador = tauler[fila][columna], fitxesIguals = 0, posicioX, posicioY, k = 0;
    bool quatreRatlla;

    while (columna > 0 && fila > 0)
    {
        columna--;
        fila--;
    }

    for (int i = fila; i < N_FILES; i++)
    {
        for (int j = columna; j < N_COLUMNES; j++)
        {
            if (tauler[i][j] == fitxaJugador)
            {
                quatreRatlla = true;
                posicioX = i;
                posicioY = j;

                while ((fitxesIguals < 4) && quatreRatlla)
                {
                    if (tauler[posicioX + k][posicioY + k] != fitxaJugador)
                    {
                        quatreRatlla = false;
                        fitxesIguals = 0;
                    }
                    else
                    {
                        fitxesIguals++;
                        k++;
                    }
                }
            }
        }
    }

    return quatreRatlla;
}

bool quatreRatllaDiagonalDreta(int tauler[N_FILES][N_COLUMNES], int fila, int columna)
{
    int fitxaJugador = tauler[fila][columna], fitxesIguals = 0, posicioX, posicioY, k = 0;
    bool quatreRatlla;

    while (columna < N_COLUMNES && fila > 0)
    {
        columna++;
        fila--;
    }

    for (int i = fila; i < N_FILES; i++)
    {
        for (int j = columna; j > 0; j--)
        {
            if (tauler[i][j] == fitxaJugador)
            {
                quatreRatlla = true;
                posicioX = i;
                posicioY = j;

                while ((fitxesIguals < 4) && quatreRatlla)
                {
                    if (tauler[posicioX + k][posicioY - k] != fitxaJugador)
                    {
                        quatreRatlla = false;
                        fitxesIguals = 0;
                    }
                    else
                    {
                        fitxesIguals++;
                        k++;
                    }
                }
            }
        }
    }

    return quatreRatlla;
}

bool quatreRatlla(int tauler[N_FILES][N_COLUMNES], int fila, int columna)
{
    bool ratllaHoritzontal, ratllaVertical, ratllaDiagonalEsquerra, ratllaDiagonalDreta;

    ratllaHoritzontal = quatreRatllaHoritzontal(tauler, fila, columna);
    ratllaVertical = quatreRatllaVertical(tauler, fila, columna);
    ratllaDiagonalEsquerra = quatreRatllaDiagonalEsquerra(tauler, fila, columna);
    ratllaDiagonalDreta = quatreRatllaDiagonalDreta(tauler, fila, columna);

    if (ratllaHoritzontal || ratllaVertical || ratllaDiagonalEsquerra || ratllaDiagonalDreta)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool taulerEstaComplet(int tauler[N_FILES][N_COLUMNES])
{
    int i = 0;
    bool found = false;

    while (i < N_COLUMNES && !found)
    {
        if (tauler[0][i] == 0)
        {
            found = true;
        }
        else
        {
            i++;
        }
    }

    if (found)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int jugaQuatreRatlla(int tauler[N_FILES][N_COLUMNES])
{
    int columna, fila, player, winner;
    bool isWinner, fitxaPosada, taulerComplet;

    do
    {
        do
        {
            player = 1;
            cout << "PLAYER " << player << " -> Introdueix a quina columna vols posar la fitxa: ";
            cin >> columna;

            fila = posaFitxa(tauler, columna, player);

            if (fila == -1)
            {
                fitxaPosada = false;
                taulerComplet = taulerEstaComplet(tauler);
            }
            else
            {
                fitxaPosada = true;
            }
        } while (!fitxaPosada && !taulerComplet);

        if (!taulerComplet)
        {
            isWinner = quatreRatlla(tauler, fila, columna);

            if (isWinner)
            {
                winner = player;
            }
        }

        if (!isWinner && !taulerComplet)
        {
            do
            {
                player = 2;
                cout << "PLAYER " << player << " -> Introdueix a quina columna vols posar la fitxa: ";
                cin >> columna;

                fila = posaFitxa(tauler, columna, player);

                if (fila == -1)
                {
                    fitxaPosada = false;
                    taulerComplet = taulerEstaComplet(tauler);
                }
                else
                {
                    fitxaPosada = true;
                }
            } while (!fitxaPosada && !taulerComplet);

            if (!taulerComplet)
            {
                isWinner = quatreRatlla(tauler, fila, columna);

                if (isWinner)
                {
                    winner = player;
                }
            }
        }
    } while (!isWinner && !taulerComplet);

    if (taulerComplet)
    {
        return -1;
    }
    else
    {
        return winner;
    }
}