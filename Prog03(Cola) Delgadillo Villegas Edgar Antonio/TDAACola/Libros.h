#ifndef LIBROS_H
#define LIBROS_H

#include <iostream>
using namespace std;

class Libros
{
    public:
        Libros();
        ~Libros();

        void setNombre(const string& valor);
        string getNombre() const;

        float getPrecio() const;
        void setPrecio(float valor);

        friend ostream& operator <<(ostream& os, const Libros& obj);
        friend istream& operator >>(istream& is, Libros& obj);

   // protected:

    private:
        string nombre;
        float precio;
};

#endif // LIBROS_H
