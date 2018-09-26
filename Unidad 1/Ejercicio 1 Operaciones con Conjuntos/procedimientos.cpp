#include "Procedimientos.h"
#include <iostream>
#include <string>

using namespace std;

Procedimientos::Procedimientos()
{
    //ctor
}

//Checa si el conjunto A es un conjunto vacio
void Procedimientos::conjunto_vacio_A(int a2[],int elem )
{
    int conta = 0;
    for (int i=0; i<(elem);i++)
    {
        if (a2[i]==0)
        {
            conta++;
        }

    }

    if (conta == elem)
    {
        cout << "El conjunto A es un conjunto vacio" << endl;
    }
    else
    {
        cout << "El conjunto A no es un conjunto vacio" << endl;
    }

}

//Checa si el conjunto B es un conjunto vacio
void Procedimientos::conjunto_vacio_B(int b2[],int elem )
{
    int conta = 0;
    for (int i=0; i<(elem);i++)
    {
        if (b2[i]==0)
        {
            conta++;
        }

    }

    if (conta == elem)
    {
        cout << "El conjunto B es un conjunto vacio" << endl;
    }
    else
    {
        cout << "El conjunto B no es un conjunto vacio" << endl;
    }
}

//Esta funcion realiza la intersecion de los conjuntos
void Procedimientos::inter(int a2[],int b2[],int elem)
{
    int pibo[elem];
    int conta = 0;
    for (int i=0; i<elem;i++)
    {
        for (int j=0;j<elem;j++ )
        {
            if (a2[i]==b2[j])
            {
                pibo[conta]=b2[j];
                conta++;
            }
        }
    }
    for (int i=0; i<conta;i++)
    {
        cout << pibo[i]<<",";
    }
}

//Esta funcion realiza la resta de A-B de los conjuntos
void Procedimientos::rest_ab(int a2[], int b2[], int elem)
{
    int cont;
    int k=0;
    int pibo[elem];
    for (int i=0;i<elem;i++)
    {
        cont =0;
        for (int j=0;j<elem;j++ )
        {
            if  (a2[i]==b2[j])
            {
                cont =cont +1;
            }
        }
        if (cont==0)
        {
            pibo[k]=a2[i];
            k=k+1;
        }
    }
    for (int i=0;i<k;i++)
    {
        cout << pibo[i]<<",";
    }
}

//realiza la operacion de Union de los conjuntos
void Procedimientos::unio(int a2[],int b2[],int elem)
{
    int cont;
    int k=0;
    int pibo[elem];
    for (int i=0;i<elem;i++)
    {
        cont =0;
        for (int j=0;j<elem;j++ )
        {
            if  (a2[i]==b2[j])
            {
                cont =cont +1;
            }
        }
        if (cont==0)
        {
            pibo[k]=a2[i];
            k=k+1;
        }
    }
    int c = k+elem;
    for (int i=k;i<c;i++)
    {
        pibo[i]=b2[i-k];
    }
    for (int i=0;i<c;i++)
    {
        cout << pibo[i]<<",";
    }
}
