#include <iostream>

using namespace std;

void ordenarNombres(float &num1, float &num2, float &num3)
{
    float numTemp1, numTemp2, numTemp3;
    numTemp1 = num1;
    numTemp2 = num2;
    numTemp3 = num3;

    if (numTemp1 < numTemp2 && numTemp1 < numTemp3)
    {
        num1 = numTemp1;
        if (numTemp2 < numTemp3)
        {
            num2 = numTemp2;
            num3 = numTemp3;
        }
        else
        {
            num2 = numTemp3;
            num3 = numTemp2;
        }
    }
    else if (numTemp2 < numTemp1 && numTemp2 < numTemp3)
    {
        num1 = numTemp2;
        if (numTemp1 < numTemp3)
        {
            num2 = numTemp1;
            num3 = numTemp3;
        }
        else
        {
            num2 = numTemp3;
            num3 = numTemp1;
        }
    }
    else if (numTemp3 < numTemp1 && numTemp3 < numTemp2)
    {
        num1 = numTemp3;
        if (numTemp1 < numTemp2)
        {
            num2 = numTemp1;
            num3 = numTemp2;
        }
        else
        {
            num2 = numTemp2;
            num3 = numTemp1;
        }
    }
}

int main()
{
    float num1, num2, num3;

    cout << "Introdueix 3 nombres: ";
    cin >> num1 >> num2 >> num3;

    ordenarNombres(num1, num2, num3);

    cout << "Nombres ordenats en ordre creixent: " << num1 << " " << num2 << " " << num3 << endl;

    return 0;
}