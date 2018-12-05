#include <iostream>
#include <string>
#include <stdlib.h>
//Edoardo Martin Ricalde Che
//Unidad 3: pilas y colas
//ejercicio 1
//Descripcion: En este programa invierte una cadena usando una pila
using namespace std;

struct nodo{
      char dato;
      struct nodo *sgte;
};

typedef struct nodo *TPila;

/*                      Creacion del Nodo
------------------------------------------------------------------*/

TPila crearNodo(char x)
{
      TPila newNodo = new(struct nodo);
      newNodo->dato = x;
      return newNodo;
}


/*                      Apilacion
------------------------------------------------------------------*/
void push(TPila &top, char x)
{
     TPila aux = crearNodo(x);
     aux->sgte = top;
     top = aux;
}


/*                      Desapilacion
------------------------------------------------------------------*/
char pop(TPila &top)
{
     int c ;
     TPila aux;

     aux = top ;
     c = aux->dato;   // asignacion del primer valor de la pila
     top = aux->sgte ;
     delete(aux);
     return c;
}

/*                      se invierte la cadena
------------------------------------------------------------------*/
void invertirCadena( TPila &p, string &cad )
{
     /* funcion para el copiado de caracteres a la pila */
     for(int i=0; i<cad.size(); i++)
          push(p, cad[i]);

     /* Desapilacion y remplanzando de caracteres en la cadena */
     for(int i=0; i<cad.size(); i++)
          cad[i] = pop( p );

}


int main()
{
    TPila pila = NULL;    // se crea la pila
    string cad;

    cout<<"\n\t\tINVERTIR CADENA USANDO PILA (STACK) \n\n";

    cout << " Ingrese palabra: ";
    getline(cin, cad);

    invertirCadena( pila, cad );

    cout << "\n\n Cadena invertida: " << cad <<endl;

    cout<<"\n\n ";
    system("pause");
    return 0;
}
