#pragma once  
#include <fstream>
using namespace std; 

class IMediciones{ 
    public: 
        virtual void serializar(ofstream&) const = 0; 
        virtual void deserializar(ifstream&) = 0;
        virtual ~IMediciones() = default;
};