/*
Ejercicio 1: Longitud de una Cadena
Escribe un programa que pida al usuario ingresar una cadena de texto.
Luego, el programa debe mostrar la longitud de esa cadena utilizando un C-string y
un std::string.
    Requisitos:
        o Usar un C-string para la primera parte del ejercicio.
        o Usar std::string para la segunda parte.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Parte 1: Usar C-string
    char texto[100]; // declara un arreglo de caracteres con espacio para 100 caracteres, q se usara para almacenar la entrada del usuario
    cout << "Ingrese un texto: ";
    cin.getline(texto, 100);
    // contador de numeros de caracteres que compone en el texto
    int longitudCstring = 0;
    // Contar longitud manualmente (sin usar strlen)
    while (texto[longitudCstring] != '\0')
    {
        longitudCstring++;
    }
    cout << "La longitud del C-string es: " << longitudCstring << endl;
    // Parte 2: Usar std::string
    string cadena;
    cout << "Ingrese otra cadena: ";
    getline(cin, cadena); // lee una linea completa de entrada del usuario y la almacena en la variable cadena.

    // muestra en la consola la longitud de la cadena almacenada en "cadena", usando el metodo "length()" de la clase "std::string"

    cout << "La longitud del std::string es: " << cadena.length() << endl;
    return 0;
}
