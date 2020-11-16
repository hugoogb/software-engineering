#include <iostream>

using namespace std;

#define NUM_ALUMNES 20

int main (){
  float notes[NUM_ALUMNES];
  int numAprovats = 0;

  for (int i = 0; i < NUM_ALUMNES; i++) {
    cout << "Introdueix la nota de l'alumne " << i + 1 << ": "; cin >> notes[i];

    while (notes[i] < 0 || notes[i] > 10) {
      cout << "Error: nota no valida" << endl;
      
      cout << "Introdueix la nota de l'alumne " << i + 1 << ": "; cin >> notes[i];
    }
  }

  for (int i = 0; i < NUM_ALUMNES; i++) {
    if (notes[i] >= 5) {
      numAprovats++;
    }
  }

  cout << "\nEl nombre d'alumnes aprovats es " << numAprovats << endl;

  return 0;
} 
