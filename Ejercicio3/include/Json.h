#pragma once 
#include <string> 
#include <vector>
#include "Datos.h"

template <typename T>
class Json{
public: 
    static string construirJson(const Datos<T>& datos);
private: 
    static string formatear(const vector<T>& vec);
};