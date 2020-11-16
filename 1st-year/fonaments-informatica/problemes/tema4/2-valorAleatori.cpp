#include <iostream>
#include <cstdlib>

using namespace std;

int aleatori(int min, int max){
  int numAleatori;

  numAleatori = (rand() % (max - min + 1)) + min;

  return numAleatori;
}

int main(){
  int numMax, numMin, numAleatori;
  
  cout << "Introdueix el numero minim: "; cin >> numMin;
  cout << "Introdueix el numero maxim: "; cin >> numMax;

  numAleatori = aleatori(numMin, numMax);

  cout << numAleatori << endl;

  return 0;
}
