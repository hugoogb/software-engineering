#include <iostream>
#include "3-complex.h"

using namespace std;

void Complex::setReal(float pReal) //TO VALIDATE TEST
{
    m_real = pReal;
}

void Complex::setImg(float pImg) //TO VALIDATE TEST
{
    m_img = pImg;
}

float Complex::getReal() //TO VALIDATE TEST
{
    return m_real;
}

float Complex::getImg() //TO VALIDATE TEST
{
    return m_img;
}

void Complex::mostra() const
{
    //IMPLEMENT CODE
    cout << m_real << " + " << m_img << "i" << endl;
}

Complex Complex::avaluaOperacio(const char operacio, const Complex &c2) const
{
    //IMPLEMENT CODE
    Complex resultat;

    switch (operacio)
    {
    case '1':
        resultat = suma(c2);
        break;
    case '2':
        resultat = resta(c2);
        break;
    case '3':
        resultat = multiplica(c2);
        break;
    default:
        break;
    }

    return resultat;
}

Complex Complex::suma(const Complex &c) const
{
    //IMPLEMENT CODE
    Complex resSuma;

    resSuma.m_real = m_real + c.m_real;
    resSuma.m_img = m_img + c.m_img;

    return resSuma;
}

Complex Complex::resta(const Complex &c) const
{
    //IMPLEMENT CODE
    Complex resResta;

    resResta.m_real = m_real - c.m_real;
    resResta.m_img = m_img - c.m_img;

    return resResta;
}

Complex Complex::multiplica(const Complex &c) const
{
    //IMPLEMENT CODE
    Complex resMultiplicacio;

    resMultiplicacio.m_real = m_real * c.m_real - m_img * c.m_img;
    resMultiplicacio.m_img = m_real * c.m_img + m_img * c.m_real;

    return resMultiplicacio;
}