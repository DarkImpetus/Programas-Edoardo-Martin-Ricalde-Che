#include "juego.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>

using namespace std;

juego::juego()
{
    //ctor
}

juego::~juego()
{
    //dtor
}


int juego::numaleatorio() //metodo para generar un numero al azar, esto es para seleccionar una palabra al azar de las 10 disponibles
{
    int num;
    srand(time(NULL));
    num = 1 + rand() % (11 - 1);
    return num;
}
void juego::gamestart(char x [], int medida) //estructura general del juego
{
    char muestra [medida];
    char asterisco [] = "*";
    int restavidas = 0;
    int vidas = 0;
    int seguir = 1;
    int ganar = 0;

    for (int a = 0; a < medida; a++) //crea un arreglo de la misma medida que la palabra a buscar, solo que está lleno de asteriscos
    {
        muestra [a] = asterisco [0];
    };

    char letra;

    while ((vidas < 5)&&(seguir > 0)) //sistema para asegurar que se pueda volver a jugar, con la condición de que se reinicien las vidas si el usuario gana y que si pierde se acabe en ese instante el juego
    {
        for (int a = 0; a < medida; a++)//imprime el arreglo de asteriscos, si el usuario ya le atino a alguna letra, aparecera sustituida la posicion correspondiente
        {
            cout << muestra [a];
        }
        cout << "\n";
        cout << "introduzca una letra: ";
        cin >> letra;

        for (int a = 0; a < medida; a++)//analiza si la letra introducida coincide o no con alguna de la palabra a buscar
        {
            if (letra == x[a])//parte de analisis
            {
                muestra [a] = letra;//si acierta sustituye la letra en el lugar correspondiente
            }
            else
            {
                restavidas++;//por la naturaleza del juego, si una la letra introducida no coincide con la primera, pero si con la ultima el usuario no debe perder

            }
        }
        if (restavidas < (medida))// Entonces, para determinar si la letra no estuvo definitivamente basta con checar si restavidas coincide con el largo de la palabra
        {
            cout << "Le atinaste!\n";//Mensaje si le atina
            restavidas = 0;//restavidas se resetea para la siguiente comparación
        }
        else
        {
            if (vidas < 5)
            {
                cout << "Esa letra no esta, intenta de nuevo!\n";//Mensaje si falla
            }
            vidas++;
            restavidas=0;//restavidas se resetea para la siguiente comparación
        }
        for (int a = 0; a < medida; a++) //sistema para cerrar el juego al ganar
        {
            if (muestra[a] == asterisco[0])//si todos los elementos de muestra son asteriscos, ganar se mantiene en cero
            {
                ganar = 0;
            }
            else //De otro modo ganar toma el valor del numero de letras que existan actualmente en el arreglo
            {
                ganar++;
            }
        }
        if (ganar == medida)//si todas las letras han sido descubiertas (si no quedan asteriscos)
        {
            seguir = 0; //se cerrara el juego
        }
        else
        {
            ganar = 0;//se reiniciara el vlor de ganar para la siguiente comparacion
        }
    }
    if ((vidas == 5))//cuando se cierre el juego debe decir si gana o pierde
    {
        cout << "Has agotado tus vidas, se acabó el juego!\n";//si acabo sus vidas, mensaje de derrota
    }
    else
    {
        cout << "Felicidades, ganaste!\n";//de lo contrario, mensaje de victoria
    }

};
