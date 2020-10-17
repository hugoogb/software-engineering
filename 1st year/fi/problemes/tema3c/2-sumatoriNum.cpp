#include <iostream>

using namespace std;

int main()
{
    int num = 1, sumatori = 0, numLimit;

    do
    {
        cout << "Introdueix un nombre enter: ";
        cin >> numLimit;
        if (numLimit <= 0)
        {
            cout << "Error: el valor ha de ser mes gran que zero" << endl;
        }
    } while (numLimit <= 0);

    do
    {
        sumatori = sumatori + num;
        num++;
    } while (num <= numLimit);

    cout << "El sumatori de " << numLimit << " es: " << sumatori << endl;

    return 0;
}