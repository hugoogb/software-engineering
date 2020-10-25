#include <iostream>
#include <math.h>

using namespace std;

int divisio(int dividend, int divisor, int &quocient, int &residu){
  int sumaQuocient = 0, suma = 0, resDivisio = 0;

  quocient = 0;

  if (divisor == 0) {
    resDivisio = 1;
  } else if (divisor > 0) {
      while (suma <= dividend) {
	suma += divisor;
	if (suma <= dividend) {
	  quocient ++;
	  sumaQuocient = suma;
	}
      } 
  } else {
    divisor = abs(divisor);
    while (suma <= dividend) {
      suma += divisor;
      if (suma <= dividend) {
	quocient --;
	sumaQuocient = suma;
      }
    }
  }
  residu = dividend - sumaQuocient;

  return resDivisio;
}

int main(){
  int dividend, divisor, quocient, residu, res;

  cout << "Introdueix el dividend: "; cin >> dividend;
  cout << "Introdueix el divisor: "; cin >> divisor;

  res = divisio(dividend, divisor, quocient, residu);

  if (res == 1) {
    cout << "Error: Divisio per zero";
  } else {
    cout << "Resultat - Quocient: " << quocient << " i Residu: " << residu;
  }
  cout << endl;

  return 0;
}
