#include <iostream>

using namespace std;

#define LONG 50

void ConcatenarCadena(char cad1[], char cad2[], char cad3[])
{
    int i = 0, j = 0;

    while (cad1[i] != '\0')
    {
        cad3[i] = cad1[i];

        i++;
    }

    while (cad2[j] != '\0')
    {
        cad3[i] = cad2[j];

        i++;
        j++;
    }

    cad3[i] = '\0';
}

int main()
{
    char c1[LONG] = {'B', 'o', 'n', ' ', 'd', 'i', 'a', ' ', '\0'}, c2[LONG], c3[LONG];

    cin >> c2;

    ConcatenarCadena(c1, c2, c3);

    cout << c3 << endl;

    return 0;
}