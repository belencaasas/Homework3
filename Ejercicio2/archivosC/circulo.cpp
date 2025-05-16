#include "circulo.h"

Circulo::Circulo(): centro(0,0) , radio(1){} 
Circulo::Circulo(double x, double y, double r): centro(x,y) , radio(r){}

Punto Circulo::getCentro() const {return centro;}
double Circulo::getRadio() const {return radio;}

void Circulo::setCentro(Punto p) {centro = p;} 
void Circulo::setRadio(double r) {radio = r;}