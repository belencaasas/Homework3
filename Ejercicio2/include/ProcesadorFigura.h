#pragma once 
#include "elipse.h"
#include "circulo.h"
#include "rectangulo.h" 
#include <cmath>

template<typename T> 
class ProcesadorFigura{
public: 
    static double calcularArea(const T& figura);
}; 

template<>
inline double ProcesadorFigura<Circulo> :: calcularArea(const Circulo& c){
    return M_PI * c.getRadio() * c.getRadio();
}

template<>
inline double ProcesadorFigura<Elipse> :: calcularArea(const Elipse& e){
    return M_PI * e.getA() * e.getB(); 
}

template<>
inline double ProcesadorFigura<Rectangulo> :: calcularArea(const Rectangulo& r){
    return r.getAncho() * r.getLargo(); 
}