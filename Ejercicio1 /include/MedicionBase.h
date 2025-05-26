#pragma once 
#include <memory>
#include <iostream>
using namespace std; 

class MedicionBase{ 
    protected: 
        unique_ptr<float> tiempoMedicion; 
    public: 
        MedicionBase();
        MedicionBase(float tiempo);
        MedicionBase(const MedicionBase& other); 
        MedicionBase& operator=(const MedicionBase& other);

        virtual void serializar(ofstream&) const = 0;
        virtual void deserializar(ifstream&) = 0;

        float getTiempo() const;
        virtual void imprimir() const = 0; 
        virtual ~MedicionBase() = default;

};