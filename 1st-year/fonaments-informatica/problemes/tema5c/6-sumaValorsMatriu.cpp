#include <iostream>
#include "matrius.cpp"
#include "matrius.h"

using namespace std;

#define N_FIL 2
#define N_COL 3

int main()
{
    float matriu[N_FIL][N_COL], sumaValorsMatriu;

    LlegirMatriu(matriu, N_FIL, N_COL);

    sumaValorsMatriu = SumaValorsMatriu(matriu, N_FIL, N_COL);

    cout << "Suma valors matriu: " << sumaValorsMatriu << endl;

    return 0;
}
