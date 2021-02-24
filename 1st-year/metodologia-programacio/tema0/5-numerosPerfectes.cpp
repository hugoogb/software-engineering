#include <iostream>

using namespace std;

bool esPerfecte(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if ((num % i) == 0)
        {
            sum += i;
        }
    }

    if (sum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int N;

    cout << "Introdueix un numero: ";
    cin >> N;

    cout << "Els numeros perfectes menors son:" << endl;

    for (int i = 1; i <= N; i++)
    {
        if (esPerfecte(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}