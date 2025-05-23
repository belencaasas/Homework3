#include "../include/MedicionBase.h"

MedicionBase::MedicionBase() : tiempoMedicion(make_unique<float>(0.0f)) {}
MedicionBase::MedicionBase(float tiempo) : tiempoMedicion(make_unique<float>(tiempo)) {}
MedicionBase::MedicionBase(const MedicionBase& other) : tiempoMedicion(make_unique<float>(*other.tiempoMedicion)) {}

MedicionBase& MedicionBase::operator=(const MedicionBase& other){
    if(this != &other){
        tiempoMedicion = make_unique<float>(*other.tiempoMedicion);
    }
    return *this;
}

float MedicionBase::getTiempo() const { 
    return *tiempoMedicion;
}