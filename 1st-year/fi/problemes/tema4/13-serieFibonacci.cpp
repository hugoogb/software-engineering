#include <iostream>

using namespace std;

int fibonacci(int n){
  int numAnterior = 0, num = 1, numAux;

  for (int i = 0; i < n; i++ ){
    numAux = num;
    num += numAnterior;
    numAnterior = numAux;
  }

  return num;
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
