#include "../include/Json.h"
#include <sstream>

string Json<double>::formatear(const vector<double>& vec) {
    ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        oss << vec[i];  // imprime sin ceros innecesarios
        if (i < vec.size() - 1) oss << ", ";
    }
    oss << "]";
    return oss.str();
}

string Json<string>::formatear(const vector<string>& vec) {
    string result = "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        result += "\"" + vec[i] + "\"";
        if (i < vec.size() - 1) result += ", ";
    }
    result += "]";
    return result;
}

string Json<vector<int>>::formatear(const vector<vector<int>>& listas) {
    string result = "[\n";
    for (size_t i = 0; i < listas.size(); ++i) {
        result += "  [";
        for (size_t j = 0; j < listas[i].size(); ++j) {
            result += to_string(listas[i][j]);
            if (j < listas[i].size() - 1) result += ", ";
        }
        result += "]";
        if (i < listas.size() - 1) result += ",\n";
    }
    result += "\n]";
    return result;
}

template <typename T>
string Json<T>::construirJson(const Datos<T>& datos) {
    string json = "{\n";
    json += "  \"vec_doubles\" : " + formatear(datos.vec_doubles) + ",\n";
    json += "  \"palabras\" : " + formatear(datos.palabras) + ",\n";
    json += "  \"listas\" : " + formatear(datos.listas) + "\n";
    json += "}";
    return json;
}
