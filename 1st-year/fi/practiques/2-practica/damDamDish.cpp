#include <iostream>
#include <math.h>
#include <time.h>
#include "Aleatori.cpp"
#include "Aleatori.h"

using namespace std;

#define ESCUT 1
#define CARREGA 2
#define TRET 3

#define EMPAT 0
#define WINA 1
#define WINB 2

void PresentacioJoc(){
  cout << "Dam dam dish, es un joc infantil on es simula un duel de pistolers. L'objectiu del joc es matar al contrincant";
  cout << "\nEl joc es per parelles hi ha tres moviments basics :";
  cout << "\n- Bracos en creu sobre el pit : escut";
  cout << "\n- Mans en forma de pistola apuntant al contrincant : tret";
  cout << "\n- Dits index i del mig tocant el lateral del front : carregar";
  cout << "\nEl joc es al millor de N partides on N es un nombre senar" << endl;
}

int Senar(int Num){
  bool senar;
  
  if (Num < 0) {
    senar = false;
  } else if (Num % 2 != 0) {
      senar = true;
    } else {
      senar = false;
    }

  return senar;
}

int LlegirSenar(){
  int Num;
  bool senar;

  cout << "Introdueix un nombre senar: "; cin >> Num;

  senar = Senar(Num);
  
  while (senar == false) {
    cout << "ERROR: El nombre introduit es parell" << endl;

    cout << "Introdueix un nombre senar: "; cin >> Num;

    senar = Senar(Num);
  }
  
  return Num;
}

void MenuDamDamDish(){
  cout << "Escull entre:";
  cout << "\n1. Escut: protegeix dels trets del rival";
  cout << "\n2. Carrega: afegeix una bala al carregador";
  cout << "\n3. Tret: dispara al teu rival" << endl;
}

int LlegirNombre(int min, int max){
  int Num;

  cout << "Entra valor entre " << min << " i " << max << ": "; cin >> Num;

  while (Num < min || Num > max) {
    cout << "Error: valor fora de l'interval";

    cout << "Entra valor entre " << min << " i " << max << ": "; cin >> Num;
  }

  return Num;
}

void MissatgeAI(int opcioAI){
  cout << "L'ordinador ha escollit aleatoriament ";

  if (opcioAI == 1) {
    cout << "ESCUT";
  } else if (opcioAI == 2) {
    cout << "CARREGA";
  } else if (opcioAI == 3) {
    cout << "TRET";
  }

  cout << endl;
}

int JocDamDamDish(int numPlayer1, int numPlayer2){
  int resultat;

  switch (numPlayer1) {
    case ESCUT:
      resultat = EMPAT;
      break;
    case CARREGA:
      if (numPlayer2 == TRET) {
	resultat = WINB;
      } else {
	resultat = EMPAT;
      }
      break;
    case TRET:
      if (numPlayer2 == CARREGA) {
	resultat = WINA;
      } else {
	resultat = EMPAT;
      }
      break;
  }

  return resultat;
}

int main(){
  int numPartidesJugades = 0, numPartides, resPartida, opcioPlayer1, opcioPlayer2, winsPlayer1 = 0, winsPlayer2 = 0, balesPlayer1 = 1, balesPlayer2 = 1;

  PresentacioJoc();

  numPartides = LlegirSenar();

  while (numPartidesJugades < numPartides) {
    if (balesPlayer2 != 0) {
      opcioPlayer2 = Aleatori(ESCUT, TRET);
    } else {
      opcioPlayer2 = Aleatori(ESCUT, CARREGA);
    }

    switch (opcioPlayer2) {
      case CARREGA:
	balesPlayer2++;
	break;
      case TRET:
	balesPlayer2--;
	break;
    }

    MenuDamDamDish();
    
    opcioPlayer1 = LlegirNombre(ESCUT, TRET);

    switch (opcioPlayer1) {
      case CARREGA:
	balesPlayer1++;
	break;
      case TRET:
	if (balesPlayer1 == 0) {
	  cout << "No tens bales. Escull entre 1 (Escut) o 2 (Carrega)" << endl;
      
	  opcioPlayer1 = LlegirNombre(ESCUT, CARREGA);

	  if (opcioPlayer1 == CARREGA) {
	    balesPlayer1++;
	  }
	} else {
	balesPlayer1--;
	}
	break;
    }

    resPartida = JocDamDamDish(opcioPlayer1, opcioPlayer2);

    MissatgeAI(opcioPlayer2);

    switch (resPartida) {
      case EMPAT:
	cout << "Empat. Seguim la partida" << endl;;
	break;
      case WINB:
	numPartidesJugades++;
	winsPlayer2++;
	
	cout << "Et guanya un ordinador!!!" << endl;
	cout << "MARCADOR - Ordinador " << winsPlayer2 << " Tu " << winsPlayer1 << endl;

	balesPlayer1 = 1;
	balesPlayer2 = 1;
	break;
      case WINA:
	numPartidesJugades++;
	winsPlayer1++;

	cout << "Guanyes Tu!!!" << endl;
	cout << "MARCADOR - Ordinador " << winsPlayer2 << " Tu " << winsPlayer1 << endl;

	balesPlayer1 = 1;
	balesPlayer2 = 1;
	break;
    }

    }

  if (winsPlayer2 > winsPlayer1) {
    cout << "El guanyador final es l'ordinador";
  } else {
    cout << "Tu ets el guanyador final";
  }
  cout << endl;

  return 0;
}
