/*
Escribir una función que reciba un array y su tamaño,
y devuelva el mayor elemento del array.
Debe iterar a través del array para encontrar el
valor máximo.
*/

#include <iostream>
using namespace std;

// recorre el arreglo y devuelve el elemento mayor
int encontrarMayor(int array[], int tamaño)
{
    int max = array[0]; // inicializa el mayor con el primer elemento del array
    // iterar a traves del array
    for (int i = 1; i < tamaño; i++)
    {
        if (array[i] > max)
        {
            max = array[i]; // se actualiza el mayor si encontro el elemento mas grande
        }
    }
    return max; // retorna el mayor
}
int main()
{
    int tamaño;

    // pedir al usuario el tamaño del array
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tamaño;

    /*
    reservo un espacio en memoria para alamacenar "tamaño" valores enteros.
    El tamaño tambien permite acceder a los elementos usando indices
    */
    int array[tamaño]; // definir el arreglo con el tamaño dado

    // pedir al usuario que ingrese los elementos del arreglo
    cout << "Ingrese los elementos del array";
    cin >> array[tamaño];
    for (int i = 0; i < tamaño; i++)
    {
        cout << "Elemento: " << i + 1 << " : "; // comienza desde 1 en lugar de 0.
        cin >> array[i];
    }
    // llamar a la funcion para devolver el mayor
    int mayor = encontrarMayor(array, tamaño);
    cout << "El mayor elemento del arreglo es:" << mayor << endl;

    return 0;
}