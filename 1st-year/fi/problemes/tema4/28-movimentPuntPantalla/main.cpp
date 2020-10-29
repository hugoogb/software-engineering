#include <iostream>
#include "funcio.cpp"
#include "funcio.h"

using namespace std;

int main(){
  int x_min, x_max, y_min, y_max, dirMov, x, y;

  do {
    cout << "Introdueix els limits (x_min, x_max, y_min, y_max): "; cin >> x_min >> x_max >> y_min >> y_max;
  }while (x_min >= x_max || y_min >= y_max);

  do {
    cout << "Introdueix les coordenades d'un punt (x, y): "; cin >> x >> y;
  }while (x < x_min || x > x_max || y < y_min || y > y_max);

  cin >> dirMov;
  if (dirMov >= 1 && dirMov <= 4) {
    modificarPosPunt(x_min, x_max, y_min, y_max, dirMov, x, y);
    
    cout << "(" << x << "," << y << ")" << endl;
  }

  while (dirMov >= 1 && dirMov <= 4) {
    cin >> dirMov;

    if (dirMov >= 1 && dirMov <= 4) {
      modificarPosPunt(x_min, x_max, y_min, y_max, dirMov, x, y);
    
      cout << "(" << x << "," << y << ")" << endl;
    }
  }

  return 0;
}
