#include "include/SaveFlightData.h"
#include <fstream> 

int main(){
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);
    SaveFlightData datos(posicion,presion);

    cout << "-----Datos Originales-----" << endl;
    datos.imprimir();
    
    ofstream outFile("mediciones.txt");
    datos.serializar(outFile);
    outFile.close();

    SaveFlightData datosLeidos;
    ifstream inFile("mediciones.txt");
    datosLeidos.deserializar(inFile);
    inFile.close();

    std::cout << "\n-----Datos Leídos del Archivo-----" << endl;
    datosLeidos.imprimir();

    return 0;
}
