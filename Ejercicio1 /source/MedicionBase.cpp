#include "../include/MedicionBase.h"

MedicionBase::MedicionBase() : tiempoMedicion(make_unique<float>(0.0f)) {}
//constructor con tiempo, crea un puntero unico con el tiempo dado 
MedicionBase::MedicionBase(float tiempo) : tiempoMedicion(make_unique<float>(tiempo)) {}
MedicionBase::MedicionBase(const MedicionBase& other) : tiempoMedicion(make_unique<float>(*other.tiempoMedicion)) {}

//operador de asignacion por copia 
MedicionBase& MedicionBase::operator=(const MedicionBase& other){
    if(this != &other){
        tiempoMedicion = make_unique<float>(*other.tiempoMedicion);
    }
    return *this;
}

//getter del tiempo
float MedicionBase::getTiempo() const { 
    return *tiempoMedicion;
}