#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

struct pilas
{
int d;
pilas *a;
}*c,*e;

void menu(void);
void ingresar(void);
void sacar (void);
void actualizar_pila(void);

main()
{
menu();
}
void menu(void)
{
int opc;
    for(;;)
        {
            cout << "Bienvenido al programa de demostracion de pilas\n";
            std::cout << "\n 1. Ingresar datos";
            std::cout << "\n 2. Sacar datos";
            std::cout << "\n 0. Terminar";
            std::cout << "\n Ingrese opcion: ";std::cin>>opc;
            switch(opc)
                {
                    case 1:
                        ingresar();
                        break;
                    case 2:
                        sacar();
                        break;
                    case 0:
                        exit(1);
                    default:
                        std::cout<<"\n Opcion no valida!!";
                        break;
                }
            actualizar_pila();
            std::cout<<"\n\nOprima una tecla para continuar";
            getch();
        }
}

void ingresar (void)
{
 if(!c)
 {
 c=new(pilas);
 std::cout<<"Ingrese elemento: ";
 std::cin>>c->d;
 c->a=NULL;
 return;
 }

 e=new(pilas);
 std::cout<<"\nIngrese elemento: ";
 std::cin>>e->d;
 e->a=c;
 c=e;
}

void sacar(void)
{
 if(!c)
 {
 std::cout<<"\n\nNo hay elementos!!";
 return;
 }

 e=new(pilas);
 e=c;
 std::cout<<"\n\nElemento eliminado: " <<e->d;
 c=e->a;
 delete(e);

}
void actualizar_pila(void)
{
 int i,ca=0;
 e=c;
 while(e)
 {
 ca++;
 e=e->a;
 }

for(i=0;i<=ca;i++)
 {
 std::cout<<" ";
 }
 //muestro lo que tiene la pila!!
 i=0;
 e=c;
 while(e)
 {
 std::cout<<"\n";
 std::cout<<++i<<" - "<<e->d << endl;
 e=e->a;
 }
}
