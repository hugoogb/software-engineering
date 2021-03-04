#include <iostream>
#include <string.h>

using namespace std;

const int MAX_STRING = 20;

bool esSubString(char str[], char subStr[], int &posicio)
{
    bool subString;
    int j = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == subStr[0])
        {
            subString = true;
            posicio = i;

            while ((j < strlen(subStr)) && subString)
            {
                if (str[posicio + j] != subStr[j])
                {
                    subString = false;
                }
                else
                {
                    j++;
                }
            }
        }
    }

    return subString;
}

int main()
{
    char s1[MAX_STRING], s2[MAX_STRING];
    bool subString;
    int pos;

    cout << "Introdueix string: ";
    cin.getline(s1, MAX_STRING);
    cout << "Introdueix subString: ";
    cin.getline(s2, MAX_STRING);

    subString = esSubString(s1, s2, pos);

    if (subString)
    {
        cout << s2 << " SI es substring de " << s1 << "a la posicio " << pos << endl;
    }
    else
    {
        cout << s2 << " NO es substring de " << s1 << endl;
    }

    return 0;
}