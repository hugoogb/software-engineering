#include <iostream>
#include <ostream>

using namespace std;

int DivisioEnters(int dividend, int divisor, int &res){
  int divZero = 1;

  if (divisor != 0) {
    res = dividend/divisor;
  } else {
    divZero = 0;
  }

  return divZero;
}

int main(){
  int dividend, divisor, cocient = 0, res = 0;

  cout << "Introdueix el dividend: "; cin >> dividend;
  cout << "Introdueix el divisor: "; cin >> divisor;

  res = DivisioEnters(dividend, divisor, cocient);

  if (res) {
    cout << "El resultat de la divisio es: " << cocient;
  } else {
    cout << "Error: Divisio per zero";
  }
  cout << endl;

  return 0;
}
