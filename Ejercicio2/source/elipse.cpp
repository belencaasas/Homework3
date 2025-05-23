#include "../include/elipse.h"

Elipse::Elipse(): centro(0,0) , a(1) , b(1) {}
Elipse::Elipse(double x, double y, double a, double b): centro(x,y) , a(a) , b(b) {}

Punto Elipse::getCentro() const {return centro;}
double Elipse::getA() const {return a;}
double Elipse::getB() const {return b;}

void Elipse::setCentro(Punto p) {centro = p;}
void Elipse::setA(double a) {this->a = a;}
void Elipse::setB(double b) {this->b = b;}