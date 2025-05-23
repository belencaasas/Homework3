#include "../include/Posicion.h"
#include <iostream> 


Posicion::Posicion() : MedicionBase(), latitud(0), longitud(0), altitud(0) {}
Posicion::Posicion(float lat, float lon, float alt, float t) : MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {}
Posicion::Posicion(const Posicion& other): MedicionBase(other), latitud(other.latitud), longitud(other.longitud), altitud(other.altitud) {}

Posicion& Posicion::operator=(const Posicion& other) {
    if (this != &other) {
        MedicionBase::operator=(other);
        latitud = other.latitud;
        longitud = other.longitud;
        altitud = other.altitud;
    }
    return *this;
}

void Posicion::imprimir() const {
    cout << "Posicion (lat, lon, alt): (" << latitud << ", " << longitud << ", " << altitud<< ") "<< endl;
    cout << "Tiempo: " << *tiempoMedicion << endl;
}

void Posicion::serializar(std::ofstream& out) const {
    out << *tiempoMedicion << " " << latitud << " " << longitud << " " << altitud << "\n";
}

void Posicion::deserializar(std::ifstream& in) {
    float tiempo;
    in >> tiempo >> latitud >> longitud >> altitud;
    tiempoMedicion = std::make_unique<float>(tiempo);
}
