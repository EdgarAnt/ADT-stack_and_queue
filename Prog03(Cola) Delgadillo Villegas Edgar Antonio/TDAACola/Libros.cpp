#include "Libros.h"
#include <iostream>
using namespace std;

Libros::Libros()
{
    //ctor
    nombre = "-";
    precio = 0;
}

Libros::~Libros()
{
    //dtor
}

void Libros::setNombre(const string& valor)
{
    nombre = valor;
}

string Libros::getNombre() const
{
    return nombre;
}

float Libros::getPrecio() const
{
    return precio;
}

void Libros::setPrecio(float valor)
{
    precio = valor;
}


// metodos para las sobrecargas
// Para datos de salida
ostream& operator <<(ostream& os, const Libros& obj)
{
    os <<"\n\t Marca: "<<obj.getNombre()<<endl;
    os <<"\t Precio: $"<<obj.getPrecio()<<endl;

    return os;
}

// Para datos de entrada
istream& operator >>(istream& is, Libros& obj)
{
    string nombre;
    float precio;

    cout<<"Nombre del libro: "<<endl;
    getline(is, nombre);
    cout <<"Precio: ";
    is >> precio;

    obj.setNombre(nombre);
    obj.setPrecio(precio);

    return is;
}
