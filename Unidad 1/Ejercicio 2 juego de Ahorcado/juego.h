#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include <string>
using namespace std;

class juego
{
    public:
        juego();
        virtual ~juego();

        int numaleatorio();
        void gamestart (char x [], int medida);

    protected:

    private:
};

#endif // JUEGO_H
