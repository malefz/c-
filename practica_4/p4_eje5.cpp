/*
Escribir una función que determine
si un número es par o impar.
Recibe un número entero como parámetro y
devuelve 1 si es par, y 0 si es impar.
*/

#include <iostream>
using namespace std;

int par(int numero)
{
    if (numero % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    cout << "Ingrese el numero: ";
    cin >> num;
    if (par(num))
    {
        cout << "El numero es par.";
    }
    else
    {
        cout << "El numero es impar.";
    }
    return 0;
}