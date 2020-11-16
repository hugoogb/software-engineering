#include <iostream>
#include "funcionsArray.cpp"
#include "funcionsArray.h"

using namespace std;

#define SIZE 8

int main()
{
    int arr[SIZE];

    LlegirVector(arr, SIZE);

    OrdenarVector(arr, SIZE);

    cout << "Array ordenat: ";
    EscriureVector(arr, SIZE);

    return 0;
}
