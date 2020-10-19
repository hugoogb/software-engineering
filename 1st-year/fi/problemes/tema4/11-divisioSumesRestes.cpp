#include <iostream>
#include <math.h>

using namespace std;

int divisio(int dividend, int divisor){
  int quocient, sumaQuocient = 0;

  if (divisor > 0) {
    quocient = -1;
    while (sumaQuocient <= dividend) {
      sumaQuocient = sumaQuocient + divisor;
      quocient += 1;
    } 
  } else {
    quocient = 1;
    divisor = abs(divisor);
    while (sumaQuocient <= dividend) {
      sumaQuocient = sumaQuocient + divisor;
      quocient -= 1;
    }
  }

  return quocient;
}

int main(){
  int dividend, divisor, resDivisio;

  cout << "Introdueix el dividend: "; cin >> dividend;
  cout << "Introdueix el divisor: "; cin >> divisor;

  if (divisor == 0) {
    cout << "Error: Divisio per zero" << endl;
  } else {
    resDivisio = divisio(dividend, divisor);
    
    cout << dividend << " : " << divisor << " = " << resDivisio << endl;
  }

  return 0;
}
