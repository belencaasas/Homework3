#pragma once 
#include "Posicion.h"
#include "Presion.h"

class SaveFlightData{ 
public: 
    Posicion posicion; 
    Presion presion; 

    SaveFlightData();
    SaveFlightData(const Posicion& p, const Presion& q);

    void serializar(ofstream&) const; 
    void deserializar(ifstream&); 
    void imprimir() const; 
};