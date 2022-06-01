#include "Cola.h"
#include "Libros.h"
#include "Nodo.h"
using namespace std;

Cola::Cola()
{
    t=nullptr;
    h=nullptr;
}

Cola::~Cola()
{
}


void Cola::Eliminar()
{
    Libros p;
    p=h->dato;
    Nodo *aux=h;

    if(h==t)
    {
        h=nullptr;
        t=nullptr;
    }
    else
    {
        h=h->sig;
    }
    delete aux;
}


void Cola::Insertar(Libros s)
{
    Nodo *tmp=new Nodo();
    tmp->dato=s;
    tmp->sig=nullptr;

    if(Vacia()==1)
    {
        h=tmp;
    }
    else
        t->sig=tmp;
    t=tmp;
}

bool Cola::Vacia()
{
    if (h==nullptr)
        return true;
    else
        return false;
}

void Cola::Inicializa(void)
{
    h=NULL;
    t=NULL;
}


void Cola::Ultimo()
{
    cout <<"Nombre: "<<t->dato.getNombre()<<endl;
    cout <<"Precio:"<<t->dato.getPrecio()<<endl;
}



void Cola::Primero()
{
    cout <<"Marca: "<<h->dato.getNombre()<<endl;
    cout <<"Precio: "<<h->dato.getPrecio()<<endl;
}


void Cola::Vaciar()
{
     Libros s;
     s=h->dato;
    Nodo *aux = h;

    while (aux)
    {
        h=h->sig;
        delete aux;
        aux = h;
    }
    cout <<"Pila eliminada"<<endl;
}


int Cola::Tamanio()
{
    int contador = 0;
    Nodo *aux=h;

    while(aux)
    {
        contador++;
        aux=aux->sig;
    }
    return contador;
}

void Cola::MostrarTodo()
{
    Nodo *aux = h;
    cout<<"Libros en la Pila "<<endl;
    while(aux != NULL)
    {
        cout<<"Nombre: "<<aux->dato.getNombre()<<endl;
        cout<<"Precio: "<<aux->dato.getPrecio()<<endl;
        aux = aux->sig;
    }

}
