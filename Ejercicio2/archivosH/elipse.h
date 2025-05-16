#pragma once 
#include "punto.h"

class Elipse{
private:
    Punto centro; 
    double a; 
    double b; 

public:
    Elipse(); 
    Elipse(double x, double y, double a, double b);

    Punto getCentro() const; 
    double getA() const; 
    double getB() const; 

    void setCentro(Punto p);
    void setA(double a);
    void setB(double b); 
};