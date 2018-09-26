#include <iostream>
#include <string>
#include "Procedimientos.h"


using namespace std;
//Nombre del alumno: Edoardo Martin Ricalde Che
//Unidad 1
//Ejercicio 1
//Este programa realiza operaciones con conjuntos a traves de clases y arreglos

int main()
{
    int elem;
    int i;
    int opcion;
    int cerrar =1;
    Procedimientos p;
    cout << "PROGRAMA DE CONJUNTOS" << endl;
    cout <<"Introduzca el numero de elementos de los conjuntos A Y B\n";
    cin >>elem;
    int a[elem];
    int b[elem];

    //Realiza el llenado del conjunto A
    for (i=0;i<elem;i++)
    {
        cout <<"Llene el elemento "<<i+1<< " del conjunto A \n";
        cin >>a[i];
    }

    //Realiza el llenado del conjunto B
    for (i=0;i<elem;i++)
    {
        cout <<"Llene el elemento "<<i+1<< " del conjunto B \n";
        cin >>b[i];
    }

    cout << "\n";
    cout << "Los conjuntos son: \n";
    cout << "Conjunto A es : ";
    for (i=0;i<elem;i++)
    {
        cout <<a[i]<<",";
    }
    cout<<"\n";

    cout << "Conjunto B es :";
    for(int i=0;i<elem;i++)
    {
        cout <<b[i]<<",";
    }

    while (cerrar>0)
    {

    cout << "\n";
    cout << "\n";
    cout << "Elija la opcion que desea: " << endl;
    cout << "1.-La Interseccion" << endl;
    cout << "2.-La Union" << endl;
    cout << "3.-La Diferencia de A-B" << endl;
    cout << "4.-Checar si A es un conjunto Vacio" << endl;
    cout << "5.-Checar si B es un conjunto Vacio" << endl;
    cin >> opcion;


    switch (opcion)
    {
        case 1:
        cout << "La interseccion es: \n";
        p.inter(a,b,elem);
        cout << "\n";

        break;

        case 2:
        cout << "La union es : \n";
        p.unio(a,b,elem);
        cout << "\n";

        break;

        case 3:
        cout << "La diferencia de a -b es: \n";
        p.rest_ab(a,b,elem);

        break;

        case 4:
        cout << "Conjunto Vacio de A \n";
        p.conjunto_vacio_A(a,elem);

        break;

        case 5:
        cout << "Conjunto Vacio de B \n";
        p.conjunto_vacio_B(b,elem);


    }
    cout << "Quiere probar otra opcion? 1 Para si, 0 para No"  << endl;
    cin >> cerrar;
    }

    return 0;
}
