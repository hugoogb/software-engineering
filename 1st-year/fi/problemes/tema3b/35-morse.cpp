#include <iostream>

using namespace std;

int main()
{
    char vocal;

    cout << "Introdueix una vocal: ";
    cin >> vocal;

    switch (vocal)
    {
    case 'A':
        cout << "Vocal: " << vocal << " - Codi Morse: .-";
        break;
    case 'a':
        cout << "Vocal: " << vocal << " - Codi Morse: .-";
        break;
    case 'E':
        cout << "Vocal: " << vocal << " - Codi Morse: .";
        break;
    case 'e':
        cout << "Vocal: " << vocal << " - Codi Morse: .";
        break;
    case 'I':
        cout << "Vocal: " << vocal << " - Codi Morse: ..";
        break;
    case 'i':
        cout << "Vocal: " << vocal << " - Codi Morse: ..";
        break;
    case 'O':
        cout << "Vocal: " << vocal << " - Codi Morse: ---";
        break;
    case 'o':
        cout << "Vocal: " << vocal << " - Codi Morse: ---";
        break;
    case 'U':
        cout << "Vocal: " << vocal << " - Codi Morse: ..-";
        break;
    case 'u':
        cout << "Vocal: " << vocal << " - Codi Morse: ..-";
        break;

    default:
        cout << "Error: El caracter introduit no es una vocal";
        break;
    }

    cout << endl;

    return 0;
}