#pragma once 
#include "MedicionBase.h"
#include "IMediciones.h"

class Posicion : public MedicionBase {
public: 
    float latitud; 
    float longitud; 
    float altitud; 

    Posicion(); 
    Posicion(float lat, float lon, float alt, float t); 
    Posicion(const Posicion& ohter);
    Posicion& operator=(const Posicion& other); 

    void imprimir() const override;
    void serializar(ofstream&) const override; 
    void deserializar(ifstream&) override; 
};
