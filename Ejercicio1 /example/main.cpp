#include "../include/SaveFlightData.h"
#include <fstream> 

int main(){
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);
    //crea un objeto de tipo SaveFlightData con la posicion y presion anterior
    SaveFlightData datos(posicion,presion);

    cout << "-----Datos Originales-----" << endl;
    datos.imprimir();
    
    //abre un archivo binario de salida para guardar los datos
    ofstream outFile("mediciones.bin");
    datos.serializar(outFile);
    outFile.close();

    SaveFlightData datosLeidos;
    //abre el archivo binario de entrada para leer los datos
    ifstream inFile("mediciones.bin");
    //lee (deserializa) los datos desde el archivo
    datosLeidos.deserializar(inFile);
    inFile.close();

    std::cout << "\n-----Datos Leídos del Archivo-----" << endl;
    datosLeidos.imprimir();

    return 0;
}
