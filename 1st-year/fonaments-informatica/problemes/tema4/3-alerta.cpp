#include <iostream>
#include <unistd.h>

using namespace std;

void Alerta(int seg){
  if (seg != 0) {
    cout << "Alerta: Queden " << seg << " segons";
  } else {
    cout << "Alerta: S'ha acabat el temps";
  }
  cout << endl;
}

int main(){
  int segons;

  cout << "Introdueix un nombre enter: "; cin >> segons;

  do {
    Alerta(segons);
    sleep(1);
    segons--;
  }while (segons >= 0);

  return 0;
}
