#include <iostream>

using namespace std;

#define SIZE 5

void LlegirVector(int arr[], int sizeArray){
  for (int i = 0; i < sizeArray; i++) {
    cout << "Valor de l'index " << i << ": "; cin >> arr[i];
  }
}

void EscriuVector(int arr[], int sizeArray){
  for (int i = 0; i < sizeArray; i++) {
    cout << arr[i] << " ";
  }
}

void SumaVectors(int arr1[], int arr2[], int suma[], int sizeArray){
  for (int i = 0; i < sizeArray; i++) {
    suma[i] = arr1[i] + arr2[i];
  }
}

int main(){
  int arr1[SIZE], arr2[SIZE], sumaArr[SIZE];

  LlegirVector(arr1, SIZE);
  
  cout << endl;

  LlegirVector(arr2, SIZE);

  cout << endl;

  SumaVectors(arr1, arr2, sumaArr, SIZE);

  cout << "Suma dels vectors: ";
  EscriuVector(sumaArr, SIZE);
  cout << endl;

  return 0;
}
