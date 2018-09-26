#include <iostream>
#include <stdlib.h>
#include "procedimientos.h"
using namespace std;

//Nombre del alumno: Edoardo Martin Ricalde Che
//Unidad 1
//Ejercicio 3
//Este programa realiza operaciones con numero naturales a traves de objetos

int main()
{
    bool bucle;
    int a,b,opcion;
    bool bucle2;
    bucle2 =true;
    cout << "Bienvenido a operaciones con numeros naturales" << endl;
    cout << "Introduzca los valores de a y b" << endl;
   do{
    cout << "introduzca a\n";
    cin >> a;
    cout << "introduzca b\n";
    cin >> b;
     do {
        bucle = true;
    cout << "a es: "<< a<<"\n";
    cout << "b es: "<< b<<"\n";

    cout << "Escoja la operacion que desea realizar:\n";


    cout << "1 para sumar\n";
    cout << "2 para la diferencia\n";
    cout << "3 para ver si es cero\n";
    cout << "4 para ver si es igual \n";
    cout << "5 para ver cual es menor \n";
    cout << "6 para ver el antecesor\n";
    cout << "7 para ver el sucesor\n";
    cout << "8 para cambiar a por cero\n";
    cout << "9 para cambiar b por cero\n";
    cout << "10 para poner otros valores a y b\n";
    cout << "11 cualquier tecla para salir\n";



    cin >> opcion;

    procedimientos p;


    switch (opcion){
    case 1:

        cout << "La suma de  a+b es: ";
        cout <<p.sumar(a,b)<<"\n";

   system("pause");
    system("cls");
    break;
    case 2:
        cout <<"la resta de a-b es: ";
        cout <<p.diferencia(a,b)<<"\n";
        cout <<"la resta de b-a es: ";
        cout <<p.diferencia(b,a)<<"\n";
    system("pause");
    system("cls");
    break;
    case 3:
      p.escero(a,b);
    system("pause");
    system("cls");
    break;
    case 4:
      p.igual(a,b);
    system("pause");
    system("cls");
    break;
    case 5:
      p.menor(a,b);
    system("pause");
    system("cls");
    break;
    case 6 :
      p.antecesor(a,b);
    system("pause");
    system("cls");
    break;
    case 7:
      p.sucesor(a,b);
    system("pause");
    system("cls");
    break;
    case 8:
     cout <<"a ahora es cero\n";

      a=p.cero();
    system("pause");
    system("cls");
     break;
    case 9:
    cout << "b ahora es cero\n\n";
   b=p.cero();
    system("pause");
    system("cls");
    break;
    case 10:
         bucle=false;
      break;
    case 11:
        bucle2=false;
        bucle=false;
        break;
    }
    system("cls");
    }while(bucle);
 }while (bucle2);
    return 0;
}

