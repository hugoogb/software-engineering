#include <iostream>

using namespace std;

struct TEquip {
  char nom[10];
  char ciutat[15];
  int punts;
  float pressupost;
};

void OmplirDadesEquip(struct TEquip equip) {
  cout << "Introdueix el nom de l'equip: ";
  cin >> equip.nom;
  cout << "Introdueix la ciutat de l'equp: ";
  cin >> equip.ciutat;
  cout << "Introdueix els punts de l'equip: ";
  cin >> equip.punts;
  cout << "Introdueix el pressupost de l'equip: ";
  cin >> equip.pressupost;
}

void MostrarDadesEquip(struct TEquip equip) {}

int main() {
  struct TEquip equip1;
  struct TEquip equip2;
}
