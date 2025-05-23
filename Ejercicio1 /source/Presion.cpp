#include "../include/Presion.h"
#include <iostream>

Presion::Presion() : MedicionBase(), presionEstatica(0), presionDinamica(0) {}
Presion::Presion(float p, float q, float t) : MedicionBase(t) , presionEstatica(p) , presionDinamica(q) {} 
Presion::Presion(const Presion& other) : MedicionBase(other), presionEstatica(other.presionEstatica) , presionDinamica(other.presionDinamica) {}

Presion& Presion::operator=(const Presion& other){
    if (this != &other){
        MedicionBase::operator=(other); 
        presionEstatica = other.presionEstatica; 
        presionDinamica = other.presionDinamica; 
    }
    return *this; 
} 

void Presion::imprimir() const{
    cout << "Presion Estatica: " << presionEstatica << endl; 
    cout << "Presion Dinamica: " << presionDinamica << endl; 
    cout << "Tiempo: " << *tiempoMedicion << endl;
} 

void Presion::serializar(ofstream& out) const{ 
    out << *tiempoMedicion << " " << presionEstatica << " " << presionDinamica << endl;
} 

void Presion::deserializar(ifstream& in){ 
    float tiempo; 
    in >> tiempo >> presionEstatica >> presionDinamica; 
    tiempoMedicion = make_unique<float>(tiempo);
}