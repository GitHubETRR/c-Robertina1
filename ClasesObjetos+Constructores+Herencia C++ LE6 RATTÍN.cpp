#include <iostream>
#include <string>
using namespace std;

class Peluqueria{
    protected:
    string servicio;
    double precio;
    string descripcion;
    
    public:
    Peluqueria(string s, double p, string d):servicio(s), precio(p), descripcion(d){}
    
    void mostrar_informacion()const{
        cout<<"Servicio:"<<servicio<<"\nPrecio:"<< precio<<"\nDescripcion del servicio:"<<descripcion<<endl;
    }
    
    string obtenerServicio()const{return servicio;}
    double obtenerPrecio()const{return precio;}
    string obtenerDescripcion()const{return descripcion;}
};

class Corte: public Peluqueria{
    public:
    Corte():Peluqueria("Corte de cabello femenino", 9000.00, "Corte para renovar y aumentar la comodidad."){}
};
class Tintura: public Peluqueria{
    public:
    Tintura():Peluqueria("Tintura completa", 30000.00, "Tinte profesional para animarte a los cambios."){}
};

class Alisado: public Peluqueria{
    public:
    Alisado():Peluqueria("Alisado", 20000.00, "Alisado duradero con los mejores productos."){}
};

class Nutricion: public Peluqueria{
    public:
    Nutricion():Peluqueria("Nutricion", 15000.00, "Tratamiento intenso para nutrir tu cabello y no luchar mas con el peine."){}
};

class Manicura: public Peluqueria{
    public:
    Manicura():Peluqueria("Servicio de manicuria", 8000.00, "Servicio de semipermanente en manos para darte un mimo."){}
};

void mostrar_servicios(){
    cout<<"Servicios disponibles en la peluqueria:\n";
    cout<<"1. Corte de cabello femenino\n";
    cout<<"2. Tintura completa\n";
    cout<<"3. Alisado\n";
    cout<<"4. Nutricion\n";
    cout<<"5. Manicuria\n";
}

void mostrar_precios(){
    Corte corte;
    Tintura tintura;
    Alisado alisado;
    Nutricion nutricion;
    Manicura manicura;
    
    cout<<"Precio de los distintos servicios que ofrece la peluqueria:\n";
    cout<<corte.obtenerServicio()<<":$"<<corte.obtenerPrecio()<<endl;
    cout<<tintura.obtenerServicio()<<":$"<<tintura.obtenerPrecio()<<endl;
    cout<<alisado.obtenerServicio()<<":$"<<alisado.obtenerPrecio()<<endl;
    cout<<nutricion.obtenerServicio()<<":$"<<nutricion.obtenerPrecio()<<endl;
    cout<<manicura.obtenerServicio()<<":$"<<manicura.obtenerPrecio()<<endl;
}

void mostrar_descripcion(){
    Corte corte;
    Tintura tintura;
    Alisado alisado;
    Nutricion nutricion;
    Manicura manicura;
    
    cout<<"Descripcion sobre cada servicio de la peluqueria:\n";
    corte.mostrar_informacion();
    cout<<endl;
    tintura.mostrar_informacion();
    cout<<endl;
    alisado.mostrar_informacion();
    cout<<endl;
    nutricion.mostrar_informacion();
    cout<<endl;
    manicura.mostrar_informacion();
    cout<<endl;
}

int main(){
    int opcion;
    
    do{
        cout<<"Mostrar menu principal sobre la peluqueria:\n";
        cout<<"1. Conocer los servicios que ofrece la peluqueria\n";
        cout<<"2. Conocer el precio de cada servicio\n";
        cout<<"3. Ver la descripcion de cada servicio\n";
        cout<<"4.Salir\n";
        cin>>opcion;
        
        switch(opcion){
            case 1:
            mostrar_servicios();
            break;
            case 2:
            mostrar_precios();
            break;
            case 3:
            mostrar_descripcion();
            break;
            case 4:
            cout<<"Gracias por consultar en nuestra peluqueria. ¡Te esperamos!"<<endl;
            break;
            default:
            cout<<"Las opciones van del (1-4) si ingresaste otro numero no podras ver ninguna informacion sobre la peluqueria. Volve a intentarlo."<<endl;
        }
    } while (opcion!=4);
    return 0;
}