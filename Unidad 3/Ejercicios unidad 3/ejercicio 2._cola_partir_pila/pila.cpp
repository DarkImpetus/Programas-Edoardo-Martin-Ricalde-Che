#include "Pila.h"


int Pila::pilaVacia()
{
    return cima == NULL;
}

/*
declaracion de funcion para apilar los datos que se usan para una cola
*/
void Pila::insertar(int elemento)
{
    NodoPila* nuevo;
    nuevo = new NodoPila(elemento);
    nuevo -> siguiente = cima;
    cima = nuevo;
}

/*funcion que se usa para mostrar los datos que se apilan*/
int Pila::mostrar()
{
    if (pilaVacia())
        throw "Pila vacía, no se puede extraer.";
    int aux = cima -> elemento;
    cima = cima -> siguiente;
    return aux;
}

/*funcion para ordenar datos hacia la cima*/
int Pila:: cimaPila()
{
    if (pilaVacia())
        throw "Pila vacía";
    return cima -> elemento;
}

