#include <iostream>

using namespace std;

#define DIM 10

int main(){
  int v1[DIM] = {0,1,2,3,4,5,6,7,8,9}, v2[DIM], v3[DIM], v4[DIM], valor;

  for (int i = 0; i < DIM; i++) {
    v2[i] = i * 2;
  }

  for (int i = 0; i < DIM; i++) {
    cout << "Introdueix un valor per a l'index " << i << ": "; cin >> valor;

    v3[i] = valor;
  }

  for (int i = 0; i < DIM; i++) {
    v4[i] = v1[i] + v2[i] + v3[i];
  }

  cout << "Vector 1: ";

  for (int i = 0; i < DIM; i++) {
    cout << v1[i] << " ";
  }

  cout << endl;

  cout << "Vector 2: ";

  for (int i = 0; i < DIM; i++) {
    cout << v2[i] << " ";
  }

  cout << endl;

  cout << "Vector 3: ";

  for (int i = 0; i < DIM; i++) {
    cout << v3[i] << " ";
  }

  cout << endl;

  cout << "Vector 4: ";

  for (int i = 0; i < DIM; i++) {
    cout << v4[i] << " ";
  }

  cout << endl;

  return 0;
}
