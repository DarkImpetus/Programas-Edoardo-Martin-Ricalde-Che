#ifndef BILLETES_H
#define BILLETES_H
#include <iostream>
#include <string>

using namespace std;


class Billetes
{
    public:
        Billetes();

        void Cambio (int n); //Aqui se declara la funcion Cambjo con una variable llamada "n"

    protected:

    private:
        int x;//Se declara una variable en Private para ayudar en el proceso de la funcion
};

#endif // BILLETES_H

