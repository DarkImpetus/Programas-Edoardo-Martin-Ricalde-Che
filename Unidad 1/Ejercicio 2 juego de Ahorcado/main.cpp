#include <iostream>
#include "juego.h"
#include <string>

using namespace std;
//Nombre del alumno: Edoardo Martin Ricalde Che
//Unidad 1
//Ejercicio 2
//Este programa permite jugar una partida de ahorcado usando arreglos de tipo char y clases.

int main()
{
    char palabra1 [] ="ovolactocrudinecrosifografivegano";//posibles palabras a adivinar
    char palabra2 [] ="otorrinolaringologo";
    char palabra3 [] ="tlacuache";
    char palabra4 [] ="youtube";
    char palabra5 [] ="gallo";
    char palabra6 [] ="pegamento";
    char palabra7 [] ="google";
    char palabra8 [] ="programacion";
    char palabra9 [] ="elefante";
    char palabra10 [] ="guzman";
    int medida;
    int continuar = 0;
    int start;


    juego jugador;

    cout << "Bienvenido al juego de ahorcado\n";
    cout << "Presiona 1 para empezar y 0 para salir\n";
    cin >> start;

    if (start == 1)//este "If" sirve para que si el usuario no quiere jugar se cierre el juego
    {

        //reglas del juego
        cout << "En este juego usted intentara adivinar una palabra al azar introduciendo una sola letra a la vez\n";
        cout << "La dificultad y longitud de las palabras puede variar, asi que puede salir una palabra extrema o una muy facil\n";
        cout << "Se mostrara en pantalla una fila de asteriscos representando cada letra de la palabra\n";
        cout << "Por cada letra que acierte se sustituira el/los asteriscos correspondientes\n";
        cout << "Si falla al adivinar una letra se le restara una vida, el juego inicia con 5 vidas\n";
        cout << "Con esto dicho, que comience el juego!\n";
        cout << "En esta ocasion la palabra es:\n";
    while (continuar < 1)//sistema para que el juego se repita si el usuario asi lo desea
    {

    switch (jugador.numaleatorio()) //Aqui se selecciona la palabra al azar con base a un numero al azar
    {
    case 1:
        {
            medida = 33;
            jugador.gamestart(palabra1,medida);
            break;
        }
    case 2:
        {
            medida = 19;
            jugador.gamestart(palabra2, medida);
            break;
        }
    case 3:
        {
            medida = 9;
            jugador.gamestart(palabra3, medida);
            break;
        }
    case 4:
        {
            medida = 7;
            jugador.gamestart(palabra4, medida);
            break;
        }
    case 5:
        {
            medida = 5;
            jugador.gamestart(palabra5, medida);
            break;
        }
    case 6:
        {
            medida = 9;
            jugador.gamestart(palabra6, medida);
            break;
        }
    case 7:
        {
            medida = 6;
            jugador.gamestart(palabra7, medida);
            break;
        }
    case 8:
        {
            medida = 12;
            jugador.gamestart(palabra8, medida);
            break;
        }
    case 9:
        {
            medida = 8;
            jugador.gamestart(palabra9, medida);
            break;
        }
    case 10:
        {
            medida = 6;
            jugador.gamestart(palabra10, medida);
            break;
        }
    }

    cout << "Quieres volver a jugar? 0 (cero) para si, 1 para no:"; //aqui el usuario decide si quiere volver a jugar
    cin >> continuar;

    };
    }

    return 0;
}
