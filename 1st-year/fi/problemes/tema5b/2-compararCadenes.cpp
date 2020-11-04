#include <iostream>
#include <string.h>

using namespace std;

#define SIZE 16

int main()
{
    char cad1[SIZE], cad2[SIZE], cad3[SIZE];

    cin >> cad1 >> cad2 >> cad3;

    cout << "Cadenes introduides: " << cad1 << " " << cad2 << " " << cad3 << endl;

    if (strcmp(cad1, cad2) == 0 && strcmp(cad2, cad3) == 0)
    {
        cout << "Les tres cadenes son iguals";
    }
    else if (strcmp(cad1, cad2) == 0)
    {
        cout << "Les cadenes 1 i 2 son iguals";
    }
    else if (strcmp(cad2, cad3) == 0)
    {
        cout << "Les cadenes 2 i 3 son iguals";
    }
    else if (strcmp(cad1, cad3) == 0)
    {
        cout << "Les cadenes 1 i 3 son iguals";
    }
    else
    {
        cout << "Les tres cadenes son diferents";
    }

    cout << endl;

    return 0;
}