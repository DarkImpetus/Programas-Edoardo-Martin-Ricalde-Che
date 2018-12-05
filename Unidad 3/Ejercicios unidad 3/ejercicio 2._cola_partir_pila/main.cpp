#include <iostream>
#include "Pila.h"
#include "Cola.h"
#include "stdlib.h"

//Edoardo Martin Ricalde Che
//Unidad 3: pilas y colas
//ejercicio 2
//Descripcion: En este ejercicio se recibe una pila y con base a ella se crea una cola

using namespace std;

int x1,x2,x3,x4,x5;


void pila()
{

    Pila p1;

    p1.insertar(x1);
    p1.insertar(x2);
    p1.insertar(x3);
    p1.insertar(x4);
    p1.insertar(x5);

	cout<<"\n*****cima de la pila*****\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\n*****base de la pila*****\n\n";


}

void cola()
{
    Cola c1;

    c1.insertar(x1);
    c1.insertar(x2);
    c1.insertar(x3);
    c1.insertar(x4);
    c1.insertar(x5);

	cout<<"\n\nInicio->\t";
    cout<<c1.mostrar()<<"\t";
    cout<<c1.mostrar()<<"\t";
    cout<<c1.mostrar()<<"\t";
    cout<<c1.mostrar()<<"\t";
    cout<<c1.mostrar()<<"\t";
    cout<<"\t<-Fin\n\n";


}


int main()
{
	cout<<"ingrese 5 valores numericos enteros y al finalizar, presione cualquier tecla para procesar:\n";
    cin>>x1>>x2>>x3>>x4>>x5;
    system("pause");
    system("cls");
	cout<<"Los datos:\t"<<x1<<"\t"<<x2<<"\t"<<x3<<"\t"<<x4<<"\t"<<x5<<"\t"<<"fueron apilados:\n";
    pila();
    cout<<"\n De la misma manera se encolaron a partir del ultimo numero apilado ---> "<<(x5)<<":\n";
	cola();

    return 0;
}

