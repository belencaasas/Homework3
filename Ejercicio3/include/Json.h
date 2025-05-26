#pragma once 
#include <string> 
#include <vector>
#include <utility>
#include <concepts>
#include <type_traits>
#include "Datos.h"

class Json{
public: 
    static string construirJson();
    static void agregar(const pair<string,string>);

    static void imprimir();

    static vector<pair<string,string>> data;
};