#include "Cola.h"



/*
declaracion de funcion para encolar los datos que se apilaron en una pila
*/
void Cola :: insertar(int elemento)
{
    NodoCola* nuevo;
    nuevo = new NodoCola (elemento);
    if (colaVacia())
    {
        frente = nuevo;
    }
    else
    {
        final -> siguiente = nuevo;
    }
    final = nuevo;
}

/*funcion que se usa poara mostrar los datos encolados a partir del ultimo elemento apilado*/
int Cola :: mostrar()
{
    if (colaVacia())
        throw "Cola vacía, no se puede extraer.";
    int aux = frente -> elemento;
    NodoCola* a = frente;
    frente = frente -> siguiente;
    delete a;
    return aux;
}

int Cola :: frenteCola()
{
    if (colaVacia())
        throw "Cola vacía";
    return frente -> elemento;
}



int Cola :: colaVacia()
{
    return frente == NULL;
}
