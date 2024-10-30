/*
Escribir una función que calcule la factorial de un número.
El programa debe recibir un número entero positivo y devolver su factorial.
Debe incluir el manejo de casos base.
*/

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    { // caso base
        n = 1;
    }
    else
    {
        n = n * factorial(n - 1);
    }
    return n;
}

int main()
{
    int num;
    cout << "Ingrese numero:";
    cin >> num;
    int result = factorial(num);
    cout << "El factorial es: " << result;
}