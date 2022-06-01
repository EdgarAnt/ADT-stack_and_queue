#ifndef PILA_H
#define PILA_H
#include <iostream>
#include "Libros.h"
#include "Nodo.h"

class Pila
{
    public:
        Pila();
        ~Pila();
        void Inicializa(void);
        int Tamanio();
        void Vaciar();
        void MostrarTodo();
        void Buscar(string);
        void Top();
        void Insertar(Libros);
        void Eliminar();
        bool Vacia();



    private:
        Nodo *t;
};

#endif // PILA_H
