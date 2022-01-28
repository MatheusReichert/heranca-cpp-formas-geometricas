#ifndef QUADRADO_H
#define QUADRADO_H

#include "Quadrilatero.h"
#include <iostream>
using namespace std;

class Quadrado : public Quadrilatero
{
public:
    Quadrado(double aresta);
    virtual ~Quadrado();
    friend bool operator==(Quadrado x, Quadrado y);
    friend ostream &operator<<(ostream &o, Quadrado quadrado);

protected:
private:
    void calculaArea(double aresta);
};

#endif // QUADRADO_H
