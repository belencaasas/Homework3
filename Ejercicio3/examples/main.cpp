#include <iostream>
#include "../include/Datos.h"
#include "../include/Json.h"

int main() {
    Datos<double> datos;
    Datos<string> strings;
    Datos<vector<int>> ints;

    datos.agregar(1.3);
    datos.agregar(2.1);
    datos.agregar(3.2);

    strings.agregar(string("Hola"));
    strings.agregar(string("Mundo"));

    ints.agregar(vector<int>{1, 2});
    ints.agregar(vector<int>{3, 4});

    Json::agregar({"vec_doubles:", datos.formatear()});
    Json::agregar({"palabras:", strings.formatear()});
    Json::agregar({"listas:", ints.formatear()});

    Json::imprimir();

    return 0;
}
