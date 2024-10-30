/*
Escribir una función que calcule el cuadrado de un número entero.
La función debe recibir un número entero como parámetro y devolver su cuadrado
*/

#include <iostream>
using namespace std;

int cuadrado(int num)
{
    return num * 2;
}

int main()
{
    int num;
    cout << "Ingrese el numero:";
    cin >> num;
    int result = cuadrado(num);
    cout << "El cuadrado de " << num << " es " << result;
    return 0;
}
