#include <iostream>
#include "Libros.h"
#include "Pila.h"
using namespace std;

int opc, opc2;
int main()
{
    Pila *pila=new Pila;
    Libros l;


    string marca;

    do
    {
        cout<<"-----------------------------------------------------------------------------"<<endl;
        cout<<"|                                 Libros                                    |"<<endl;
        cout<<"-----------------------------------------------------------------------------"<<endl;
        cout<<"1) Insertar libro(push)\n"<<endl;
        cout<<"2) Eliminar libro(pop)\n"<<endl;
        cout<<"3) Buscar\n"<<endl;
        cout<<"4) Top\n"<<endl;
        cout<<"5) Vacia\n"<<endl;
        cout<<"6) Inicializa\n"<<endl;
        cout<<"7) Tamanio\n"<<endl;
        cout<<"8) Vaciar\n"<<endl;
        cout<<"9) Mostrar\n"<<endl;
        cout<<"0) Salir\n"<<endl<<endl;
        cout<<"Opcion: ";
        cin >> opc;
        cin.ignore();

        system("cls");

        switch (opc)
        {
            case 1:
                cout << "Insertar en Pila" <<endl<<endl;
                cin >> l;
                pila->Insertar(l);
                break;
            case 2:
                cout << "Eliminar en Pila" <<endl<<endl;
                if (pila->Vacia()==1)
                    cout<<"La pila esta vacia"<<endl;
                else
                {
                    cout<<"Tope eliminado: "<<endl;
                    pila->Eliminar();
                }
                break;
           case 3:
//               cout << "Buscar en Pila" <<endl<<endl;
//                if (pila->Vacia()==1)
//                    cout<<"La pila esta vacia"<<endl;
//                else
//                {
//                    cout<<"Ingresa el libro: ";
//                    getline(cin, nombre);
//                    cin.ignore();
//                    pila->Buscar(nombre);    Buscar no es necesario
//                }
                break;
            case 4:
                cout << "Top Pila" <<endl<<endl;
                if (pila->Vacia()==1)
                    cout<<"La pila esta vacia"<<endl;
                else
                    pila->Top();
                break;
            case 5:
                cout << "Vacia" <<endl<<endl;
                if (pila->Vacia()==1)
                    cout<<"La pila esta vacia"<<endl;
                else
                    cout<<"La pila no esta vacia"<<endl;
                break;
            case 6:
                cout << "Inicializar Pila" <<endl<<endl;
                if (pila->Vacia())
                {
                    cout<<"Pila esta vacia"<<endl;
                }
                else
                {
                        pila->Inicializa();

                }
                break;
            case 7:
                cout << "Tamano de Pila" <<endl<<endl;
                cout <<"El tamanio de la pila es: " <<pila->Tamanio()<<endl;
                break;
            case 8:
                cout << "Vaciar Pila" <<endl<<endl;
                if (pila->Vacia()==1)
                    cout<<"La pila esta vacia"<<endl;
                else
                    pila->Vaciar();
                break;
            case 9:
                cout << "Mostrar Toda la Pila" <<endl<<endl;
                if (pila->Vacia())
                    cout<<"Pila vacia, no tienes elementos para mostrar"<<endl;
                else
                {
                    pila->MostrarTodo();
                }
                break;
            case 0:
                break;
            default:
                cout << "Opcion Invalida"<<endl;
                break;
        }

        cout <<endl;
        system("Pause");
        system("cls");

    }
    while(opc != 0);

    return 0;
}
