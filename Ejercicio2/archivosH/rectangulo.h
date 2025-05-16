#pragma once 
#include "punto.h"

class Rectangulo{
private:
    Punto verticeIzqInferios; 
    double ancho;
    double largo;

public:
    Rectangulo();
    Rectangulo(double x, double y, double ancho, double largo);

    Punto getVertice() const; 
    double getAncho() const; 
    double getLargo() const; 

    void setVertice(Punto p); 
    void setAncho(double a);
    void setLargo(double l);

};