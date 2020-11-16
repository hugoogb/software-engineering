#include <iostream>

using namespace std;

float potencia(int base, int exponent){
  float resPotencia = 0, potencia = 1;
  int n = exponent;

  if (exponent == 0){
    resPotencia = 1;
  } else if (exponent < 0){
      while (n <= -1) {
	potencia = potencia * base;
	n = n + 1;
      }
      resPotencia = 1.00 / potencia;
  } else {
      while (n >= 1) {
	potencia = potencia * base;
	n = n - 1;
      }
      resPotencia = potencia;
  }

  return resPotencia;
}

int main(){
  int base, exponent;
  float resPotencia = 0;

  cout << "Introdueix la base de la potencia: "; cin >> base;
  cout << "Introdueix l'exponent de la potencia: "; cin >> exponent;

  resPotencia = potencia(base, exponent);

  cout << "El resultat d'elevar " << base << " a la potencia " << exponent << " es " << resPotencia << endl;

  return 0;
}
