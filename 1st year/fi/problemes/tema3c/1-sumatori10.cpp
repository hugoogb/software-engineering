#include <iostream>

using namespace std;

int main()
{
    int num, sumatori;

    num = 1;

    do
    {
        sumatori = sumatori + num;
        num++;
    } while (num <= 10);

    cout << sumatori << endl;

    return 0;
}