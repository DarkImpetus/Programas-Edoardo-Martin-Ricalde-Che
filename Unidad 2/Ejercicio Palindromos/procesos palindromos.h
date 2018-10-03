#ifndef PROCESOS PALINDROMOS_H
#define PROCESOS PALINDROMOS_H
#include <iostream>
#include <string.h>
using namespace std;

class procesos_palindromos
{
    public:
        procesos_palindromos();

        void generaexacto(char frasepura[], int medida, string palabracompleta);
        bool decision (char frasepura[], int ini, int fin);

    protected:

    private:
};

#endif // PROCESOS PALINDROMOS_H
