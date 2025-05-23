#include "../include/Datos.h"
#include <concepts>

template <typename T> 
void Datos<T>::agregar(const T& dato){
    if constexpr(same_as<T, double>){
        datos.push_back(dato);
    } else if constexpr(same_as<T, string>){
        datos.push_back(dato);
    } else if constexpr (same_as<T, vector<int>>) {
        datos.push_back(dato);
    } else {
        static_assert(!same_as<T, T>, "Tipo no soportado en agregar()");
    }
}

// Instanciaciones explícitas para tipos que usás:
template void Datos<double>::agregar(const double&);
template void Datos<string>::agregar(const string&);
template void Datos<vector<int>>::agregar(const vector<int>&);
