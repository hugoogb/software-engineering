#include <iostream>

using namespace std;

int main()
{
    int num = 1, sumatori = 0, numLimit;

    cout << "Introdueix un nombre enter: ";
    cin >> numLimit;

    while (numLimit <= 0)
    {
        cout << "Error: el valor ha de ser mes gran que zero" << endl;
        cout << "Introdueix un nombre enter: ";
        cin >> numLimit;
    }

    while (num <= numLimit)
    {
        sumatori = sumatori + num;
        num++;
    }

    cout << "El sumatori de " << numLimit << " es: " << sumatori << endl;

    return 0;
}