#include <iostream>
#include <string>
#include "Billetes.h"
//Nombre del alumno: Edoardo Martin Ricalde Che
//Unidad 2
//Ejercicio 3
//Este programa desgloza el cambio de una compra en los billetes y monedas minimas para la entrega

using namespace std;

int main()
{
    int compra, pago, cam;
    Billetes b;
    cout << "Inserte la precio de la compra: $";
    cin >> compra;//Aqui se solicita el precio total de la compra
    cout << "\nInserte el monto de pago: $";
    cin >> pago;//Aqui se solicita el pago para saldar la compra
    cam = pago - compra;//Se realiza una resta para determinar el cambio que se le debe entregar al cliente
    while (cam <= 0)//Este While esta en dado caso de el pago no pueda saldar el monto total de la compra
    {
        cout << "\nEl pago debe ser mayor que la compra, inserte el pago nuevamente: $";
        cin >> pago;
        cam = pago - compra;
    }
    cout << "Su cambio es: " << cam << endl << endl;
    b.Cambio(cam);//Aqui se llama la funcion billetes

    return 0;
}
