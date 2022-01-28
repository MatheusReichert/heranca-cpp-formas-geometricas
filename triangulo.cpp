#include "triangulo.h"
#include <string>
#include <set>
#include <iostream>
#include <math.h>

Triangulo::Triangulo(double arestaUm, double arestaDois, double arestaTres)
{

    calcArea(arestaUm, arestaDois, arestaTres);
    if (getArea() != 0)
    {
        std::set<double> arrestasSet = {arestaUm, arestaDois, arestaTres};

        classificaTriangulo(arrestasSet);

        setPerimetro(arestaUm + arestaDois + arestaTres);
    }
    else
    {
        tipo = "triangulo impossivel";
    }
}

Triangulo::~Triangulo()
{
}

string Triangulo::getTipo()
{
    return this->tipo;
}

void Triangulo::classificaTriangulo(set<double> arrestasSet)
{

    if (arrestasSet.size() == 1)
    {
        tipo = "equilatero";
    }
    else if (arrestasSet.size() == 2)
    {
        tipo = "isoceles";
    }
    else if (arrestasSet.size() == 3)
    {
        tipo = "escaleno";
    }
}

void Triangulo::calcArea(double arestaUm, double arestaDois, double arestaTres)
{

    double semiPerimetro = (arestaUm + arestaDois + arestaTres) / 2;
    double aux = double(semiPerimetro) * double(semiPerimetro - arestaUm) * double(semiPerimetro - arestaDois) * double(semiPerimetro - arestaTres);

    setArea(std::sqrt(aux));
}

bool operator==(Triangulo x, Triangulo y)
{
    return ((x.getArea() == y.getArea()) && (x.getTipo() == y.getTipo()));
}

ostream &operator<<(ostream &o, Triangulo triangulo)
{
    return o << "Triangulo: " << triangulo.getTipo() << endl
           << "Area:" << triangulo.getArea() << endl
           << "Perimetro: " << triangulo.getPerimetro() << endl;
}
