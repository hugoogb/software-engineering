#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Introdueix un nombre enter: ";
    cin >> num;

    if (num % 2 < 2 || num % 3 < 3 || num % 5 < 5 || num % 7 < 7)
    {
        cout << "NO PRIMER";
    }
    else
    {
        cout << "PRIMER";
    }

    return 0;
}