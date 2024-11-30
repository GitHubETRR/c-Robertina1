#include <iostream> 
#include <string>  
using namespace std; 

class Autos { 
private:
    string marca; 
    string modelo; 
    int año; 
    int velocidadMax; 

public:
    // Constructor por defecto
    Autos() { 
        marca = "Sin marca"; 
        modelo = "Sin modelo"; 
        año = 0; 
        velocidadMax = 0; // Valor por defecto para la velocidad máxima.
    }

    // Constructor parametrizado
    Autos(string _marca, string _modelo, int _año) { 
        marca = _marca; 
        modelo = _modelo; 
        año = _año; 
        velocidadMax = 0; 
    }

    // Sobrecarga del constructor parametrizado que también toma la velocidad máxima
    Autos(string _marca, string _modelo, int _año, int _velocidadMax) { 
        marca = _marca; 
        modelo = _modelo; 
        año = _año; 
        velocidadMax = _velocidadMax; 
    }

    void mostrarDatos() { 
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", Año: " << año << endl;
    }

    // Sobrecarga de mostrarDatos que también incluye la velocidad máxima
    void mostrarDatos(int _velocidadMax) { 
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", Año: " << año 
             << ", Velocidad Máxima: " << _velocidadMax << " km/h" << endl;
    }
};

int main() { 
    Autos auto1; 
    auto1.mostrarDatos(); // No tiene velocidad máxima.

    // Usamos el constructor parametrizado (sin velocidad máxima)
    Autos auto2("Toyota", "Yaris", 2020); 
    auto2.mostrarDatos();

    // Usamos el constructor parametrizado (con velocidad máxima)
    Autos auto3("Volkswagen", "Polo", 2016, 180); 
    auto3.mostrarDatos(180); 
    
    Autos auto4("Peugeot", "208", 2012, 200);
    auto4.mostrarDatos(200);

    return 0; 
}