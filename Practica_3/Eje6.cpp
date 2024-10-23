/*
6. Invertir un Número
Crea un programa que invierta los dígitos de un número entero.
Usa un bucle while para extraer los dígitos y reconstruir el número invertido.
*/

#include <iostream>
using namespace std;

int main()
{
    int num, dig, invertir = 0;
    cout << "Codifique el numero: ";
    cin >> num;
    while (num > 0)
    {
        dig = num % 10;
        invertir = (invertir * 10) + dig;
        num = num / 10;
    }
    cout << "imprimir inversion: " << invertir << endl;
    return 0;
}