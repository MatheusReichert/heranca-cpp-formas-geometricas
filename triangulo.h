#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Formas.h"
#include <string>
#include <set>
using namespace std;

class Triangulo : public Formas
{
public:
    Triangulo(double arestaUm, double arestaDois, double arestaTres);
    virtual ~Triangulo();
    string getTipo();
    friend bool operator==(Triangulo x, Triangulo y);
    friend ostream &operator<<(ostream &o, Triangulo triangulo);

protected:
private:
    string tipo = "";
    void classificaTriangulo(set<double> arrestasSet);
    void calcArea(double arestaUm, double arestaDois, double arestaTres);
};

#endif // TRIANGULO_H
