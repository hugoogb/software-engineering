#include <iostream>

using namespace std;

#define N_FIL 2
#define N_COL 3

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

void EscriuMatriu(int m[][N_COL], int n_fil, int n_col)
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

void SumaMatriu(int m1[][N_COL], int m2[][N_COL], int suma[][N_COL], int n_fil, int n_col)
{
    for (int i = 0; i < n_fil; i++)
    {
        for (int j = 0; j < n_col; j++)
        {
            suma[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

int main()
{
    int matriu1[N_FIL][N_COL], matriu2[N_FIL][N_COL];
    int matriuSuma[N_FIL][N_COL] = {{0, 0, 0}, {0, 0, 0}};

    LlegirMatriu(matriu1, N_FIL, N_COL);
    cout << endl;
    
    LlegirMatriu(matriu2, N_FIL, N_COL);
    cout << endl;

    SumaMatriu(matriu1, matriu2, matriuSuma, N_FIL, N_COL);

    EscriuMatriu(matriuSuma, N_FIL, N_COL);

    return 0;
}
