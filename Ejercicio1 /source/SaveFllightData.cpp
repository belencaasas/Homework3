#include "../include/SaveFlightData.h"

SaveFlightData::SaveFlightData() {}
SaveFlightData::SaveFlightData(const Posicion& p, const Presion& q) : posicion(p), presion(q) {} 

void SaveFlightData::serializar(ofstream& out) const{ 
    posicion.serializar(out);
    presion.serializar(out); 
}

void SaveFlightData::deserializar(ifstream& in) { 
    posicion.deserializar(in);
    presion.deserializar(in); 
}

void SaveFlightData::imprimir() const{
    posicion.imprimir();
    presion.imprimir();
}
