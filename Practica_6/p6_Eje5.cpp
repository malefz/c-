/*
Búsqueda de Palabra en Texto
Escribe un programa que pida al usuario ingresar un texto largo y luego ingrese una palabra. El programa debe decir
si la palabra existe en el texto y en qué posición aparece la primera vez.
    -  Requisitos:
        o Usar std::string y el método .find().
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string texto_largo;
    string palabra;
    cout << "Ingrese un texto largo: ";
    getline(cin, texto_largo); // Lee una linea completa de texto
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    /*
    Busca la primera aparicion de una subcadena 'palabra', dentro del string 'texto_largo' y devuelve la posicion del primer caracter encontrado 'posicion'.
    Almacena el indice de la primera aparicion de la palabra en el texto.
    */
    int posicion = texto_largo.find(palabra);

     // Distinto de -1 porq si inicializo en 0 estaria comparando con la primera posicion de la cadena
    if (posicion != -1) 
    {
        cout << "La palabra se encuentra en la posicion: " << posicion << endl;
    }
    else
    {
        cout << "La palabra no fue encontrada.";
    }
    return 0;
}
