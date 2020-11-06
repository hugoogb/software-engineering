#include <iostream>
#include "funcionsStrings.cpp"
#include "funcionsStrings.h"

using namespace std;

#define LONG 50

int main()
{
    char cad[LONG];

    cin >> cad;

    Majuscules(cad);

    cout << cad;
}