#include <iostream>

using namespace std;

#define SIZE 15

int main(){
  int nens[SIZE], sumaMesos = 0;
  float mitjana = 0;

  for (int i = 0; i < SIZE; i++) {
    cout << "Introdueix els mesos que tenia el/la nen/a " << i + 1 << " quan va caminar per primer cop: "; cin >> nens[i];

    while (nens[i] < 9 || nens[i] > 18) {
      cout << "Error: Valor no valid" << endl;
      cout << "Introdueix els mesos que tenia el/la nen/a " << i + 1 << " quan va caminar per primer cop: "; cin >> nens[i];
    }
  }

  for (int i = 0; i < SIZE; i++) {
    sumaMesos += nens[i];
  }

  mitjana = float(sumaMesos / 15.0);

  cout << "Mitjana d'edat en caminar: " << mitjana << " mesos" << endl; 

  return 0;
}
