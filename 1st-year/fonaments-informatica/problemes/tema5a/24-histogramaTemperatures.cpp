#include <iostream>
#include "funcionsArray.cpp"
#include "funcionsArray.h"

using namespace std;

#define SIZE 14

int main()
{
  int temp[SIZE], counter[SIZE], tempMesRep, tempMenysRep, posTempMesRep, posTempMenysRep;

  LlegirVector(temp, SIZE);

  for (int i = 0; i < SIZE; i++)
  {
    counter[i] = 0;

    for (int j = 0; j < SIZE; j++)
    {
      if (temp[i] == temp[j])
      {
        counter[i]++;
      }
    }
  }

  posTempMesRep = MaximVector(counter, SIZE);
  posTempMenysRep = MinimVector(counter, SIZE);

  tempMesRep = temp[posTempMesRep];
  tempMenysRep = temp[posTempMenysRep];

  cout << "Temperatura mes repetida: " << tempMesRep << " - Temperatura menys repetida: " << tempMenysRep << endl;

  return 0;
}
