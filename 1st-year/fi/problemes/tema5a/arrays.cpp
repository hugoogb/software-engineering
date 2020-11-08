#include <iostream>
#include "funcionsArray.h"

using namespace std;

// Inicialitzar un vector amb un valor introduit
void InicialitzarVector(int arr[], int valorArray, int sizeArray)
{
  for (int i = 0; i < sizeArray; i++)
  {
    arr[i] = valorArray;
  }
}

// Llegir valors introduits i guardarlos al vector
void LlegirVector(int arr[], int sizeArray)
{
  for (int i = 0; i < sizeArray; i++)
  {
    cin >> arr[i];
  }
}

// Escriure per pantalla un vector
void EscriureVector(int arr[], int sizeArray)
{
  for (int i = 0; i < sizeArray; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Sumar dos vectors
void SumarVectors(int arr1[], int arr2[], int sumaArr[], int sizeArray)
{
  for (int i = 0; i < sizeArray; i++)
  {
    sumaArr[i] = arr1[i] + arr2[i];
  }
}

// Calcular la mitjana dels elements d'un vector
float MitjanaVector(int arr[], int sizeArray)
{
  float mitjana = 0, suma = 0;

  for (int i = 0; i < sizeArray; i++)
  {
    suma += arr[i];
  }

  mitjana = float(suma / sizeArray);

  return mitjana;
}

// Trobar el maxim d'un vector
int MaximVector(int arr[], int sizeArray)
{
  int valorMax, posValorMax;

  valorMax = arr[0];
  posValorMax = 0;

  for (int i = 1; i < sizeArray; i++)
  {
    if (arr[i] > valorMax)
    {
      valorMax = arr[i];
      posValorMax = i;
    }
  }

  return posValorMax;
}

// Trobar el minim d'un vector
int MinimVector(int arr[], int sizeArray)
{
  int valorMin, posValorMin;

  valorMin = arr[0];
  posValorMin = 0;

  for (int i = 1; i < sizeArray; i++)
  {
    if (arr[i] < valorMin)
    {
      valorMin = arr[i];
      posValorMin = i;
    }
  }

  return posValorMin;
}

// Trobar el minim d'un vector sense tenir en compte el 0
int MinimVectorNoZero(int arr[], int sizeArray)
{
  int valorMin, posValorMin, i = 0;
  bool find = false;

  while (i < sizeArray && !find)
  {
    if (arr[i] != 0)
    {
      find = true;
      valorMin = arr[i];
      posValorMin = i;
    }
    else
    {
      i++;
    }
  }

  for (i = 0; i < sizeArray; i++)
  {
    if (arr[i] < valorMin && arr[i] != 0)
    {
      valorMin = arr[i];
      posValorMin = i;
    }
  }

  return posValorMin;
}

// Comprovar si un vector esta ordenat de forma decreixent
int OrdenatDecreixent(int arr[], int sizeArray)
{
  int i = 0;
  bool desordenat = false;

  while (i < (sizeArray - 1) && !desordenat)
  {
    if (arr[i] > arr[i + 1])
    {
      i++;
    }
    else
    {
      desordenat = true;
    }
  }

  if (desordenat)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

// Buscar en quina posició de l’array li correspondria anar al valor entrat
int BuscarPosicio(int arr[], int numBuscarPos, int sizeArray)
{
  int i = 0;
  bool find = false;

  while (i < (sizeArray - 1) && !find)
  {
    if (i == 0 && numBuscarPos > arr[i])
    {
      find = true;
    }
    else if (numBuscarPos < arr[i] && numBuscarPos > arr[i + 1])
    {
      find = true;
      i += 1;
    }
    else
    {
      i++;
    }
  }

  if (find)
  {
    return i;
  }
  else
  {
    return -1;
  }
}

// Comprovar si 2 vectors son el mateix pero llegits en ordre contrari
int InversArray(int arr1[], int arr2[], int sizeArray)
{
  int i = 0, j = sizeArray - 1;
  bool find = false;

  while (i < sizeArray && !find)
  {
    if (arr1[i] != arr2[j])
    {
      find = true;
    }
    else
    {
      i++;
      j--;
    }
  }

  if (find)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

// Ordenar el vector de mes petit a mes gran
// Using bubble sort
void OrdenarVector(int arr[], int sizeArray)
{
  int i, j, temp;
  for (i = 0; i < sizeArray - 1; i++)
  {

    // Last i elements are already in place
    for (j = 0; j < sizeArray - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
