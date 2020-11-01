#include <iostream>

using namespace std;

#define SIZE 12

int main(){
  float temp[SIZE], tempMin, mesTempMin, tempMax, mesTempMax, sumaTempMitjana = 0, tempMitjanaAnual = 0;
  
  for (int i = 1; i <= SIZE; i++) {
    cout << "Introdueix la temperatura mitjana al mes " << i << ": "; cin >> temp[i];
  }

  cout << endl;

  for (int i = 1; i <= SIZE; i++) {
    if (i == 1) {
      tempMin = temp[i];
      mesTempMin = i;
      tempMax = temp[i];
      mesTempMax = i;
    } else if (temp[i] < tempMin) {
      tempMin = temp[i];
      mesTempMin = i;
    } else if (temp[i] > tempMax) {
      tempMax = temp[i];
      mesTempMax = i;
    }
  }

  cout << "Mes amb temperatura minima: " << mesTempMin << endl;
  cout << "Mes amb temperatura maxima: " << mesTempMax << endl;

  for (int i = 1; i <= SIZE; i++) {
    sumaTempMitjana += temp[i];
  }

  tempMitjanaAnual = float(sumaTempMitjana / SIZE);

  cout << "Temperatura mitjana: " << tempMitjanaAnual << endl;

  for (int i = 1; i <= SIZE; i++) {
    if (temp[i] < tempMitjanaAnual) {
      cout << "El mes " << i << " ha tingut temperatura inferior a la mitjana anual." << endl;
    } else if (temp[i] > tempMitjanaAnual) {
      cout << "El mes " << i << " ha tingut temperatura superior a la mitjana anual." << endl;
    } else if (temp[i] == tempMitjanaAnual) {
      cout << "El mes " << i << " ha tingut temperatura igual a la mitjana anual." << endl;
    }
  }

  return 0;
}
