#include <iostream>
#include "vectors.cpp"
#include "vectors.h"

using namespace std;

#define SIZE 12

int main(){
  float temp[SIZE], tempMin, mesTempMin, tempMax, mesTempMax, tempMitjanaAnual = 0;

  LlegirVector(temp, SIZE);
  
  cout << endl;

  mesTempMin = MinimVector(temp, SIZE) + 1;
  mesTempMax = MaximVector(temp, SIZE) + 1;

  cout << "Mes amb temperatura minima: " << mesTempMin << endl;
  cout << "Mes amb temperatura maxima: " << mesTempMax << endl;

  tempMitjanaAnual = MitjanaVector(temp, SIZE);

  cout << "Temperatura mitjana: " << tempMitjanaAnual << endl;

  for (int i = 0; i < SIZE; i++) {
    if (temp[i] < tempMitjanaAnual) {
      cout << "El mes " << i + 1 << " ha tingut temperatura inferior a la mitjana anual." << endl;
    } else if (temp[i] > tempMitjanaAnual) {
      cout << "El mes " << i + 1 << " ha tingut temperatura superior a la mitjana anual." << endl;
    } else if (temp[i] == tempMitjanaAnual) {
      cout << "El mes " << i + 1 << " ha tingut temperatura igual a la mitjana anual." << endl;
    }
  }

  return 0;
}

