#include "procedimiento .h"

procedimiento ::procedimiento ()
{
    //ctor
}

void procedimiento::proceso (int n) {

if (n>=1 ){
  proceso(n/2);//aqui aplico la recursividad para dividir entre 2

    cout << n%2;//aqui imprimo el residuo del numero
   }
}
