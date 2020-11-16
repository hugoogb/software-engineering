#include <iostream>

using namespace std;

#define SIZE 9

int main(){
  int arr[SIZE], i = 0;
  bool find = false;

  for (i = 0; i < SIZE; i++) {
    cout << "Introdueix el valor a l'index " << i << ": "; cin >> arr[i];
  }

  i = 0;

  while (i < SIZE && !find) {
    if ((arr[i] % 2) != 0) {
      find = true;
    } else {
      i++;
    }
  }

  if (find) {
    cout << "NO TOTS SON SENARS";
  } else {
    cout << "TOTS SON SENARS";
  }
  cout << endl;

  return 0;
}
