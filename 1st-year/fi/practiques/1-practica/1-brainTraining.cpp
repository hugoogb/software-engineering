#include <iostream>
#include <time.h>
#include "Aleatori.cpp"
#include "Aleatori.h"

using namespace std;

int main()
{
    int numAleatori, min = 0, max = 9;

    srand((unsigned)time(NULL));

    numAleatori = Aleatori(min, max);

    cout << numAleatori << endl;

    return 0;
}