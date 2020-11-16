#include <iostream>

using namespace std;

#define SIZE 6

int main(){
  int arr1[SIZE], arr2[SIZE], i = 0;
  bool find = false;

  for (i = 0; i < SIZE; i++) {
    cout << "Introdueix el valor a l'index " << i << " de l'array 1: "; cin >> arr1[i];
  }

  cout << endl;

  for (i = 0; i < SIZE; i++) {
    cout << "Introdueix el valor a l'index " << i << " de l'array 2: "; cin >> arr2[i];
  }

  i = 0;

  while (i < SIZE && !find) {
    if (arr1[i] != arr2[i]) {
      find = true;
    }
    else {
      i++;
    }
  }

  if (find) {
    cout << "DIFERENTS";
  } else {
    cout << "IGUALS";
  }
  cout << endl;

  return 0;
}
