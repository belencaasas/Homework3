#include "rectangulo.h"


Rectangulo::Rectangulo(): verticeIzqInferios(0,0) , ancho(1) , largo(1) {}
Rectangulo::Rectangulo(double x, double y, double ancho, double largo): verticeIzqInferios(x,y), ancho(ancho), largo(largo) {}

Punto Rectangulo::getVertice() const { return verticeIzqInferios; }
double Rectangulo::getAncho() const { return ancho; }
double Rectangulo::getLargo() const { return largo; }

void Rectangulo::setVertice(Punto p) { verticeIzqInferios = p; }
void Rectangulo::setAncho(double a) { ancho = a; }
void Rectangulo::setLargo(double l) { largo = l; }