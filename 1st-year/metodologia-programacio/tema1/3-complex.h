class Complex
{
public:
    float getReal();           //TO VALIDATE TEST
    float getImg();            //TO VALIDATE TEST
    void setReal(float pReal); //TO VALIDATE TEST
    void setImg(float pImg);   //TO VALIDATE TEST

    //IMPLEMENT CLASS CODE
    void mostra() const;
    Complex avaluaOperacio(const char operacio, const Complex &c2) const;
    Complex suma(const Complex &c) const;
    Complex resta(const Complex &c) const;
    Complex multiplica(const Complex &c) const;

    float m_real, m_img;
};