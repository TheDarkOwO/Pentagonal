#ifndef PENTAGONAL_H
#define PENTAGONAL_H

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class pentagonal
{
public:
    pentagonal(float = 0.0, float = 0.0);
    pentagonal(pentagonal&);
    virtual ~pentagonal();
    void setlado(float);
    void setaltura(float);
    float getlado() const;
    float getaltura() const;
    float apotema() const;
    float arealateral() const;
    float areabase() const;
    float areatotal() const;
    float volumen() const;
    void imprimir1() const;
    void imprimir2() const;
private:
    float lado, altura;
};

#endif
