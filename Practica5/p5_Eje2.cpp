/*
Ejercicio 2: Vida Útil de las Variables Estáticas

Objetivo: Entender cómo las variables estáticas conservan su valor entre llamadas a la misma función.

1. Modifica el código anterior agregando una variable static llamada contadorEstatico dentro de la función incrementar().
2. Aumenta su valor en 1 cada vez que se llama a la función.
3. Imprime el valor de contadorEstatico dentro de la función.

Código base:
Preguntas:
1   - ¿Por qué la variable estática conserva su valor entre llamadas a la función?
Porque se almacena su valor en una region de memoria especial que persiste durante
q persiste durante la ejecucion del programa.

2   - ¿Qué diferencia hay entre la vida útil de una variable local y una variable estática?
La variable LOCAL: tiene una vida util limitada al bloque o funcion en la que se
declara. Se crea cuando entra al bloque y se destruye al salir, liberando la
memoria q ocupaba.
La variable ESTATICA (declarada con la palabra clave STATIC dentro de la funcion)
persiste durante la ejecucion del programa en la memoria. Su valor se mantiene entre llamadas a la funcion,
pero su alcance sigue siendo local a esa funcion.

*/

#include <iostream>
using namespace std;

void incrementar()
{
    static int contadorEstatico = 0; // Variable estática contadorEstatico++;
    contadorEstatico++;

    cout << "Valor de contadorEstatico: " << contadorEstatico << endl;
}
int main()
{
    incrementar();
    incrementar();
    incrementar();
    return 0;
}