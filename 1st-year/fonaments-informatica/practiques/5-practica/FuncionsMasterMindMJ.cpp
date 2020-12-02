#include "FuncionsMasterMindMJ.h"
// #include "NetejarPantalla.h"

using namespace std;

void Menu() {
  cout << endl;
  cout << "MASTER MIND" << endl << endl;
  cout << "Escull una opcio: " << endl << endl;
  cout << "Opcio 1 - Ajuda" << endl;
  cout << "Opcio 2 - Jugar" << endl;
  cout << "Opcio 3 - Mostrar historic de partides" << endl;
  cout << "Opcio 4 - Sortir" << endl;
}

void Ajuda() {
  cout << "L'objectiu del joc es trobar el codi ocult que l'altre jugador "
          "haurà triat amb menys intents que els que necessiti ell per trobar e"
          "l vostre codi. "
       << endl;
  cout << "El codi es de " << LongCodi << " digits del 0 al 9" << endl;
  cout << "Despres de cada intent et dona la seguent informacio: " << endl;
  cout << "\tNombre de nombres encertats (en la posicio correcte)" << endl;
  cout << "\tNombre de nombres aproximats (correctes pero mal col.locats)"
       << endl;
  cout << "El nombre maxim d'intents son " << MaxIntents << endl;
}

int LlegirNombre(int min, int max) {
  int Num;

  cout << "Entra valor entre " << min << " i " << max << ": ";
  cin >> Num;

  while (Num < min || Num > max) {
    cout << "Error: valor fora de l'interval" << endl;

    cout << "Entra valor entre " << min << " i " << max << ": ";
    cin >> Num;
  }

  return Num;
}

void IntToArray(int Nombre, int Codi[], int Dim) {
  for (int i = Dim - 1; i >= 0; i--) {
    Codi[i] = Nombre % 10;
    Nombre = Nombre / 10;
  }
}

void InicialitzarArray(int Array[], int Dim, int Valor) {
  for (int i = 0; i < Dim; i++) {
    Array[i] = Valor;
  }
}
void FrequenciaDigit(int Codi[], int Dim, int Frequencia[]) {
  for (int i = 0; i < Dim; i++) {
    for (int j = 0; j < 10; j++) {
      if (Codi[i] == j) {
        Frequencia[j]++;
      }
    }
  }
}

int NombreEncerts(int CodiMaster[], int CodiBreaker[], int Dim) {
  int counterCorrecte = 0;

  for (int i = 0; i < Dim; i++) {
    if (CodiMaster[i] == CodiBreaker[i]) {
      counterCorrecte++;
    }
  }
  return counterCorrecte;
}
int Minim(int Valor1, int Valor2) {
  if (Valor1 < Valor2) {
    return Valor1;
  } else if (Valor2 < Valor1) {
    return Valor2;
  } else {
    return Valor1;
  }
}

int NombreAproximacions(int FrequenciaCodiMaster[], int FrequenciaCodiBreaker[],
                        int Encerts) {
  int w, sumRes = 0, res;

  for (int i = 0; i < 10; i++) {
    res = Minim(FrequenciaCodiMaster[i], FrequenciaCodiBreaker[i]);
    sumRes += res;
  }

  w = sumRes - Encerts;

  return w;
}

void ImprimirComparacions(int encerts, int aproximacions) {
  cout << "Aquest codi te " << encerts << " Encerts i " << aproximacions
       << " Aproximacions" << endl;
}

int EsbrinarCodiMaster(int CodiMaster[]) {
  int CodiBreaker[LongCodi], IntCodiBreaker, FrequenciaCodiMaster[Digits],
      FrequenciaCodiBreaker[Digits], Encerts = 0, Aproximacions, Intents = 0;
  InicialitzarArray(FrequenciaCodiMaster, Digits, 0);
  FrequenciaDigit(CodiMaster, LongCodi, FrequenciaCodiMaster);

  while (Encerts != 4 && Intents < MaxIntents) {
    IntCodiBreaker = LlegirNombre(0, pow(10, LongCodi) - 1);

    IntToArray(IntCodiBreaker, CodiBreaker, LongCodi);

    InicialitzarArray(FrequenciaCodiBreaker, Digits, 0);

    FrequenciaDigit(CodiBreaker, LongCodi, FrequenciaCodiBreaker);

    Encerts = NombreEncerts(CodiMaster, CodiBreaker, LongCodi);

    Aproximacions = NombreAproximacions(FrequenciaCodiMaster,
                                        FrequenciaCodiBreaker, Encerts);

    ImprimirComparacions(Encerts, Aproximacions);

    Intents++;
  }

  if (Encerts == 4) {
    return Intents;
  } else {
    return 0;
  }
}

