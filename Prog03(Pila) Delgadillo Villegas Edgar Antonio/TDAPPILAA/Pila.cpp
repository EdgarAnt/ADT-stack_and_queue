#include "Pila.h"

Pila::Pila()
{
    t=nullptr;
    //ctor
}

Pila::~Pila()
{
    //dtor
}

void Pila::Inicializa()
{
    t= NULL;
}

bool Pila::Vacia()
{
    if (t==nullptr)
        return true;
    else
        return false;
}

int Pila::Tamanio()
{
    int contador=0;
    Nodo *aux;
    aux = t;
    while(aux!=NULL)
    {
        contador ++;
        aux = aux->sig;
    }
    return contador;
}

void Pila::Insertar(Libros s)
{
    Nodo *tmp=new Nodo();
    tmp->dato=s;
    tmp->sig = this->t;
    this->t = tmp;
}

void Pila::Eliminar()
{
    Nodo *aux = t;

    t = t->sig;
    delete(aux);
    aux=t;
    cout <<"\n\tDato eliminado"<<endl;

}

void Pila::Buscar(string marca)
{
    Nodo *aux = t;

    while (aux)
    {
        if(aux->dato.getNombre() == marca)
        {
            cout <<"\n\t Marca: "<<aux->dato.getNombre()<<endl;
            cout<<"\t Precio: $"<<aux->dato.getPrecio()<<endl;
            break;
        }
    }
    if(aux)
        cout <<"\n\t\tDato no encontrado"<<endl;
}

void Pila::Top()
{
    cout <<"\n\t Marca: "<<t->dato.getNombre()<<endl;
    cout<<"\t Precio: $"<<t->dato.getPrecio()<<endl;
}

void Pila::Vaciar()
{
    Nodo *aux = t;
    while (aux)
    {
        t=t->sig;
        delete aux;
        aux = t;
    }
    cout <<"\n\tPila eliminada"<<endl;
}

void Pila::MostrarTodo()
{
    Nodo *aux = this->t;

    cout<<"libros en la Pila "<<endl;
    while(aux != NULL)
    {
        cout <<"\n\t Marca: "<<aux->dato.getNombre()<<endl;
        cout<<"\t Precio: "<<aux->dato.getPrecio()<<endl;
        aux = aux->sig;
    }
}
