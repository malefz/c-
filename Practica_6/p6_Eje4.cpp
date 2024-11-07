/*
Contar Vocales
Escribe un programa que pida al usuario ingresar una cadena y luego cuente cuántas vocales contiene.
    -  Requisitos:
        o Usar std::string para almacenar la cadena.
        o Considerar las vocales tanto en minúsculas como en mayúsculas.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cadena;
    // contador de vocales
    int contador = 0;
    cout << "Ingrese cadena: "; // solicita al usuario que ingrese una cadena
    getline(cin, cadena);
    // se declara una variable c para almacenar cada caracter de la cadena
    for (char c : cadena)
    {
        switch (c) // verifica si el caracter es una vocal
        {
        case 'A':
            break;
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            contador++; // si es vocal, incrementa
            break;
        }
    }
    cout << "Contiene " << contador << " vocales" << endl;
    return 0;
}
