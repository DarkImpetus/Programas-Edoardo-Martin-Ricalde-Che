#include <iostream>
#include "procedimiento .h"
#include <stdlib.h>
using namespace std;

//Nombre del alumno: Edoardo Martin Ricalde Che
//Unidad 2
//Ejercicio 2
//Este programa transorma un numero de base 10 a binario


int main()
{
    procedimiento p;
    int b;

    bool bucle = false;
    do {
    cout << "Introduzca un numero entero de base 10 para convertirlo en binario: ";
    cin >> b;//se pide el numero a transformar
    cout <<"El numero " << b << " en binario seria:\n";
    p.proceso(b);//aqui llamo a la funcion
    cout << "\n";
    cout << "Presione 1 para salir\n";
    cout << "Presione 0 para tranformar otro numero\n";
    cin >> bucle; //se pide la condicion del bucle

    system("pause"); //punto de espera para el usuario, para no sorprenderlo borrando todo de repente
    system("cls");//punto de borrado de las lineas escritas en pantalla, limpia la pantalla para mayor comodidad del usuario

    }while (!bucle);//se decide si se repite ono
    return 0;
}
