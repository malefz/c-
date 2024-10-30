/*
Escribir una función que devuelva el mayor de dos números enteros.
Debe recibir dos enteros y devolver el mayor de ellos.
*/

#include <iostream>
using namespace std;

int mayor(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
        return num2;
}
int main()
{
    int num1, num2;
    cout << "Ingrese el primer numero:\n";
    cin >> num1;
    cout << "Ingrese el segundo numero:\n";
    cin >> num2;
    int num_mayor = mayor(num1, num2);
    cout << "El mayor es: " << num_mayor;
    return 0;
}