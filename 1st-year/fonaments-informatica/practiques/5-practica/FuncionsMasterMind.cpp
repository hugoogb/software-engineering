#include "FuncionsMasterMind.h"
#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

typedef struct
{
  int CodiJugador1[LongCodi];
  int CodiJugador2[LongCodi];
  int IntentsJugador1;
  int IntentsJugador2;
} RegistrePartida;

void Menu()
{
  cout << endl;
  cout << "MASTER MIND" << endl
       << endl;
  cout << "Escull una opcio: " << endl
       << endl;
  cout << "Opcio 1 - Ajuda" << endl;
  cout << "Opcio 2 - Jugar" << endl;
  cout << "Opcio 3 - Mostrar historic de partides" << endl;
  cout << "Opcio 4 - Sortir" << endl;
}

void Ajuda()
{
  cout << "L’objectiu del joc es trobar el codi ocult que l’altre jugador haurà triat amb menys intents que els que necessiti ell per trobar el vostre codi. " << endl;
  cout << "El codi es de longitud " << LongCodi << " nombres del 0 al 9" << endl;
  cout << "Despres de cada intent et dona la seguent informacio: " << endl;
  cout << "\tNombre de nombres encertats (en la posicio correcte)" << endl;
  cout << "\tNombre de nombres aproximats (correctes pero mal col.locats)" << endl;
  cout << "El nombre de intents son " << MaxIntents << endl;
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

void IntToArray(int Nombre, int Codi[], int Dim)
{
  int numAux = Nombre;
  int divisor = 1;

  for (int i = Dim - 1; i < Dim; i++)
  {
    Codi[i] = Nombre % 10;
    Nombre = Nombre / 10;
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
  return counterCorrecte;
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
  int w, sumRes = 0, res;

  for (int i = 0; i < 10; i++)
  {
    res = Minim(FrequenciaCodiMaster[i], FrequenciaCodiBreaker[i]);
    sumRes += res;
  }

  w = sumRes - Encerts;

  return w;
}

void ImprimirComparacions(int encerts, int aproximacions)
{
  cout << "Aquest codi te " << encerts << " Encerts i " << aproximacions << " Aproximacions" << endl;
}

int EsbrinarCodiMaster(int CodiMaster[])
{
  int CodiBreaker[LongCodi], IntCodiBreaker,
      FrequenciaCodiMaster[10], FrequenciaCodiBreaker[10],
      Encerts = 0, Aproximacions, Intents = 0;

  InicialitzarArray(FrequenciaCodiMaster, 10, 0);

  FrequenciaDigit(CodiMaster, LongCodi, FrequenciaCodiMaster);

  while (Encerts != 4 && Intents < MaxIntents)
  {
    IntCodiBreaker = LlegirNombre(0, pow(10, LongCodi) - 1);

    IntToArray(IntCodiBreaker, CodiBreaker, LongCodi);

    InicialitzarArray(FrequenciaCodiBreaker, 10, 0);

    FrequenciaDigit(CodiBreaker, LongCodi, FrequenciaCodiBreaker);

    Encerts = NombreEncerts(CodiMaster, CodiBreaker, LongCodi);

    Aproximacions = NombreAproximacions(FrequenciaCodiMaster,
                                        FrequenciaCodiBreaker, Encerts);

    ImprimirComparacions(Encerts, Aproximacions);

    Intents++;
  }

  if (Encerts == 4)
  {
    return Intents;
  }
  else
  {
    Intents = 0;
    return Intents;
  }
}

void NetejarPantalla() {
  // system("CLS");
}

int JocMultijugadorMasterMind(char NomJugador1[], char NomJugador2[]) {
  int IntCodiMaster, Intents = 0;
  int CodiMaster[LongCodi];
  RegistrePartida Resultat;

  cout << NomJugador1 << " si us plau, introdueix el nombre secret per a que " << NomJugador2 << " provi d'encertar-lo." << endl

  IntCodiMaster = LlegirNombre(0, pow(10, LongCodi) - 1);

  IntToArray(IntCodiMaster, CodiMaster, LongCodi);

  NetejarPantalla();

  cout << NomJugador2 << ", es hora d'esbrinar el codi de " << NomJugador1 << endl

  Intents = EsbrinarCodiMaster(CodiMaster);

  IntToArray(IntCodiMaster, Resultat.CodiJugador1, LongCodi);
  Resultat.IntentsJugador2 = Intents;

  cout << NomJugador2 << " si us plau, introdueix el nombre secret per a que " << NomJugador1 << " provi d'encertar-lo." << endl;

  IntCodiMaster = LlegirNombre(0, pow(10, LongCodi) - 1);

  IntToArray(IntCodiMaster, CodiMaster, LongCodi);

  NetejarPantalla();

  cout << NomJugador1 << ", es hora d'esbrinar el codi de " << NomJugador2 << endl

  Intents = EsbrinarCodiMaster(CodiMaster);

  IntToArray(IntCodiMaster, Resultat.CodiJugador2, LongCodi);
  Resultat.IntentsJugador1 = Intents;

  if (Resultat.IntentsJugador1 == 0 && Resultat.IntentsJugador2 == 0) {
    return -1;
  } else if (Resultat.IntentsJugador1 == Resultat.IntentsJugador2) {
    return 0;
  }
}

void EscriureVector(int Array[], int Dim) {
  for (int i = 0; i < Dim; i++) {
    cout << Array[i] << " ";
  }
  cout << endl;
}

void ImprimirResultatPartida(char NomJugador1[], char NomJugador2[], RegistrePartida Resultat, int NumPartida) {
}
