#include <iostream>
#include "matrius.cpp"
#include "matrius.h"

using namespace std;

#define N_FIL 3
#define N_COL 3

int main()
{
    float matriu[N_FIL][N_COL];
    int res;

    LlegirMatriu(matriu, N_FIL, N_COL);

    res = SimetricaMatriu(matriu, N_FIL, N_COL);

    switch(res){
        case 0:
            cout << "NO SIMETRICA";
            break;
        case 1:
            cout << "SIMETRICA";
            break;
    }
    cout << endl;

    return 0;
}
