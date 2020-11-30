#include <iostream>
#include <math.h>

using namespace std;

#define DIM 30

typedef struct
{
  float x;
  float y;
} TPunt;

typedef struct
{
  int costats;
  TPunt punt[DIM];
} TPoligon;

void LlegirVertexPoligon(TPoligon &poligon)
{
  cin >> poligon.costats;

  for (int i = 0; i < poligon.costats; i++) {
    cin >> poligon.punt[i].x;
    cin >> poligon.punt[i].y;
  }
}

float PerimetrePoligon(TPoligon poligon)
{
  float perimetre = 0;
  int i = 1;

  while (i < poligon.costats) {
    perimetre += sqrt(pow((poligon.punt[i].x - poligon.punt[i - 1].x), 2) + pow((poligon.punt[i].y - poligon.punt[i - 1].y), 2));
    i++;
  }
  perimetre += sqrt(pow(poligon.punt[0].x - poligon.punt[i - 1].x, 2) + pow(poligon.punt[0].y - poligon.punt[i - 1].y, 2));
  ;

  return perimetre;
}

int main()
{
  TPoligon poligon;
  TPunt coordenades;
  float solPerimetre;
  LlegirVertexPoligon(poligon);
  solPerimetre = PerimetrePoligon(poligon);
  cout << "Perimetre del poligon: " << solPerimetre;
}
