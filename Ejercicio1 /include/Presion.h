#include "IMediciones.h"
#include "MedicionBase.h"

class Presion: public MedicionBase {
public: 
    float presionEstatica; 
    float presionDinamica; 

    Presion();
    Presion(float p, float q, float t);
    Presion(const Presion& other); 
    Presion& operator=(const Presion& other); 

    void imprimir() const override; 
    void serializar(ofstream&) const override;
    void deserializar(ifstream&) override; 

};
