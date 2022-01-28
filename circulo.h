#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
#include "formas.h"
using namespace std;

class Circulo : public Formas
{
public:
    Circulo(double raio);
    virtual ~Circulo();
    friend bool operator==(Circulo x, Circulo y);
    friend ostream &operator<<(ostream &o, Circulo circulo);

protected:
private:
    double raio;
};

#endif // CIRCULO_H
