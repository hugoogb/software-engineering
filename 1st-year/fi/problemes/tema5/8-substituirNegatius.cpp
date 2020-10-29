#include <iostream>

using namespace std;

#define DIM 12

int main(){
  int array[DIM];

  for (int i = 0; i < DIM; i++) {
    cout << "Introdueix el valor de la posicio " << i + 1 << " del vector: "; cin >> array[i];
  }

  cout << "Entrada: ";

  for (int i = 0; i < DIM; i++) {
    cout << array[i] << " ";
  }

  cout << endl;

  for (int i = 0; i < DIM; i++) {
    if (array[i] < 0) {
      array[i] = 0;
    }
  }

  cout << "Sortida: ";

  for (int i = 0; i < DIM; i++) {
    cout << array[i] << " ";
  }

  return 0;
}
