#include <iostream>

using namespace std;

#define DIM 10

int main(){
  int array[DIM], valor;

  cout << "Introdueix un nombre enter: "; cin >> valor;

  for (int i = 0; i < DIM; i++) {
    array[i] = valor;
  }

  for (int i = 0; i < DIM; i++) {
    cout << array[i] << endl;
  }

  return 0;
}
