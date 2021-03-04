#include <iostream>

using namespace std;

int fibonacci(int n)
{
    int numAnterior = 0;
    int numActual = 1;
    int numAux;

    /*if (n == 0)
    {
        numActual = 1;
    }
    else*/
    //{

    for (int i = 0; i < n; i++)
    {
        numAux = numActual;
        numActual += numAnterior;
        numAnterior = numAux;
    }
    //}

    return numActual;
}

int main()
{
    int n, fibo;

    cout << "Introdueix quants numeros de fibonacci vols: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        fibo = fibonacci(i);
        cout << "F(" << i << ")=" << fibo << endl;
    }

    return 0;
}