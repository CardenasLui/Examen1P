#include <bits/stdc++.h>
using namespace std;

class Circulo
{
private:
    float radio;

public:
    int x;
    int y;

    Circulo();
    Circulo(int x2, int y2);
    Circulo(int x2, int y2, float r);

    float getRadio()
    {
        return radio;
    };

    void setRadio(float r)
    {
        if (r < 0)
        {
            radio = 0.0;
        }
        else
        {
            radio = r;
        }
    };

    float getArea()
    {
        return 3.14 * radio * radio;
    };

    void intersects(Circulo circulo)
    {
        float dist;
        dist=sqrt((x-circulo.x)*(x-.circulo.x2)+(y-.circulo.y2)*(y-.circulo.y2));
        if (dist < radio + .circulo.getRadio(radio))
        {
            cout << "Los circulos se intersectan" << endl;
        }
        else
        {
            cout << "Los circulos NO se intersectan" << endl;
        }
    };
};


int main()
{

  Circulo c1(2,3,3.5);
  Circulo c2(8.3);
  Circulo c3;
    float getArea;

  c1.intersects(c2);
  c2.intersects(c3);
  c3.intersects(c1);

    return 0;
}


Circulo::Circulo()
{
    radio = 0.0;
    x = 0;
    y = 0;
}
Circulo::Circulo(int x2, int y2)
{
    radio = 0.0;
    x = x2;
    y = y2;
}
Circulo::Circulo(int x2, int y2, float r)
{
    if (r < 0)
    {
        radio = 0.0;
    }
    else
    {
        radio = r;
    }
    x = x2;
    y = y2;
}