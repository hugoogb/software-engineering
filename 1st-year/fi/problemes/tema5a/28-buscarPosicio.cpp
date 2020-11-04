#include <iostream>
#include "funcionsArray.cpp"
#include "funcionsArray.h"

using namespace std;

#define SIZE 5

int main()
{
  int arr[SIZE], OrdDecreixent, BuscarPos, numBuscarPos;

  LlegirVector(arr, SIZE);

  OrdDecreixent = OrdenatDecreixent(arr, SIZE);

  switch (OrdDecreixent)
  {
  case 0:
    cout << "El vector no esta correctament ordenat" << endl;
    break;
  case 1:
    cout << "Introdueix un valor: ";
    cin >> numBuscarPos;

    BuscarPos = BuscarPosicio(arr, numBuscarPos, SIZE);

    if (BuscarPos == -1)
    {
      cout << "Tots els valors del vector son mes grans que " << numBuscarPos << endl;
    }
    else
    {
      cout << "El valor ha d'anar a la posicio " << BuscarPos << endl;
    }
    break;
  }

  return 0;
}
