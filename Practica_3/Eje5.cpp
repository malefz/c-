/*
5. Sumar Dígitos de un Número
Usa un bucle while para sumar los dígitos de un número entero.
El programa debe seguir dividiendo el número por 10 hasta que todos los dígitos hayan sido sumados.
*/

#include <iostream>
using namespace std;

int main()
{
    int numero, suma = 0;
    cout << "Codifique el numero: ";
    cin >> numero;

    while (numero > 0)
    {
        suma = suma + (numero % 10);
        numero = numero / 10;
    }
    cout << "La suma de todos sus digitos es: " << suma << endl;
    return 0;
}