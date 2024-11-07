/*
Comparar Cadenas
Escribe un programa que pida al usuario ingresar dos cadenas y luego determine si son iguales o diferentes. Realiza esto con C-strings y con std::string.
    - Requisitos:
        o Usar C-strings para la primera parte.
        o Usar std::string para la segunda parte.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1 parte: C-string
    char cadena1[20];
    char cadena2[20];
    cout << "Ingrese primer cadena de texto:";
    cin.getline(cadena1, 20);
    cout << "Ingrese segunda cadena de texto:";
    cin.getline(cadena2, 20);
    if (cadena1 == cadena2)
    {
        cout << "Son iguales";
    }
    else
    {
        cout << "No son iguales" << endl;
    }
    // 2 parte: usando C-string
    string texto1;
    string texto2;
    cout << "Ingrese otro texto:";
    getline(cin, texto1);
    cout << "Ingrese segundo texto:";
    getline(cin, texto2);
    if (texto1 == texto2)
    {
        cout << "Son iguales";
    }
    else
    {
        cout << "No son iguales";
    }
    return 0;
}