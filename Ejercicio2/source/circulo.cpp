#include "../include/circulo.h"

Circulo::Circulo(): centro(0,0) , radio(1){} 
Circulo::Circulo(double x, double y, double r): centro(x,y) , radio(r){}

//getter que devuelve el punto que representa el centro del circulo
Punto Circulo::getCentro() const {return centro;}
//getter que devuelve el radio del circulo 
double Circulo::getRadio() const {return radio;}

//setter que establece una nueva posicion para el centro del circulo 
void Circulo::setCentro(Punto p) {centro = p;} 
//setter que establece una nueva posicion para el radio del circulo 
void Circulo::setRadio(double r) {radio = r;}