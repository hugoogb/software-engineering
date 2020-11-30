#include <iostream>
#include <string.h>

using namespace std;

#define N_EQUIPS 5

typedef struct {
  char nom[20];
  char ciutat[25];
  int punts;
  float pressupost;
} TEquip;

void InicialitzarClassificacio(TEquip equip[]) {
  for (int i = 0; i < N_EQUIPS; i++) {
    strcpy(equip[i].nom, "-----");
    strcpy(equip[i].ciutat, "-----");
    equip[i].punts = 0;
    equip[i].pressupost = 0;
  }
}

void MostrarClassificacio(TEquip equip[]) {
  for (int i = 0; i < N_EQUIPS; i++) {
    cout << i << ".-" << equip[i].nom << " " << equip[i].punts << endl;
  }
}

void MostrarDadesEquip(TEquip equip[]) {
  for (int i = 0; i < N_EQUIPS; i++) {
    cout << equip[i].nom << " " << equip[i].ciutat << " " << equip[i].punts << " " << equip[i].pressupost << endl;
  }
}

void OmplirDadesEquip(TEquip equip[], int i) {
  cout << "Introdueix el nom de l'equip: ";
  cin >> equip[i].nom;
  cout << "Introdueix la ciutat de l'equp: ";
  cin >> equip[i].ciutat;
  cout << "Introdueix els punts de l'equip: ";
  cin >> equip[i].punts;
  cout << "Introdueix el pressupost de l'equip: ";
  cin >> equip[i].pressupost;
}

void DesplacarClassificacio(TEquip equip[], int pos) {
  if (equip[pos].punts != 0) {
    equip[pos + 1].punts = equip[pos].punts;
    strcpy(equip[pos + 1].nom, equip[pos].nom);
  }
}

int main() {
  TEquip equip[N_EQUIPS + 1];
  char option;
  int pos;

  InicialitzarClassificacio(equip);

  do {
    MostrarClassificacio(equip);
    cout << "Escull la posicio on inserir un equip: ";
    cin >> pos;

    DesplacarClassificacio(equip, pos);
    OmplirDadesEquip(equip, pos);

    MostrarClassificacio(equip);

    cout << "Vols continuar (S/-):" << endl;
    cin >> option;

    if (option != 'S'){
      return 0;
    }
  } while (option == 'S');

  return 0;
}
