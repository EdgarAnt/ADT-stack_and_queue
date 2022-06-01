#include <iostream>
#include "Libros.h"
#include "Cola.h"
using namespace std;


int main()
{
    Cola *cola=new Cola;
    Libros l;

    int opc, opc2;
    string nombre;

    do
    {

        cout<<"-----------------------------------------------------------------------------"<<endl;
        cout<<"|                                 Libros                                    |"<<endl;
        cout<<"-----------------------------------------------------------------------------"<<endl;
        cout <<"1)  Insertar(queue)\n"<<endl;
        cout <<"2)  Eliminar(dequeue)\n"<<endl;
        cout <<"3)  Primero\n"<<endl;
        cout <<"4)  Ultimo\n"<<endl;
        cout <<"5)  Vacia\n"<<endl;
        cout <<"6)  Inicoaliza\n"<<endl;
        cout <<"7)  Tamano\n"<<endl;
        cout <<"8)  Vaciar\n"<<endl;
        cout <<"9)  Mostrar\n"<<endl;
        cout <<"0)  Salir"<<endl;
        cout<<"Opcion: ";
        cin >> opc;
        cin.ignore();   //  borrarbuffer

        system("cls");  //  Limpiar pantalla-> Limpiar menu de pantalla

        switch (opc)
        {
            case 1:
                cout << "Insertar en Cola" <<endl<<endl;
                cin >> l;
                cola->Insertar(l);
                break;
            case 2:
                cout << "Eliminar en Cola" <<endl<<endl;
                if (cola->Vacia()==1)
                    cout<<"La cola esta vacia"<<endl;
                else
                {
                    cout<<"Se elimino el primer dato ingresado: "<<endl;
                    cola->Eliminar();
                }
                break;
            case 3:
                cout << "Primero de Cola" <<endl<<endl;
                if (cola->Vacia()==1)
                    cout<<"La cola esta vacia"<<endl;
                else
                    cola->Primero();
                break;
            case 4:
                cout << "Ultimo de Cola" <<endl<<endl;
                if (cola->Vacia()==1)
                    cout<<"La cola esta vacia"<<endl;
                else
                    cola->Ultimo();
                break;
            case 5:
                cout << "Vacia" <<endl<<endl;
                if (cola->Vacia()==1)
                    cout<<"La cola esta vacia"<<endl;
                else
                    cout<<"La cola no esta vacia"<<endl;
                break;
            case 6:
                cout <<"Inicializar Cola" <<endl<<endl;
                if (cola->Vacia())
                {
                    cout<<"Cola esta vacia"<<endl;
                }
                else
                {
                    cola->Inicializa();
                }
                break;
            case 7:
                cout << "Tamano de Cola" <<endl<<endl;
                cout <<"El tamanio de la pila es: " <<cola->Tamanio()<<endl;
                break;
            case 8:
                cout << "Vaciar Cola" <<endl<<endl;
                if (cola->Vacia()==1)
                    cout<<"La Cola esta vacia"<<endl;
                else
                    cola->Vaciar();
                break;
            case 9:
                cout << "Mostrar Toda la Cola" <<endl<<endl;
                if (cola->Vacia())
                    cout<<"Cola vacia"<<endl;
                else
                {
                    cola->MostrarTodo();
                }
                break;
            case 0:
                break;
            default:
                cout << "Opcion incorrecta"<<endl;
                break;
        }

        cout <<endl;
        system("Pause");
        system("cls");

    }
    while(opc != 0);

    return 0;
}
