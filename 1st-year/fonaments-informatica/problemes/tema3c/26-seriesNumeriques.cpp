#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    for (int i = 25; i <= 35; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    for (int i = 50; i <= 80; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}