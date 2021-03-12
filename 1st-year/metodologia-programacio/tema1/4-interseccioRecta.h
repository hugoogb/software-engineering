class Punt
{
private:
    float m_x, m_y;

public:
    float getX() { return m_x; }
    float getY() { return m_y; }
    void setX(float x) { m_x = x; }
    void setY(float y) { m_y = y; }

    void llegeix();
    void mostra();
    float distancia(Punt &p);
    void suma(Punt &p1, Punt &p2);
};

class Recta
{
private:
    float m_a, m_b, m_c;

public:
    float getA() { return m_a; }
    float getB() { return m_b; }
    float getC() { return m_c; }
    float setA(float a) { m_a = a; }
    float setB(float b) { m_b = b; }
    float setC(float c) { m_c = c; }

    float distancia(Punt &pt);
    bool interseccio(Recta &r, Punt &pt);
};