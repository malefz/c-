/*
Suma de Números del 1 al N Crea un programa que sume todos los números del 1 al N usando un bucle while.Imprime la suma al final.
*/

#include <iostream>

using namespace std;

int main()
{
    int N, suma = 0;
    int i = 1;
    cout << "Codifique el N numero: ";
    cin >> N;

    while (i <= N)
    {
        suma += i;
        cout << "Ingrese el siguiente numero: ";
        cin >> i;
    }
    cout << "La suma de todos los numeros es: " << suma << endl;
    return 0;
}