#include <iostream>

using namespace std;

typedef struct {
  int x;
  int y;
} TPunt;

typedef struct {
  int costats;
  TPunt vertexs[];
} TPoligon;

void LlegirVertexsPoligon() {
  int numVertexs;

  cout << "Introdueix el numero de vertexs: "; cin >> numVertexs;
}
