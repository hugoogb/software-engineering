#include <iostream>

using namespace std;

#define SIZE 10

int main(){
  int arr[SIZE], valorMax, indexMax;

  for (int i = 0; i < SIZE; i++) {
    cout << "Introdueix el valor del vector a l'index " << i << ": "; cin >> arr[i];
  }

  for (int i = 0; i < SIZE; i++) {
    if (i == 0) {
      valorMax = arr[i];
      indexMax = i;
    } else if (arr[i] > valorMax) {
      valorMax = arr[i];
      indexMax = i;
    }
  }

  cout << "El maxim del vector es " << valorMax << " i es troba a l'index " << indexMax << endl;

  return 0;
}
