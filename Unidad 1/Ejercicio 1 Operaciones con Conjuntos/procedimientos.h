#ifndef PROCEDIMIENTOS_H
#define PROCEDIMIENTOS_H
#include <iostream>
#include <string>

using namespace std;


class Procedimientos
{
    public:
        Procedimientos();
        void inter(int a2[],int b2[],int elem);
        void unio (int a2[],int b2[],int elem);
        void rest_ab (int a2[],int b2[],int elem );
        void conjunto_vacio_A (int a2[],int elem );
        void conjunto_vacio_B (int b2[],int elem );

    protected:

    private:
};

#endif // PROCEDIMIENTOS_H
