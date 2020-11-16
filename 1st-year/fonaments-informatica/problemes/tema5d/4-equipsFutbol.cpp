#include <iostream>

using namespace std;

typedef struct {
  char nom[20];
  char ciutat[25];
  int punts;
  float pressupost;
} TEquip;

void OmplirDadesEquip(TEquip &equip) {
  cout << "Introdueix el nom de l'equip: ";
  cin >> equip.nom;
  cout << "Introdueix la ciutat de l'equp: ";
  cin >> equip.ciutat;
  cout << "Introdueix els punts de l'equip: ";
  cin >> equip.punts;
  cout << "Introdueix el pressupost de l'equip: ";
  cin >> equip.pressupost;
  cout << endl;
}

void MostrarDadesEquip(TEquip &equip) {
  cout << equip.nom << " " << equip.ciutat << " " << equip.punts << " "
       << equip.pressupost << endl;
}

int CompararEquips(TEquip equip1, TEquip equip2) {
  if (equip1.punts == equip2.punts) {
    return 0;
  } else if (equip1.punts > equip2.punts) {
    return 1;
  } else {
    return 2;
  }
}

int main() {
  TEquip equip1;
  TEquip equip2;
  int comparacioPunts;

  OmplirDadesEquip(equip1);
  OmplirDadesEquip(equip2);

  MostrarDadesEquip(equip1);
  MostrarDadesEquip(equip2);

  comparacioPunts = CompararEquips(equip1, equip2);

  switch (comparacioPunts) {
  case 0:
    cout << equip1.nom << " te els mateixos punts a la lliga que "
         << equip2.nom;
    break;
  case 1:
    cout << equip1.nom << " te mes punts a la lliga que " << equip2.nom;
    break;
  case 2:
    cout << equip1.nom << " te menys punts a la lliga que " << equip2.nom;
    break;
  }
  cout << endl;

  return 0;
}
