#include "circulo.h"
#include <cmath>
#include <iostream>
Circulo::Circulo(double raio) : Formas()
{
    setArea(M_PI * (raio * raio));
    setPerimetro(2 * M_PI * raio);
}

Circulo::~Circulo()
{
    //dtor
}

bool operator==(Circulo x, Circulo y)
{
    return (x.getArea() == y.getArea());
}

ostream &operator<<(ostream &o, Circulo circulo)
{

    return o << "Circulo" << endl
           << "Area:" << circulo.getArea() << endl
           << "Perimetro: " << circulo.getPerimetro() << endl;
}
