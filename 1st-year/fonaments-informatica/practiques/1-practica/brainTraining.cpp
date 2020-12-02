#include "Aleatori.h"
#include <iostream>
#include <time.h>

using namespace std;

// Definint les operacions
#define SUMA 0
#define RESTA 1
#define MULTIPLICACIO 2
#define DIVISIO 3

// Definint les dificultats
#define FACIL 1
#define MIG 2
#define DIFICIL 3

int main() {
  int dificultat, operacio, min = 0, max, puntuacio = 0, coeficient,
                            totalPuntuacio = 0, respostes = 0;
  float operand1, operand2, resOperacio, resUsuari;
  bool encert;

  srand((unsigned)time(NULL));

  cout << "1 - Facil" << endl;
  cout << "2 - Mig" << endl;
  cout << "3 - Dificil" << endl;
  cout << "Benvingut al Brain Training Game! Si us plau, selecciona una "
          "dificultat: ";
  cin >> dificultat;

  while (dificultat != FACIL && dificultat != MIG && dificultat != DIFICIL) {
    cout << "Seleccio incorrecta. Si us plau, selecciona una dificultat: ";
    cin >> dificultat;
  }

  switch (dificultat) {
  case FACIL:
    max = 9;
    coeficient = 8;
    break;
  case MIG:
    max = 99;
    coeficient = 10;
    break;
  case DIFICIL:
    max = 999;
    coeficient = 12;
    break;
  }

  do {
    if (dificultat != DIFICIL) {
      operacio = Aleatori(SUMA, MULTIPLICACIO);
    } else {
      operacio = Aleatori(SUMA, DIVISIO);
    }

    operand1 = Aleatori(min, max);
    operand2 = Aleatori(min, max);

    if (dificultat == DIFICIL) {
      while (operand2 == 0) {
        operand2 = Aleatori(min, max);
      }
    }

    if (operacio == SUMA) {
      cout << operand1 << " + " << operand2 << " = ";
      cin >> resUsuari;
      resOperacio = operand1 + operand2;
      encert = (resOperacio == resUsuari);
    } else if (operacio == RESTA) {
      cout << operand1 << " - " << operand2 << " = ";
      cin >> resUsuari;
      resOperacio = operand1 - operand2;
      encert = (resOperacio == resUsuari);
    } else if (operacio == MULTIPLICACIO) {
      cout << operand1 << " x " << operand2 << " = ";
      cin >> resUsuari;
      resOperacio = operand1 * operand2;
      encert = (resOperacio == resUsuari);
    } else if (operacio == DIVISIO) {
      cout << operand1 << " : " << operand2 << " = ";
      cin >> resUsuari;
      resOperacio = operand1 / operand2;
      resOperacio = (int)(resOperacio * 10);
      resOperacio = resOperacio / 10;
      encert = (resOperacio == resUsuari);
    }

    if ((operacio == SUMA || operacio == RESTA) && (encert == true)) {
      puntuacio += 1;
    } else if (operacio == MULTIPLICACIO && encert == true) {
      puntuacio += 2;
    } else if (operacio == DIVISIO && encert == true) {
      puntuacio += 3;
    }

    respostes += 1;

  } while (encert == true);

  respostes -= 1;
  totalPuntuacio = puntuacio * coeficient;

  cout << "Has aconseguit encadenar " << respostes
       << " respostes correctes amb una puntuacio final de: " << totalPuntuacio
       << " punts." << endl;

  return 0;
}
