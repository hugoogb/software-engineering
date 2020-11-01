#include <iostream>

using namespace std;

#define SIZE 10

int main(){
  float arr[SIZE], sumaArr = 0;
  int posMajor25 = 0, i = 0;
  bool find = false;

  for (i = 0; i < SIZE; i++) {
    cout << "Valor a la posicio " << i + 1 << ": "; cin >> arr[i];
  }

  i = 0;

  while (i < SIZE && !find) {
    sumaArr += arr[i];

    if (sumaArr > 25) {
      find = true;

      posMajor25 = i + 1;
    } else {
      i++;
    }
  }

  if (find) {
    cout << "A la posicio " << posMajor25 << " la suma acumulada es superior a 25";
  } else {
    cout << "La suma acumulada de l'array es inferior o igual a 25";
  }
  cout << endl;

  return 0;
}
