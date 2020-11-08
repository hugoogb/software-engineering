#include <iostream>

using namespace std;

#define N_FIL 4
#define N_COL 4

void LlegirMatriu(int m[][N_COL], int n_fil, int n_col)
{
    for (int i = 0; i < n_fil; i++)
    {
        for (int j = 0; j < n_col; j++)
        {
            cin >> m[i][j];
        }
    }
}

void EscriureDiagonal(int m[][N_COL], int n_fil, int n_col)
{
    for (int i = 0; i < n_fil; i++)
    {
        for (int j = 0; j < n_col; j++)
        {
            if (i == j)
            {
                cout << m[i][j] << " ";
            }
        }
    }
    cout << endl;
}

int main()
{ 
    int matriu[N_FIL][N_COL];

    LlegirMatriu(matriu, N_FIL, N_COL);

    EscriureDiagonal(matriu, N_FIL, N_COL);

    return 0;
}
