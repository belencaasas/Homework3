#include "../include/SaveFlightData.h"

SaveFlightData::SaveFlightData() {}
SaveFlightData::SaveFlightData(const Posicion& p, const Presion& q) : posicion(p), presion(q) {} 

//escribe la posicion y la presion al archivo
void SaveFlightData::serializar(ofstream& out) const{ 
    posicion.serializar(out);
    presion.serializar(out); 
}

//lee la posicion de y la presion desde el archivo
void SaveFlightData::deserializar(ifstream& in) { 
    posicion.deserializar(in);
    presion.deserializar(in); 
}

//muestra por consola la posicion y la presion 
void SaveFlightData::imprimir() const{
    posicion.imprimir();
    presion.imprimir();
}
