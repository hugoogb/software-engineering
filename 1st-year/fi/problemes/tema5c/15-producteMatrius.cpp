#include <iostream>
#include "matrius.cpp"
#include "matrius.h"

using namespace std;

#define N_FIL1 2
#define N_FIL2 3
#define N_COL 3

int main()
{
    float matriu1[N_FIL1][N_COL], matriu2[N_FIL2][N_COL], matriuProducte[N_FIL1][N_COL];

    LlegirMatriu(matriu1, N_FIL1, N_COL);
    LlegirMatriu(matriu2, N_FIL2, N_COL);

    ProducteMatrius(matriu1, matriu2, matriuProducte, N_FIL1, N_COL);
    
    EscriureMatriu(matriuProducte, N_FIL2, N_COL);

    return 0;
}
