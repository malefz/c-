/*
Escribir una función que reciba dos números y devuelva
 su media aritmética.
Recibe dos números de tipo float y devuelve el resultado.
Nota: La media aritmética es la suma de todos los números
 divididos la cantidad de números sumados.
*/

#include <iostream>
using namespace std;

int aritmetica(float num1, float num2)
{
    return (num1 + num2) / 2;
}
int main()
{
    float num1, num2;
    cout << "Digite el primer numero:";
    cin >> num1;
    cout << "Digite el segundo numero:";
    cin >> num2;
    int mediaAritmetica = aritmetica(num1, num2);
    cout << "La media aritmetica es: " << mediaAritmetica;
    return 0;
}