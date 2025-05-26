#include "../include/Posicion.h"
#include <iostream> 


Posicion::Posicion() : MedicionBase(), latitud(0), longitud(0), altitud(0) {}
Posicion::Posicion(float lat, float lon, float alt, float t) : MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {}
//constructor por copia 
Posicion::Posicion(const Posicion& other): MedicionBase(other), latitud(other.latitud), longitud(other.longitud), altitud(other.altitud) {}

//operador de asignacion por copia
Posicion& Posicion::operator=(const Posicion& other) {
    if (this != &other) {
        MedicionBase::operator=(other);
        latitud = other.latitud;
        longitud = other.longitud;
        altitud = other.altitud;
    }
    return *this;
}

//imprime la posicion en consola 
void Posicion::imprimir() const {
    cout << "Posicion (lat, lon, alt): (" << latitud << ", " << longitud << ", " << altitud<< ") "<< endl;
    cout << "Tiempo: " << *tiempoMedicion << endl;
}

//escribe los datos en un archivo
void Posicion::serializar(std::ofstream& out) const {
    out << *tiempoMedicion << " " << latitud << " " << longitud << " " << altitud << "\n";
}

//lee los datos desde un archivo
void Posicion::deserializar(std::ifstream& in) {
    float tiempo;
    in >> tiempo >> latitud >> longitud >> altitud;
    tiempoMedicion = std::make_unique<float>(tiempo);
}
