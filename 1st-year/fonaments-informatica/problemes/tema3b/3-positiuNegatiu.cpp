#include <iostream>

using namespace std;

int main()
{
    float num;

    cout << "Introdueix un numero: ";
    cin >> num;

    if (num >= 0)
    {
        cout << "Positiu" << endl;
    }
    else
    {
        cout << "Negatiu" << endl;
    }

    return 0;
}