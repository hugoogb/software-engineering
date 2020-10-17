#include <iostream>

using namespace std;

int main()
{
    float num1, num2, temp;

    cout << "Introdueix un nombre: ";
    cin >> num1;
    cout << "Introdueix un altre nombre: ";
    cin >> num2;

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << "El valor de num1 es " << num1 << " i el valor de num2 es " << num2 << endl;

    return 0;
}