#include "../include/Presion.h"
#include <iostream>

Presion::Presion() : MedicionBase(), presionEstatica(0), presionDinamica(0) {}
Presion::Presion(float p, float q, float t) : MedicionBase(t) , presionEstatica(p) , presionDinamica(q) {} 
//constructor por copia 
Presion::Presion(const Presion& other) : MedicionBase(other), presionEstatica(other.presionEstatica) , presionDinamica(other.presionDinamica) {}

//operador de asignacion por copia 
Presion& Presion::operator=(const Presion& other){
    if (this != &other){
        MedicionBase::operator=(other); 
        presionEstatica = other.presionEstatica; 
        presionDinamica = other.presionDinamica; 
    }
    return *this; 
} 

//imprime los valores de la medicion
void Presion::imprimir() const{
    cout << "Presion Estatica: " << presionEstatica << endl; 
    cout << "Presion Dinamica: " << presionDinamica << endl; 
    cout << "Tiempo: " << *tiempoMedicion << endl;
} 

//escribe los datos en un archivo
void Presion::serializar(ofstream& out) const{ 
    out << *tiempoMedicion << " " << presionEstatica << " " << presionDinamica << endl;
} 

//lee los datos desde un archivo
void Presion::deserializar(ifstream& in){ 
    float tiempo; 
    in >> tiempo >> presionEstatica >> presionDinamica; 
    tiempoMedicion = make_unique<float>(tiempo);
}