#include <iostream>
#include "funcionsStrings.cpp"
#include "funcionsStrings.h"

using namespace std;

#define LONG 50

int main()
{
    char cad[LONG], res;

    cin >> cad;

    res = Palindrom(cad);

    cout << res << endl;

    return 0;
}