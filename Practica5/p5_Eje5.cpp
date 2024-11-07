/*
Ejercicio 5: Funciones Recursivas y Variables Estáticas
Objetivo: Analizar el comportamiento de una variable estática dentro de una función
recursiva.
1. Escribe una función recursiva contarLlamadas que cuente cuántas veces ha sido llamada.

2. Utiliza una variable static dentro de la función para almacenar la cantidad de
llamadas.

3. Llama a la función varias veces desde main().
*/

#include <iostream>
using namespace std;
void contarLlamadas()
{
    static int llamadas = 0; // Variable estática
    llamadas++;
    cout << "Llamada número: " << llamadas << endl;
    if (llamadas < 5)
    {
        contarLlamadas(); // Llamada recursiva
    }
}
int main()
{
    contarLlamadas();
    return 0;
}

/*
¿Cómo afecta la variable estática al comportamiento de la función recursiva?
    La variable estatica le permite a la funcion recursiva contar correctamente el nro de veces
    que la funcion a sido llamada y controlar cuando detenerse. Sin la variable, el comportamiento
    de la funcion seria incorrecto o podria resultar en una recursion infinita.

¿Por qué el valor de la variable estática no se reinicia en cada llamada recursiva?
    Se inicializa una sola vez y conserva su valor entre las invocaciones de la funciones
    de toda la ejecucion del programa

*/

/*
El código que has proporcionado es un ejemplo de una función recursiva que cuenta el número de llamadas que se han realizado. Aquí tienes un resumen de cómo funciona y su salida:

Variable Estática: llamadas es una variable estática, lo que significa que su valor se conserva entre diferentes llamadas a la función contarLlamadas.

Incremento y Salida: Cada vez que se llama a la función, se incrementa la variable llamadas y se imprime el número de la llamada actual.

Condición de Recursión: La función se llama a sí misma mientras llamadas sea menor que 5. Esto crea una serie de 5 llamadas antes de detenerse.
*/