#include "../include/Json.h"

//inicializa el vector estatico que guarda pares clave-valor en formato string
vector<pair<string,string>> Json::data;

string Json::construirJson() {
    string json = "{ ";
    for (size_t i = 0; i < data.size(); i++) {
        if (i != 0) json += "  ";
        //agrega el par clave-valor: "clave": valor
        json += "\"" + data[i].first + "\"" + " : " + data[i].second;
        if (i != data.size() - 1) json += ",";
        json += "\n"; 
        
    }
    
    json += "}";
    return json;
}

void Json::agregar(const pair<string,string> aaa){
    data.push_back(aaa);
};

void Json::imprimir(){
    cout << construirJson() << endl;
}