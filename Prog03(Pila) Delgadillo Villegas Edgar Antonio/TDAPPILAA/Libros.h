#ifndef SMARTPHONES_H
#define SMARTPHONES_H

#include <iostream>
using namespace std;

class Libros
{
    public:
        Libros();
        ~Libros();


        float getPrecio() const;
        void setPrecio(float valor);

        void setNombre(const string& valor);
        string getNombre() const;


        friend ostream& operator <<(ostream& os, const Libros& obj);
        friend istream& operator >>(istream& is, Libros& obj);


    private:
        string nombre;
        float precio;
};

#endif // SMARTPHONES_H
