#include <iostream>

using namespace std;

#define SIZE 10

int main(){
  int arr[SIZE], i = 0;
  bool find = false;

  for (i = 0; i < SIZE; i++) {
    cout << "Introdueix el valor a l'index " << i << ": "; cin >> arr[i];
  }

  i = 0;

  while (i < (SIZE-1) && !find) {
    if (arr[i] > arr[i +1]) {
      find = true;
    } else {
      i++;
    }
  }

  cout << i << endl;

  return 0;
}
