#include "FuncionsMasterMind.cpp"
#include "FuncionsMasterMind.h"
#include <iostream>

using namespace std;

int main() {
  int opcio = 0, joc = 0;

  do {
    Menu();
    cin >> opcio;

    switch (opcio) {
    case 1:
      Ajuda();
      break;
    case 2:
      joc = JocMasterMind();

      ImprimirResultatsJoc(joc);
    }

  } while (opcio != 3);

  return 0;
}
