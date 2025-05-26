#include "../include/Datos.h"
#include <concepts>
#include <sstream>


template <typename T> 
void Datos<T>::agregar(const T& dato){
    // Si el tipo T es double, se permite agregarlo al vector
    if constexpr(is_same_v<T, double>){
        datos.push_back(dato);
    // Si el tipo T es string, se permite agregarlo al vector
    } else if constexpr(is_same_v<T, string>){
        datos.push_back(dato);
    // Si el tipo T es vector<int>, se permite agregarlo al vector
    } else if constexpr (is_same_v<T, vector<int>>) {
        datos.push_back(dato);
    //para cualquier otro tipo, tira un error
    } else {
        static_assert(!is_same_v<T, T>, "Tipo no soportado en agregar()");
    }
}

// Instanciaciones explícitas para tipos que usás:
template void Datos<double>::agregar(const double&);
template void Datos<string>::agregar(const string&);
template void Datos<vector<int>>::agregar(const vector<int>&); 

template<>
string Datos<double>::formatear() {
    ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < datos.size(); ++i) {
        oss << datos[i];  // imprime sin ceros innecesarios
        if (i < datos.size() - 1) oss << ", ";
    }
    oss << "]";
    return oss.str();
}

template<>
string Datos<string>::formatear() {
    string result = "[";
    for (size_t i = 0; i < datos.size(); ++i) {
        result += "\"" + datos[i] + "\"";
        if (i < datos.size() - 1) result += ", ";
    }
    result += "]";
    return result;
}

template<>
string Datos<vector<int>>::formatear() {
    string result = "[\n";
    for (size_t i = 0; i < datos.size(); ++i) {
        result += "  [";
        for (size_t j = 0; j < datos[i].size(); ++j) {
            result += to_string(datos[i][j]);
            if (j < datos[i].size() - 1) result += ", ";
        }
        result += "]";
        if (i < datos.size() - 1) result += ",\n";
    }
    result += "\n]";
    return result;
}
