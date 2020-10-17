#include <iostream>

using namespace std;

int main()
{
    char lletra;

    cout << "Introduir una lletra: ";
    cin >> lletra;

    switch (lletra)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Vocal";
        break;
    default:
        cout << "Consonant";
        break;
    }

    cout << endl;

    return 0;
}