#include <iostream>

using namespace std;

int main()
{
    int num, sumatori = 0;

    cout << "Introdueix un nombre enter: ";
    cin >> num;

    while (num <= 0)
    {
        cout << "Error: el valor ha de ser mes gran que zero" << endl;

        cout << "Introdueix un nombre enter: ";
        cin >> num;
    }

    for (int i = 0; i <= num; i++)
    {
        sumatori += i;
    }
    cout << "El sumatori de " << num << " es: " << sumatori << endl;

    return 0;
}