/*void NetejarPantalla() {
        system("CLS");
}*/

RegistrePartida JocMultijugadorMasterMind(char NomJugador1[],
                                          char NomJugador2[]) {
  int IntCodiMaster, CodiMaster[LongCodi], Intents = 0;
  RegistrePartida Resultat;

  cout << NomJugador1 << " si us plau, introdueix el nombre secret per a que "
       << NomJugador2 << " provi d'encertar-lo." << endl;
  IntCodiMaster = LlegirNombre(0, pow(10, LongCodi) - 1);
  IntToArray(IntCodiMaster, CodiMaster, LongCodi);
  // NetejarPantalla();

  cout << NomJugador2 << ", es hora d'esbrinar el codi de " << NomJugador1
       << endl;
  Intents = EsbrinarCodiMaster(CodiMaster);
  IntToArray(IntCodiMaster, Resultat.CodiJugador1, LongCodi);
  Resultat.IntentsJugador2 = Intents;

  cout << NomJugador2 << " si us plau, introdueix el nombre secret per a que "
       << NomJugador1 << " provi d'encertar-lo." << endl;
  IntCodiMaster = LlegirNombre(0, pow(10, LongCodi) - 1);
  IntToArray(IntCodiMaster, CodiMaster, LongCodi);
  // NetejarPantalla();

  cout << NomJugador1 << ", es hora d'esbrinar el codi de " << NomJugador2
       << endl;
  Intents = EsbrinarCodiMaster(CodiMaster);
  IntToArray(IntCodiMaster, Resultat.CodiJugador2, LongCodi);
  Resultat.IntentsJugador1 = Intents;

  return Resultat;
}

void EscriureVector(int Array[], int Dim) {
  int i;
  for (i = 0; i < Dim; i++) {
    cout << Array[i];
  }
}

void ImprimirResultatPartida(char NomJugador1[], char NomJugador2[],
                             RegistrePartida Resultat, int NumPartida) {
  if (Resultat.IntentsJugador1 == 0 && Resultat.IntentsJugador2 == 0) {
    cout << "Ronda " << NumPartida
         << ": Empat, cap dels jugadors ha encertat el codi secret de l'altre."
         << endl;
  } else if (Resultat.IntentsJugador1 == Resultat.IntentsJugador2) {
    cout << "Ronda " << NumPartida
         << ": Empat, ambdos jugadors han encertat l'altre codi amb "
         << Resultat.IntentsJugador1 << " intents." << endl;
  } else if ((Resultat.IntentsJugador2 < Resultat.IntentsJugador1 &&
              Resultat.IntentsJugador2 != 0) ||
             (Resultat.IntentsJugador2 != 0 && Resultat.IntentsJugador1 == 0)) {
    cout << "Ronda " << NumPartida << ": Guanya " << NomJugador2
         << " encertant el codi ";
    EscriureVector(Resultat.CodiJugador1, LongCodi);
    cout << " amb " << Resultat.IntentsJugador2 << " intents." << endl;
  } else if ((Resultat.IntentsJugador1 < Resultat.IntentsJugador2 &&
              Resultat.IntentsJugador1 != 0) ||
             (Resultat.IntentsJugador1 != 0 && Resultat.IntentsJugador2 == 0)) {
    cout << "Ronda " << NumPartida << ": Guanya " << NomJugador1
         << " encertant el codi ";
    EscriureVector(Resultat.CodiJugador2, LongCodi);
    cout << " amb " << Resultat.IntentsJugador1 << " intents." << endl;
  }
}

void ImprimirHistoric(char NomJugador1[], char NomJugador2[],
                      RegistrePartida RegistreHistoric[], int PartidesJugades) {
  if (PartidesJugades == 0) {
    cout
        << "Encara no s'ha jugat cap partida i no hi ha cap historic a mostrar."
        << endl;
  } else {
    for (int i = 1; i <= PartidesJugades; i++) {
      ImprimirResultatPartida(NomJugador1, NomJugador2, RegistreHistoric[i], i);
    }
  }
}
