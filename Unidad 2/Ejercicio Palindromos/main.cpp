#include <iostream>
#include <string.h>
#include "procesos palindromos.h"
using namespace std;

int main()
{
    string palabracompleta;
    int espacios = 0;
    int medida = 0;
    bool pal;

    cout << "introduzca la palabra o frase a analizar: ";
    getline(cin,palabracompleta);

        for (int i =0; i < palabracompleta.length(); i++)//averigua cuantas letras y cuantos espacios tiene la frase/palabra introducida
        {
            if (palabracompleta[i] == ' ')
            {
                espacios++;
                medida++;
            }
            else
            {
                medida++;
            }
        }
    char frasepura [medida-espacios];//se genera un arreglo con medida exacta para almacenar la frase o palabra original, esto para facilitar la comparacion
    int fin = medida - espacios-1; //se saca el valor de la ultima casilla por donde se empezara la comparacion

    procesos_palindromos p;//instanciamiento de objeto
    p.generaexacto(frasepura, medida, palabracompleta);//se pasan el arreglo exacto, las casillas originales y la palabra con espacios para llenar el arreglo vacio con puras letras, brincandose os espacios

    pal = p.decision(frasepura, 0, fin);//se invoca a la función "decision" que devuelve el valor de verdadero si la palabra es palindromo, o falso en caso contrario

    if (pal == true)//mensajes de "Verdadero o Falso" para informarle al usuario del resultado del analisis de la palabra ingresado
    {
        cout << "\nLa palabra es Palindromo\n";//Mensaje si "Verdadero"
    }
    else
    {
        cout << "\nLa palabra no es Palindromo\n";//Mensaje de "Falso"
    }




    return 0;
}
