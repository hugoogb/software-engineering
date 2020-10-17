#include <iostream>

using namespace std;

int main()
{
    int num, sumatori;

    num = 1;

    while (num <= 10)
    {
        sumatori = sumatori + num;
        num++;
    }

    cout << sumatori << endl;

    return 0;
}