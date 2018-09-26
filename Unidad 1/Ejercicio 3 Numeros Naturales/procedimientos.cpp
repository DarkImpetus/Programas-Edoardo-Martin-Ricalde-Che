#include "procedimientos.h"

procedimientos::procedimientos()
{
    //ctor
}

int procedimientos::sumar (int a,int b){
return a+b;
};
int procedimientos::diferencia (int a, int b){
return a-b;
};
void procedimientos::escero(int a,int b){
    if (a==0){
       cout << "El elemento a es igual a cero  \n";
        };
    if (b==0){

        cout <<"El elemento b es igual a cero \n";
    };
    if ((a&&b)!=0){

        cout << "ninguno  de los elementos es cero \n";
}

};
void procedimientos::igual (int a,int b){


if (a==b){

cout << "Los elementos a y b son iguales \n";

}else {

cout << "Los elementos a y b no son iguales \n";

}
};
void procedimientos::menor (int a,int b){

if (a < b){

    cout << "a es menor que b \n";
}else {
cout << "b es menor que a \n";
}
};
void procedimientos::antecesor(int a, int b){

cout << "el antecesor de a es : "<< a-1<<"\n";
cout << "el antecesor de b es : "<< b-1<<"\n";
};
void procedimientos::sucesor (int a,int b){
cout <<"el sucesor de a es : "<<a+1<<"\n";
cout <<"el sucesor de b es : "<<b+1<<"\n";


};
