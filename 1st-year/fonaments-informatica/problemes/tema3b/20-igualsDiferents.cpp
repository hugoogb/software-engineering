#include <iostream>

using namespace std;

int main()
{
    float num1, num2, num3;

    cout << "Introdueix un nombre: ";
    cin >> num1;
    cout << "Introdueix un altre nombre: ";
    cin >> num2;
    cout << "Introdueix un altre nombre: ";
    cin >> num3;

    if ((num1 + num2 == num3) || (num2 + num3 == num1) || (num1 + num3 == num2))
    {
        cout << "IGUALS";
    }
    else
    {
        cout << "DIFERENTS";
    }

    cout << endl;

    return 0;
}