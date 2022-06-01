#include "Nodo.h"

Nodo::Nodo()
{
    //ctor
    dato.setNombre("-");
    dato.setPrecio(0);
    sig = nullptr;
}

Nodo::~Nodo()
{
    //dtor
}


