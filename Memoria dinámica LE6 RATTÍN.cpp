#include <iostream>
#include <string>
using namespace std;

struct Mascota {
    string nombre;
    int felicidad;
    int energia;
};

void MostrarEstado(const Mascota &mascota) {
    cout << "\nEl estado de " << mascota.nombre << ":\n";
    cout << "Felicidad: " << mascota.felicidad << "/100\n";
    cout << "Energía: " << mascota.energia << "/100\n";
}

void Alimentar(Mascota &mascota) {
    cout << mascota.nombre << " está comiendo.\n";
    mascota.energia += 10;
    if (mascota.energia > 100) mascota.energia = 100;
    mascota.felicidad += 5;
    if (mascota.felicidad > 100) mascota.felicidad = 100;
    cout << mascota.nombre << " está más feliz y tiene más energía.\n";
}

void Jugar(Mascota &mascota) {
    cout << mascota.nombre << " está jugando.\n";
    mascota.energia -= 10;
    if (mascota.energia < 0) mascota.energia = 0;
    mascota.felicidad += 15;
    if (mascota.felicidad > 100) mascota.felicidad = 100;
    cout << mascota.nombre << " tiene menos energía pero aumentó su felicidad.\n";
}

int main() {
    Mascota *MiMascota = new Mascota;

    cout << "¡Gracias por adoptar!\n";
    cout << "Ingresa un nombre para tu nueva mascota: ";
    getline(cin, MiMascota->nombre);
    MiMascota->felicidad = 50;
    MiMascota->energia = 50;

    int opcion;
    do {
        cout << "\n¿Qué quieres hacer con " << MiMascota->nombre << "?\n";
        cout << "1. Ver estado de " << MiMascota->nombre << "\n";
        cout << "2. Alimentar a " << MiMascota->nombre << "\n";
        cout << "3. Jugar con " << MiMascota->nombre << "\n";
        cout << "4. Salir\n";
        cout << "Opción: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                MostrarEstado(*MiMascota);
                break;
            case 2:
                Alimentar(*MiMascota);
                break;
            case 3:
                Jugar(*MiMascota);
                break;
            case 4:
                cout << "Gracias por adoptar a " << MiMascota->nombre << ", ahora se va a dormir.\n";
                break;
            default:
                cout << "La opción no existe, intenta nuevamente (1-4).\n";
        }
    } while (opcion != 4);

    delete MiMascota;
    return 0;
}
