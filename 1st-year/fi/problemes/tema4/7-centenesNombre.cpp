#include <iostream>

using namespace std;

int centenes(int num){
  int centenes, restes;

  centenes = num / 100;
  restes = (centenes / 10) * 10;
  centenes = centenes - restes;
  
  return centenes;
}

int main(){
  int centenesNum, num;

  cout << "Introdueix un nombre enter: "; cin >> num;

  centenesNum = centenes(num);

  cout << "Les centenes del nombre " << num << " son " << centenesNum << endl;

  return 0;
}
