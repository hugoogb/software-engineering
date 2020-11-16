#include <iostream>

using namespace std;

#define SIZE 10

int main(){
  int arr[SIZE], i = 0;
  bool find = false;
  
  while (i < SIZE && !find) {
    cout << "Introdueix el valor a l'index " << i << " de l'array: "; cin >> arr[i];

    if (arr[i] == 0) {
      find = true;
    } else {
      i++;
    }
  }

  if (find) {
    cout << "Hem introduit un zero";
  } else {
    cout << "Hem arribat al final de l'array";
  }
  cout << endl;

  return 0;
}
