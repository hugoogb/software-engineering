#include <iostream>

using namespace std;

int fibonacci(int n){
  int numAnterior = 1, numActual = 2, numAux;

  if (n > 3) {
    for (int i = 3; i < n; i++ ){
      numAux = numActual;
      numActual += numAnterior;
      numAnterior = numAux;
    }
  } else if (n == 0) {
    numActual = 0;
  } else if (n == 1 || n == 2) {
    numActual = 1;
  } 

  return numActual;
}

int main(){
  int n, resFibonacci;

  cout << "Quin terme de la serie Fibonacci vols calcular? "; cin >> n;

  while (n < 0) {
    cout << "Error: El nombre no pot ser negatiu" << endl;

    cout << "Quin terme de la serie Fibonacci vols calcular? "; cin >> n;
  }

  resFibonacci = fibonacci(n);

  cout << "El terme " << n << " de la serie de Fibonacci es " << resFibonacci << endl;

  return 0;
}
