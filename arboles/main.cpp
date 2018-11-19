#include <iostream>
#include <stdlib.h>

using namespace std;

/*---------  Estructura del arbol  -------*/
typedef struct nodo{
     int nro;
     struct nodo *izq, *der;
}*ABB;

int numNodos = 0; // nummero de nodos del arbol ABB
int numK = 0, k;     //  nodos menores que un numero k ingresado


/* ---------- Estructura de la cola ---------*/
struct nodoCola{
    ABB ptr;
    struct nodoCola *sgte;
};
struct cola{
    struct nodoCola *delante;
    struct nodoCola *atras;
};

void inicializaCola(struct cola &q)
{
    q.delante = NULL;
    q.atras = NULL;
}

void encola(struct cola &q, ABB n)
{
     struct nodoCola *p;
     p = new(struct nodoCola);
     p->ptr = n;
     p->sgte = NULL;
     if(q.delante==NULL)
         q.delante = p;
     else
         (q.atras)->sgte = p;
     q.atras = p;
}

ABB desencola(struct cola &q)
{
    struct nodoCola *p;
    p = q.delante;
    ABB n = p->ptr;
    q.delante = (q.delante)->sgte;
    delete(p);
    return n;
}

ABB crearNodo(int x)
{
     ABB nuevoNodo = new(struct nodo);
     nuevoNodo->nro = x;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;

     return nuevoNodo;
}
void insertar(ABB &arbol, int x)
{
     if(arbol==NULL)
     {
           arbol = crearNodo(x);
           cout<<"\n\t  Insertado..!"<<endl<<endl;
     }
     else if(x < arbol->nro)
          insertar(arbol->izq, x);
     else if(x > arbol->nro)
          insertar(arbol->der, x);
}

void verArbol(ABB arbol, int n)
{
     if(arbol==NULL)
          return;
     verArbol(arbol->der, n+1);

     for(int i=0; i<n; i++)
         cout<<"   ";

     numNodos++;
     cout<< arbol->nro <<endl;

     verArbol(arbol->izq, n+1);
}

void verArbolmayor(ABB arbol, int n)
{
     if(arbol==NULL)
          return;
     verArbolmayor(arbol->der, n+1);

     for(int i=0; i<n; i++)
         cout<<"   ";

     numNodos++;
     cout << "Hay " << numNodos << " nodos hasta ahora";
     cout<< arbol->nro <<endl;
}

void verArbolmenor(ABB arbol, int n)
{
     if(arbol==NULL)
          return;

     for(int i=0; i<n; i++)
         cout<<"   ";

     numNodos++;
     cout << "Hay " << numNodos << " nodos hasta ahora";
     cout<< arbol->nro <<endl;

     verArbol(arbol->izq, n+1);
}

void verHojasderecha(ABB arbol, int n)
{
    if(arbol==NULL)
          cout<< arbol->nro <<endl;
          return;
     verArbol(arbol->der, n+1);
     numNodos++;
}

void verHojasizquierda(ABB arbol, int n)
{
    if(arbol==NULL)
	{
		cout<< arbol->nro <<endl;
		return;


	}
     else
	 {
	 	verHojasizquierda(arbol->izq, n+1);

	 }


}
bool busquedaRec(ABB arbol, int dato)
{
     int r=0;   // 0 indica que lo encontre

     if(arbol==NULL)
        return r;

     if(dato<arbol->nro)
         r = busquedaRec(arbol->izq, dato);

     else if(dato> arbol->nro)
         r = busquedaRec(arbol->der, dato);

     else
        r = 1;   // son iguales, lo encontre

     return r;
}

ABB unirABB(ABB izq, ABB der)
{
    if(izq==NULL) return der;
    if(der==NULL) return izq;

    ABB centro = unirABB(izq->der, der->izq);
    izq->der = centro;
    der->izq = izq;
    return der;
}

void elimina(ABB &arbol, int x)
{
     if(arbol==NULL) return;

     if(x<arbol->nro)
         elimina(arbol->izq, x);
     else if(x>arbol->nro)
         elimina(arbol->der, x);

     else
     {
         ABB p = arbol;
         arbol = unirABB(arbol->izq, arbol->der);
         delete p;
     }
}

int alturaAB(ABB arbol)
{
    int AltIzq, AltDer;

    if(arbol==NULL)
        return -1;
    else
    {
        AltIzq = alturaAB(arbol->izq);
        AltDer = alturaAB(arbol->der);

        if(AltIzq>AltDer)
            return AltIzq+1;
        else
            return AltDer+1;
    }
}

