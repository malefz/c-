/*
Escribir una función que imprima un saludo personalizado.
La función debe recibir el nombre de la persona como parámetro
y luego imprimir “Hola, [nombre]”.
*/

#include <iostream>
using namespace std;

void imprimir_Saludo(string nombre)
{
    cout << " Hola, " << nombre << "!";
}

int main()
{
    string nombre;
    cout << "Ingrese nombre de la persona: \n ";
    cin >> nombre;
    imprimir_Saludo(nombre);
    return 0;
}