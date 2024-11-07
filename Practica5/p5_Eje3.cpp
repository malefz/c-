/*
Ejercicio 3: Alcance en Bucles y Condicionales
Objetivo: Explorar cómo cambia el alcance de una variable cuando es declarada dentro
de bucles o bloques condicionales.
1. Dentro del main(), crea un bucle for que se ejecute 5 veces.
2. Declara una variable int i dentro del bucle y otra variable int j fuera del bucle.
3. Muestra el valor de i y j dentro del bucle y fuera del bucle.

*/

#include <iostream>
using namespace std;
int main()
{
    int j = 0; // Variable fuera del bucle
    for (int i = 0; i < 5; i++)
    {
        j++;
        cout << "i dentro del bucle: " << i << ", j: " << j << endl;
    }
    // Intenta imprimir i aquí cout << "j fuera del bucle: " << j << endl; return 0;
    cout << " j fuera del bucle: " << j << endl;
    return 0;
}

/*
Preguntas:
1 ¿Por qué no puedes acceder a i fuera del bucle?
porq fue delcarada dentro del bucle y solo es accesible dentro del mismo.

2 ¿Qué pasa con la variable j? ¿Por qué es accesible dentro y fuera
del bucle?
La variable j es declarada en el ambito de la funcion main(),
lo que significa q es accesible desde cualquier parte de main(), incluyendo
dentro del bucle for.
*/