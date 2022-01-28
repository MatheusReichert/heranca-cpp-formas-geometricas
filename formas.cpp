#include "formas.h"

Formas::Formas()
{
    //ctor
}

Formas::~Formas()
{
    //dtor
}

double Formas::getPerimetro()
{
    return this->perimetro;
}
double Formas::getArea()
{
    return this->area;
}

void Formas::setArea(double area)
{
    this->area = area;
}
void Formas::setPerimetro(double perimetro)
{
    this->perimetro = perimetro;
}
