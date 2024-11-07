/*
Enunciado:
Diseña un pequeño juego de adivinanza en el que el usuario debe adivinar un número del 1 al 10.
El programa debe llevar la cuenta de cuántos intentos lleva el usuario antes de adivinar correctamente el número. Debes usar una variable
global para contar los intentos y asegurarte de que el contador se mantenga hasta que el usuario adivine el número correcto.
-   Crea una función llamada adivinarNumero que genere el número aleatorio y solicite un número al usuario en cada intento.

-    Usa la variable global para contar los intentos e imprime el número de intentos al final.
*/

#include <iostream>
using namespace std;

// variable global
int intentos= 0;

int adivinarNumero()
{
    int numeroSecreto = 5;
    int numero;
    do
    {
        printf("Adivinar numero (1 al 10): ");
        scanf("%d", &numero);
        intentos++;

        if (numero < numeroSecreto)
        {
            printf("Demasiado bajo. Intenta de nuevo.\n");
        }
        else if (numero > numeroSecreto)
        {
            printf("Demasiado alto. Intenta de nuevo.\n");
        }
        else
        {
            printf("Felicidades! Adivinaste el numero en %d intentos", intentos);
        }
    } while (numero != numeroSecreto);
}

int main()
{
    adivinarNumero();
    return 0;
}

/*
Puntos a considerar:
-   ¿Por qué se debe usar una variable global en este caso?
     para contar los intentos en este juego de adivinanza
-   ¿Cómo aseguras que el contador global se incremente con cada intento?
    El contador se asegura de incrementarse con cada intento gracias a la variable
    'intentos' dentro del bucle. 'Intentos' es una variable global, su valor se matiene
    y se actualiza con cada iteracion del bucle hasta que el usuario adivine corectamente el numero.


    Reflexiones para los estudiantes:
-   ¿Qué pasos seguiste para resolver cada ejercicio?
    paso 1: el usuario ingresa un numero
    paso 2: incrementrar el contador (cuenta las veces q se intento)
    paso 3: preguntar si el numero q ingreso el usiario es mayor o menor, sino significa q adivino el nro.
-   ¿Qué tipo de variables decidiste usar y por qué?
    2 variables tipo entero:
    1ero: el numero q ingresa el usiario
    2do: el numero secreto (para saber el numero correcto y cuando tener el bucle)
-
    ¿Cómo influye el alcance y la vida útil de las variables en el comportamiento del programa?
        el uso de la variable global para contar intentos es debido a su alcance que es accesible a todo el programa y vida util.
        Esto permite q el programa mantenga un estado persistente y accesible.

*/

