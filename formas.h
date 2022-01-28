#ifndef FORMAS_H
#define FORMAS_H

class Formas
{
public:
    Formas();
    virtual ~Formas() = 0;
    double getPerimetro();
    double getArea();
    void setArea(double area);
    void setPerimetro(double perimetro);

protected:
private:
    double perimetro = 0.0;
    double area = 0.0;
};

#endif // FORMAS_H
