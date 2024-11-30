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
    Autos() {
        marca = "Sin marca";
        modelo = "Sin modelo";
        año = 0;
        velocidadMax = 0;
    }

    Autos(string _marca, string _modelo, int _año, int _velocidadMax) {
        marca = _marca;
        modelo = _modelo;
        año = _año;
        velocidadMax = _velocidadMax;
    }

    void mostrarDatos() const {
        cout << "Marca: " << marca << ", Modelo: " << modelo
             << ", Año: " << año << ", Velocidad Máxima: " << velocidadMax << " km/h" << endl;
    }

    int getAño() const {
        return año;
    }

    int getVelocidadMax() const {
        return velocidadMax;
    }
};

void mostrarListaAutos(Autos autos[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay autos ingresados." << endl;
        return;
    }

    cout << "\nLista de autos:\n" << endl;
    for (int i = 0; i < cantidad; i++) {
        cout << i + 1 << ". ";
        autos[i].mostrarDatos();
    }
}

void mostrarAutoMasNuevo(Autos autos[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay autos ingresados." << endl;
        return;
    }

    int indiceMasNuevo = 0;
    for (int i = 1; i < cantidad; i++) {
        if (autos[i].getAño() > autos[indiceMasNuevo].getAño()) {
            indiceMasNuevo = i;
        }
    }

    cout << "\nEl auto más nuevo es:" << endl;
    autos[indiceMasNuevo].mostrarDatos();
}

int main() {
    const int MAX_AUTOS = 10;
    Autos autos[MAX_AUTOS];
    int cantidad = 0;

    int opcion;
    do {
        cout << "Menu:\n";
        cout << "1. Agregar auto\n";
        cout << "2. Ver lista de autos\n";
        cout << "3. Ver el auto mas nuevo\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                if (cantidad >= MAX_AUTOS) {
                    cout << "No se pueden agregar más autos. Límite alcanzado." << endl;
                    break;
                }

                string marca, modelo;
                int año, velocidadMax;
                cout << "Ingrese la marca del auto: \n";
                cin >> marca;
                cout << "Ingrese el modelo del auto: \n";
                cin >> modelo;
                cout << "Ingrese el año del auto: \n";
                cin >> año;
                cout << "Ingrese la velocidad máxima del auto: \n";
                cin >> velocidadMax;

                autos[cantidad] = Autos(marca, modelo, año, velocidadMax);
                cantidad++;  
                break;
            }
            case 2:
                mostrarListaAutos(autos, cantidad);
                break;
            case 3:
                mostrarAutoMasNuevo(autos, cantidad);
                break;
            case 4:
                cout << "Gracias por ingresar autos en nuestra plataforma, hasta luego." << endl;
                break;
            default:
                cout << "Esta opcion no corresponde, volve a intentarlo." << endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}