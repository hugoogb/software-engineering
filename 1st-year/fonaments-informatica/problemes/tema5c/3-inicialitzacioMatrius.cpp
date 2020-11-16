#include <iostream>

using namespace std;

#define N_FIL1 3
#define N_COL1 4

#define N_FIL2 5
#define N_COL2 3

void InicialitzarMatriu(int m[][N_COL2], int n_fil, int n_col)
{
    for (int i = 0; i < n_fil; i++)
    {
        for (int j = 0; j < n_col; j++)
        {
            m[i][j] = 5 * i + j;
        }
    }
}

void EscriuMatriu1(int m[][N_COL1], int n_fil, int n_col)
{
    for (int i = 0; i < n_fil; i++)
    {
        for (int j = 0; j < n_col; j++)
        {
            cout << m[i][j] << " ";

            if (j + 1 == n_col)
            {
                cout << endl;
            }
        }
    }
    cout << endl;
}

void EscriuMatriu2(int m[][N_COL2], int n_fil, int n_col)
{
    for (int i = 0; i < n_fil; i++)
    {
        for (int j = 0; j < n_col; j++)
        {
            cout << m[i][j] << " ";

            if (j + 1 == n_col)
            {
                cout << endl;
            }
        }
    }
    cout << endl;
}

int main()
{
    int matriu1[N_FIL1][N_COL1] = {{6, 7, 8, 9}, {6, 5, 4, 3}, {1, 0, 0, 1}};
    int matriu2[N_FIL2][N_COL2];

    InicialitzarMatriu(matriu2, N_FIL2, N_COL2);

    EscriuMatriu1(matriu1, N_FIL1, N_COL1);
    cout << endl;
    EscriuMatriu2(matriu2, N_FIL2, N_COL2);

    return 0;
}
