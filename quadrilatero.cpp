#include "quadrilatero.h"

Quadrilatero::Quadrilatero(double ladoUm, double ladoDois, double ladoTres, double ladoQuatro)
{
    this->ladoUm = ladoUm;
    this->ladoDois = ladoDois;
    this->ladoTres = ladoTres;
    this->ladoQuatro = ladoQuatro;
    calculaPerimetro(ladoUm, ladoDois, ladoTres, ladoQuatro);
}

Quadrilatero::~Quadrilatero()
{
    //dtor
}

void Quadrilatero::calculaPerimetro(double ladoUm, double ladoDois, double ladoTres, double ladoQuatro)
{
    setPerimetro(ladoUm + ladoDois + ladoTres + ladoQuatro);
}
