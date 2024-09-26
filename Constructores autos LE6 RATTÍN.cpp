#include <iostream> 
#include <string>  
using namespace std; 

class Autos { 
private:
    string marca; 
    string modelo; 
    int año; 

public:
    Autos() { // Este es el constructor por defecto. No toma ningún parámetro.
        marca = "Sin marca"; 
        modelo = "Sin modelo"; 
        año = 0; 
    }

    Autos(string _marca, string _modelo, int _año) { // Este es el constructor parametrizado. Toma tres parámetros.
        marca = _marca; 
        modelo = _modelo; 
        año = _año; 
    }

    void mostrarDatos() { 
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", Año: " << año << endl;
    }
};

int main() { 
    Autos auto1; 
    auto1.mostrarDatos(); 

    Autos auto2("Toyota","Yaris", 2020); 
    auto2.mostrarDatos(); 
    
    Autos auto3("Volkswagen","Polo", 2016); 
    auto3.mostrarDatos();

    return 0; 
}
