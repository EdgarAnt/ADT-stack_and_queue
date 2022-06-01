#ifndef COLA_H
#define COLA_H
#include "Nodo.h"
#include "Libros.h"
using namespace std;

class Cola
{
    public:
        Cola();
        ~Cola();
        bool Vacia();
        void Inicializa(void);
        int Tamanio();
        void Vaciar();
        void Eliminar();
        void Primero();
        void MostrarTodo();
        void Ultimo();
        void Insertar(Libros);




    private:
        Nodo *t;
        Nodo *h;

};

#endif // COLA_H
