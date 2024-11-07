/*
Ejercicio 2: Invertir una Cadena
Escribe un programa que pida al usuario ingresar una cadena y luego imprima la cadena en
orden inverso.
    - Requisitos:
        o Usar un std::string para almacenar la cadena.
        o Imprimir la cadena en orden inverso utilizando un bucle for.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Declara una variable de tipo string para almacenar la entrada del usuario
    string cadena;
    // Muestra un mensaje en la consola pidiendo al usuario que ingrese una cadena
    cout << "Ingrese una cadena: ";
    // Lee una linea completa de texto y la almacena en "cadena"
    getline(cin, cadena);
    // Muestra un mensaje antes de imprimir la cadena invertida
    cout << "Cadena invertida: ";
    // Bucle para recorrer la cadena desde el final hasta el principio
    for (int i = cadena.length() - 1; i >= 0; i--)
    {
        cout << cadena[i]; // Imprime el caracter en la posicion "i"
    }
    cout << endl; // Imprime una nueva linea al final
    return 0;
}

// cadena.length(): este metodo devuelve la longitud de la cadena (el numero total de caracteres que contiene)