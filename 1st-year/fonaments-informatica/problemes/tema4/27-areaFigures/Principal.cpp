#include <iostream>
#include "Funcions.cpp"
#include "Funcions.h"
#include "Menu.cpp"
#include "Menu.h"

using namespace std;

int main(){
  float costat, base, altura, area, resArea;
  int opcio;

  MenuSeleccio(); cin >> opcio;

  while (opcio >= 1 && opcio <= 3) {

    switch (opcio) {
      case 1:
	cout << "Introdueix les dades (costat): "; cin >> costat;

	resArea = AreaQuadrat(costat, area);

	if (resArea == 0) {
	  cout << "Area: " << area;
	} else {
	  cout << "Error: Dimensions incorrectes";
	}
	cout << endl;

	break;
      case 2:
	cout << "Introdueix les dades (base, altura): "; cin >> base >> altura;

	resArea = AreaRectangle(base, altura, area);

	if (resArea == 0) {
	  cout << "Area: " << area;
	} else {
	  cout << "Error: Dimensions incorrectes";
	}
	cout << endl;

	break;
      case 3:
	cout << "Introdueix les dades (base, altura): "; cin >> base >> altura;

	resArea = AreaTriangle(base, altura, area);

	if (resArea == 0) {
	  cout << "Area: " << area;
	} else {
	  cout << "Error: Dimensions incorrectes";
	}
	cout << endl;

	break;
    }

    MenuSeleccio(); cin >> opcio;
  }
    
  return 0;    
}
