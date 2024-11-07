/*
Remover Espacios en Blanco
Escribe un programa que elimine todos los espacios en blanco de una cadena.
    - Pista: Usar un bucle para recorrer la cadena y construir una nueva cadena sin espacios.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    // Variable para almacenar la nueva cadena
    string nuevaCadena;
    /*
    RECORRE CADA CARACTER DE LA CADENA
    Compara el caracter actual de la posicion 'i' con el espacio. Si no es un espacio ejecuta el bloque de codigo de if.
        Al final de cada iteracion se incrementa en 1, lo que permite pasar al siguente caracter de la cadena.
        */
    for (int i = 0; i < cadena.length(); i++)
    {
        if (cadena[i] != ' ')
        {
            // Se utiliza el operador de concatenacion '+' para unir
            nuevaCadena += cadena[i];
        }
    }
    cout << "Nueva cadena sin espacios: " << nuevaCadena;
    return 0;
}