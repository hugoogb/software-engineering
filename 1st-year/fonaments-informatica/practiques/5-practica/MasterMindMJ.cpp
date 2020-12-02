#include "FuncionsMasterMindMJ.h"

int main() {
  RegistrePartida RegistreHistoric[MAX_PARTIDES];
  RegistrePartida Resultat;
  char NomJugador1[MAX_LONG_NOM], NomJugador2[MAX_LONG_NOM];
  int opcio;
  int numPartides = 0;
  cout << "Benvinguts al joc MasterMind per a 2 jugadors.Si us plau, introduiu "
          "els vostres noms: ";
  cin >> NomJugador1 >> NomJugador2;

  do {
    Menu();
    cin >> opcio;
    switch (opcio) {
    case 1:
      Ajuda();
      break;
    case 2:
      numPartides = numPartides + 1;
      Resultat = JocMultijugadorMasterMind(NomJugador1, NomJugador2);
      ImprimirResultatPartida(NomJugador1, NomJugador2, Resultat, numPartides);

      RegistreHistoric[numPartides] = Resultat;
      break;
    case 3:
      ImprimirHistoric(NomJugador1, NomJugador2, RegistreHistoric, numPartides);
      break;
    case 4:
      break;
    }
  } while (opcio != 4);

  return 0;
}
