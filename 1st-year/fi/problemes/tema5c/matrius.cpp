#include <iostream>
#include "matrius.h"

using namespace std;

void LlegirMatriu(float m[][N_COL], int n_fil, int n_col)
{
    for (int i = 0; i < n_fil; i++)
    {
        for (int j = 0; j < n_col; j++)
        {
            cin >> m[i][j];
        }
    }
}

void EscriureMatriu(float m[][N_COL], int n_fil, int n_col)
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

void SumaMatriu(float m1[][N_COL], int m2[][N_COL], int suma[][N_COL], int n_fil, int n_col)
{
    for (int i = 0; i < n_fil; i++)
    {
        for (int j = 0; j < n_col; j++)
        {
            suma[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

float SumaValorsMatriu(float m[][N_COL], int n_fil, int n_col)
{
    float suma = 0;

    for (int i = 0; i < n_fil; i++)
    {
        for (int j = 0; j < n_col; j++)
        {
            suma += m[i][j];
        }
    }

    return suma;
}

int SimetricaMatriu(float m[][N_COL], int n_fil, int n_col)
{
    int i = 0, j = 0, i2 = (n_fil - 1), j2 = (n_col - 1);
    bool find = false;

    while (i < n_fil && !find)
    {
        if (m[i][j] != m[i2][j2])
        {
            find = true;
        } else
        {
            i++;
            j++;
            i2--;
            j2--;
        }
    }

    if (find)
    {
        return 0;
    } else 
    {
        return 1;
    }
}

void ProducteMatrius(float m1[][N_COL], float m2[][N_COL], float producte[][N_COL], int n_fil, int n_col)
{
    for (int i = 0; i < n_fil; i++)
    {
        for (int j = 0; j < n_col; j++)
        {
            producte[i][j] = 0;
            for (int k = 0; k < n_col; k++)
            {
                producte[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}
