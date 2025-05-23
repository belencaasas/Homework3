using namespace std; 
#include <iostream>
#include "../include/ProcesadorFigura.h"
#include "../include/circulo.h"
#include "../include/elipse.h"
#include "../include/rectangulo.h"

int main(){
    int opcion = 0; 
    do{
        cout << "---- AREAS ----" << endl;
        cout << "1. Calcular area de un Circulo " << endl;
        cout << "2. Calcular area de un Elipse" << endl;
        cout << "3. Calcular area de un Rectangulo" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion; 

        if(opcion < 1 || opcion > 4){
            cout << "Entrada invalida, ingrese un numero del 1 al 4." << endl;
        }

        switch (opcion){

            case 1: {
                double x,y,r; 
                cout << "Ingrese la posicion del centro (x): " << endl;
                cin >> x ;
                cout << "Ingrese la posicion del centro (y): " << endl;
                cin >> y;

                do{
                    cout << "Ingrese el radio: ";
                    cin >> r; 
                    if (r <= 0){
                        cout << "El radio debe ser mayor a 0." << endl;
                    }
                } while (r <= 0);

                Circulo c(x,y,r);
                cout << "Area del circulo: " << ProcesadorFigura<Circulo>::calcularArea(c) << endl;
                break;
            }

            case 2: {
                double x,y,a,b; 
                cout << "Ingrese la posicion del centro(x): " << endl ;
                cin >> x;
                cout << "Ingrese la posicion del centro (y): " << endl;
                cin >> y; 

                do {
                    cout << "Ingrese el semieje mayor (a): ";  
                    cin >> a; 
                    cout << "Ingrese el semieje menor (b): ";
                    cin >> b;

                    if (a <= b){
                        cout << "El semieje (a) debe ser mayor al semieje (b). Vuelve a ingresar los datos. " << endl;
                    }
                    else if (a <= 0 || b <= 0){
                        cout << "Los semiejes deben ser mayores a 0." << endl;
                    }
                    else if(a == b){
                        cout << "a y b no deben ser iguales ya que no seria un elipse." << endl; //PREGUNTAR
                    }
                } while (a <= b ||a <= 0 || b <= 0 || a == b);

                Elipse e(x,y,a,b);
                cout << "Area del elipse: " << ProcesadorFigura<Elipse>::calcularArea(e) << endl;
                break;
            }


            case 3: {
                double x,y,ancho,largo; 
                cout << "Ingrese la posicion del vertice inferior izquierdo (x): " << endl;
                cin >> x;
                cout << "Ingrese la posicion del vertice inferior izquierdo (y): " << endl;
                cin >> y; 

                do{
                    cout << "Ingrese el ancho: "; 
                    cin >> ancho; 
                    cout << "Ingrese el largo: "; 
                    cin >> largo;

                    if(ancho <= 0 || largo <= 0){
                        cout << "El ancho y el largo deben ser mayores a 0." << endl;
                    }
                    else if(ancho == largo){
                        cout << "El ancho y el largo no deben ser iguales ya que no seria un rectangulo." << endl;
                    }
                }while(ancho <= 0 || largo <= 0 || ancho == largo);

                Rectangulo r(x,y,ancho,largo);
                cout << "Area del rectangulo: " << ProcesadorFigura<Rectangulo>::calcularArea(r) << endl;
                break;
            }


            case 4: {
                cout << "Saliendo del programa..." << endl; 
                break;
            }

            default: 
                cout << "Opcion invalida, intente nuevamente" << endl;

        }

    } while (opcion != 4);
    return 0;
}