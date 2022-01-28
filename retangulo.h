#ifndef RETANGULO_H
#define RETANGULO_H
#include "Quadrilatero.h"
#include <iostream>
using namespace std;
class Retangulo : public Quadrilatero
{
public:
    Retangulo(double base, double altura);
    virtual ~Retangulo();
    friend bool operator==(Retangulo x, Retangulo y);
    friend ostream &operator<<(ostream &o, Retangulo retangulo);

protected:
private:
    void calculaArea(double base, double altura);
};

#endif // RETANGULO_H
