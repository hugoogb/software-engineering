#include <iostream>
#include "vectors.h"

using namespace std;

// Inicialitzar un vector amb un valor introduit
void InicialitzarVector(int arr[], int valorArray, int sizeArray){
  for (int i = 0; i < sizeArray; i++) {
    arr[i] = valorArray;
  }
}

// Llegir valors introduits i guardarlos al vector
void LlegirVector(float arr[], int sizeArray){
  for (int i = 0; i < sizeArray; i++) {
    cin >> arr[i];
  }
}

// Escriure per pantalla un vector
void EscriureVector(int arr[], int sizeArray){
  for (int i = 0; i < sizeArray; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Sumar dos vectors
void SumarVectors(int arr1[], int arr2[], int suma[], int sizeArray){
  for (int i = 0; i < sizeArray; i++) {
    suma[i] = arr1[i] + arr2[i];
  }
}

// Calcular la mitjana dels elements d'un vector
float MitjanaVector(float arr[], int sizeArray){
  float mitjana = 0, suma = 0;
  
  for (int i = 0; i < sizeArray; i++) {
    suma += arr[i];
  }

  mitjana = float(suma / sizeArray);

  return mitjana;
}

// Trobar el maxim d'un vector
int MaximVector(float arr[], int sizeArray){
  int valorMax, posValorMax;

  valorMax = arr[0];
  posValorMax = 0;

  for (int i = 1; i < sizeArray; i++) {
    if (arr[i] > valorMax) {
      valorMax = arr[i];
      posValorMax = i;
    }
  }

  return posValorMax;
}

// Trobar el minim d'un vector
int MinimVector(float arr[], int sizeArray){
  int valorMin, posValorMin;

  valorMin = arr[0];
  posValorMin = 0;
  
  for (int i = 1; i < sizeArray; i++) {
    if (arr[i] < valorMin) {
      valorMin = arr[i];
      posValorMin = i;
    }
  }

  return posValorMin;
}

// Trobar el minim d'un vector sense tenir en compte el 0
int MinimVectorNoZero(int arr[], int sizeArray){
  int valorMin, posValorMin, i = 0;
  bool find = false;

  while (i < sizeArray && !find) {
    if (arr[i] != 0) {
      find = true;
      valorMin = arr[i];
      posValorMin = i;
    } else {
      i++;
    }
  }

  for (i = 0; i < sizeArray; i++) {
    if (arr[i] < valorMin && arr[i] != 0) {
      valorMin = arr[i];
      posValorMin = i;
    }
  }


  return posValorMin;
}
