#pragma once 
#include <vector>
#include <iostream>
#include <string> 
#include <concepts> //para el if cons
using namespace std; 

template <typename T> 
class Datos{
public: 
    Datos() = default; 
    vector<T> datos;
    void agregar(const T& dato);
    string formatear();

}; 

