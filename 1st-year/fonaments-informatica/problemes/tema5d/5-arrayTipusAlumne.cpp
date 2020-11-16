#include <iostream>

using namespace std;

#define SIZE 5

typedef struct {
  char Nom[10];
  char Cognom1[15];
  char Cognom2[15];
  float Nota;
} TipusAlumne;

void OmplirCamps(TipusAlumne alumne[SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    cout << "Introdueix el nom de l'alumne: ";
    cin >> alumne[i].Nom;
    cout << "Introdueix el cognom de l'alumne: ";
    cin >> alumne[i].Cognom1;
    cout << "Introdueix el segon cognom de l'alumne: ";
    cin >> alumne[i].Cognom2;
    cout << "Introdueix la nota de l'alumne: ";
    cin >> alumne[i].Nota;
    cout << endl;
  }
}

void MostrarCamps(TipusAlumne alumne[SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    cout << alumne[i].Cognom1 << " " << alumne[i].Cognom2 << ", "
         << alumne[i].Nom << " " << alumne[i].Nota << endl;
  }
}

int main() {
  TipusAlumne alumne[SIZE];

  OmplirCamps(alumne);

  MostrarCamps(alumne);

  return 0;
}
