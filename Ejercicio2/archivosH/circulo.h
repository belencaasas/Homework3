#pragma once 
#include "punto.h"

class Circulo{
private: 
    Punto centro; 
    double radio;

public:
    Circulo(); 
    Circulo(double x, double y, double r); 

    Punto getCentro() const; 
    double getRadio() const;

    void setCentro(Punto p);
    void setRadio(double r);
};