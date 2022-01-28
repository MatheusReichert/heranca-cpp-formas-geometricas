#include "retangulo.h"
#include "Quadrilatero.h"
#include <iostream>
using namespace std;
Retangulo::Retangulo(double base, double altura) : Quadrilatero(base, altura, base, altura)
{
    calculaArea(base, altura);
}

Retangulo::~Retangulo()
{
    //dtor
}

void Retangulo::calculaArea(double base, double altura)
{

    setArea(base * altura);
}

bool operator==(Retangulo x, Retangulo y)
{
    return (x.getArea() == y.getArea());
}

ostream &operator<<(ostream &o, Retangulo retangulo)
{
    return o << "Retangulo" << endl
           << "Perimetro: " << retangulo.getPerimetro() << endl
           << "Area: " << retangulo.getArea() << endl;
}
