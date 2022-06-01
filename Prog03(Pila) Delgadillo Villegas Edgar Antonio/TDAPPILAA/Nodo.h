#ifndef NODO_H
#define NODO_H

#include <iostream>
#include "Libros.h"

using namespace std;

class Nodo
{
    public:
        Nodo();
        ~Nodo();
        Libros dato;
        Nodo *sig;

};

#endif // NODO_H