void recorrerxNivel(ABB arbol)
{
     struct cola q;
     inicializaCola(q);
     cout << "\t";

     if(arbol!=NULL)
     {
         encola(q, arbol);

         while(q.delante!=NULL)
         {
             arbol = desencola(q);
             cout << arbol->nro << ' ';

             if(arbol->izq!=NULL)
                 encola(q, arbol->izq);
             if(arbol->der!=NULL)
                 encola(q, arbol->der);
         }
     }
}

ABB arbolEspejo(ABB arbol)
{
    ABB temp;

    if(arbol!=NULL)
    {
          temp = arbol->izq;
          arbol->izq = arbolEspejo(arbol->der);
          arbol->der = arbolEspejo(temp);
    }
    return arbol;
}

void nodosMenoresQueK(ABB arbol, int n)
{
     if(arbol==NULL)
          return;
     nodosMenoresQueK(arbol->der, n+1);
     if(arbol->nro<k)
         numK++;
     nodosMenoresQueK(arbol->izq, n+1);

}

int contarHojas(ABB arbol)
{
        if (arbol==NULL)
        {
                return 0;
        }
        if ((arbol->der ==NULL)&&(arbol->izq ==NULL))
        {
                return 1;
        }
        else
        {
                return contarHojas(arbol->izq) + contarHojas(arbol->der);
        }
}
void menu()
{
     //system("cls");
     cout << "\n\t\t  ..[ ARBOL BINARIO DE BUSQUEDA ]..  \n\n";
     cout << "\t [1]  Insertar elemento                  \n";
     cout << "\t [2]  Mostrar arbol                      \n";
     cout << "\t [3]  Buscar elemento                    \n";
     cout << "\t [4]  Eliminar elemento                  \n";
     cout << "\t [5]  Mostrar recorrido desde hoja            \n";
     cout << "\t [6]  Contar hojas                       \n";
     cout << "\t [7]  Nodos mayores que la raiz               \n";
     cout << "\t [8] SALIR                              \n";

     cout << "\n\t Ingrese opcion : ";
}

void menu2()
{
     //system("cls");   // para limpiar pantalla
     cout << endl;
     cout << "\t [1] En Orden     \n";
     cout << "\t [2] Pre Orden    \n";
     cout << "\t [3] Post Orden   \n";
     cout << "\n\t     Opcion :  ";
}

int main()
{
    ABB arbol = NULL;
    int x;
    int op, op2;


    //system("color f9");   // poner color a la consola
    do
    {
          menu();  cin>> op;
          cout << endl;

          switch(op)
          {
               case 1:
                    cout << " Ingrese valor : ";  cin>> x;
                    insertar( arbol, x);
                    break;

               case 2:
                    verArbol(arbol, 0);
                    break;



               case 3:
                    bool band;

                    cout<<" Valor a buscar: "; cin>> x;

                    band = busquedaRec(arbol,x);

                    if(band==1)
                       cout << "\n\tEncontrado...";
                    else
                       cout << "\n\tNo encontrado...";
                    break;

               case 4:
                    cout<<" Valor a eliminar: "; cin>> x;
                    elimina(arbol, x);
                    cout << "\n\tEliminado..!";
                    break;


               case 5:
                    cout << "Recorrido desde hoja\n";
                    cout << "1. Hoja derecha\n";
                    cout << "2. Hoja izquierda\n";
                    cout << "Escoja la hoja: ";
                    cin >> op2;
                    switch (op2)
                    {
					case 1:
						cout << "El recorrido de la hoja derecha hasta la raiz es:\n";
						verArbolmayor(arbol,0);
						break;
					case 2:
						cout << "El recorrido de la hoja izquierda hasta la raiz es:\n";
						verArbolmenor(arbol,0);
						break;
                    }
                    break;


			   case 6:
					cout << "\nEl numero de hojas es: " << contarHojas(arbol) << "\n";
					break;

               case 7:
                    cout << "\nLos nodos mayores que la raiz son:\n";
                    verArbolmayor(arbol, 1);
                    cout << "Raiz^\n";


                    break;

               case 8:
                    exit(0);
          }
          cout<<"\n\n\n";
          //system("pause");  // hacer pausa y presionar una tecla para continuar
    }while(op!=11);

}
