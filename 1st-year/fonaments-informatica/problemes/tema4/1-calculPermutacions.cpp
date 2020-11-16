#include <iostream>

using namespace std;

int factorial(int num){
  int fact = 1;

  while (num > 0){
    fact = fact * num;
    num = num - 1;
  }

  return fact;
}

int main(){
  int jugadorsPlantilla, jugadorsSimultaneament, jugadorsBanqueta, resPermutacions;
  int fact_jugadorsPlantilla = 1, fact_jugadorsSimultaneament = 1, fact_jugadorsBanqueta = 1;
  
  cout << "Introduir el total de jugadors a la plantilla: "; cin >> jugadorsPlantilla;
  cout << "Introduir la quantitat de jugadors que poden jugar simultaneament: "; cin >> jugadorsSimultaneament;

  jugadorsBanqueta = jugadorsPlantilla - jugadorsSimultaneament;

  fact_jugadorsPlantilla = factorial(jugadorsPlantilla);
  fact_jugadorsSimultaneament = factorial(jugadorsSimultaneament);
  fact_jugadorsBanqueta = factorial(jugadorsBanqueta);

  resPermutacions = ((fact_jugadorsPlantilla) / (fact_jugadorsSimultaneament * fact_jugadorsBanqueta));

  cout << "El nombre d'equips que es poden formar es: " << resPermutacions << endl;

  return 0;
}
