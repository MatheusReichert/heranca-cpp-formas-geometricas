#ifndef QUADRILATERO_H
#define QUADRILATERO_H

#include "Formas.h"

class Quadrilatero : public Formas
{
public:
    Quadrilatero(double ladoUm, double ladoDois, double ladoTres, double ladoQuatro);
    virtual ~Quadrilatero() = 0;

protected:
private:
    void calculaPerimetro(double ladoUm, double ladoDois, double ladoTres, double ladoQuatro);
    double ladoUm, ladoDois, ladoTres, ladoQuatro;
};

#endif // QUADRILATERO_H
