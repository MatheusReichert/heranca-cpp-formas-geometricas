#include <iostream>
#include "circulo.h"
#include "triangulo.h"
#include "quadrilatero.h"
#include "quadrado.h"
#include "retangulo.h"
#include "stdlib.h"
using namespace std;

string igualdadeBoolToString(bool b)
{

    return (b ? "Iguais" : "Diferentes");
}

int main()
{

    Triangulo trianguloUm(1, 1, 1);
    Triangulo trianguloDois(3, 2, 4);
    Triangulo trianguloTres(2, 2, 3);
    Triangulo trianguloQuatro(4, 2, 3);
    cout << "Triangulo 1: \n"
         << trianguloUm << endl;
    cout << "Triangulo 2: \n"
         << trianguloDois << endl;
    cout << "Triangulo 3: \n"
         << trianguloTres << endl;
    cout << "Triangulo 4: \n"
         << trianguloQuatro << endl;
    cout << "Triangulo 1 e Triangulo 2: " << igualdadeBoolToString(trianguloUm == trianguloDois) << endl;
    cout << "Triangulo 2 e Triangulo 4: " << igualdadeBoolToString(trianguloDois == trianguloQuatro) << endl;

    cout << "__________________________________________________________________________________" << endl;

    Circulo circuloUm(10);
    Circulo circuloDois(5);
    cout << circuloUm << endl
         << circuloDois;
    cout << "Circulo 1 e Circulo 2: " << igualdadeBoolToString(circuloUm == circuloDois) << endl;

    cout << "__________________________________________________________________________________" << endl;

    Quadrado quadradoUm(1);
    Quadrado quadradoDois(2);
    Quadrado quadradoTres(2);
    cout << quadradoUm << endl
         << quadradoDois << endl
         << quadradoTres;
    cout << "Quadrado 2 e Quadrado 3: " << igualdadeBoolToString(quadradoTres == quadradoDois) << endl;

    cout << "__________________________________________________________________________________" << endl;

    Retangulo retanguloUm(1, 2);
    Retangulo retanguloDois(3333, 1);
    Retangulo retanguloTres(1, 2);
    cout << retanguloUm << endl
         << retanguloDois << endl
         << retanguloTres;
    cout << "Quadrado 2 e Quadrado 3: " << igualdadeBoolToString(retanguloTres == retanguloDois) << endl;

    return 0;
}
