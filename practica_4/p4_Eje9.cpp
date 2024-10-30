/*
Escribir una función que calcule el valor absoluto de un número.
La función debe recibir un número entero y devolver su valor absoluto.
Nota: El valor absoluto de un número es el valor sin signo negativo o positivo, es decir el valor absoluto de X se representa como |X|,
 y de igual manera el valor absoluto de –X se representa como |X|.
*/

#include <iostream>
using namespace std;

int valorAbsoluto(int numero)
{
    if (numero < 0)
    {
        return -numero; // Si es negativo, lo convertimos a positivo
    }
    return numero; // Si es positivo, lo devolvemos tal cual
}

int main()
{
    int numero;

    cout << "Introduce un numero entero: ";
    cin >> numero;

    int resultado = valorAbsoluto(numero);
    cout << "El valor absoluto de " << numero << " es " << resultado << endl;

    return 0;
}
