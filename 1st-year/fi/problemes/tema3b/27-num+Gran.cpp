#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4;

    cout << "Introdueix quatre nombres enters: ";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        cout << "El numero mes gran de la serie es " << num1 << ". Comparacions: " << 1;
    }
    else
    {
        if (num2 > num3 && num2 > num4)
        {
            cout << "El numero mes gran de la serie es " << num2 << ". Comparacions: " << 2;
        }
        else
        {
            if (num3 > num4)
            {
                cout << "El numero mes gran de la serie es " << num3 << ". Comparacions: " << 3;
            }
            else
            {
                cout << "El numero mes gran de la serie es " << num4 << ". Comparacions: " << 3;
            }
        }
    }

    cout << endl;

    return 0;
}