#include "quadrado.h"
#include <iostream>
using namespace std;
Quadrado::Quadrado(double aresta) : Quadrilatero(aresta, aresta, aresta, aresta)
{
    calculaArea(aresta);
}

Quadrado::~Quadrado()
{
    //dtor
}

void Quadrado::calculaArea(double aresta)
{
    setArea(aresta * aresta);
}

bool operator==(Quadrado x, Quadrado y)
{
    return (x.getArea() == y.getArea());
}

ostream &operator<<(ostream &o, Quadrado quadrado)
{
    return o << "Quadrado" << endl
           << "Perimetro: " << quadrado.getPerimetro() << endl
           << "Area: " << quadrado.getArea() << endl;
}
