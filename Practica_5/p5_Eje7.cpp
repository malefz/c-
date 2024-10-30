/*
Ejercicio 7: Contador de Llamadas en Diferentes Funciones
Enunciado:
Crea dos funciones llamadas funcionA y funcionB. Cada una de estas funciones debe llevar un
contador que indique cuántas veces ha sido llamada dicha función. Sin embargo, las funciones
no deben compartir sus contadores. Al final, desde el main(), llama a cada función varias
veces y muestra cuántas veces ha sido invocada cada una.
-    Piensa en qué tipo de variable utilizarías para contar las llamadas.
-    Reflexiona sobre cómo y dónde debes declarar las variables para que se mantenga la
     cuenta entre las llamadas, pero que no se compartan entre las funciones.

Puntos a considerar:
-    ¿Qué variables tienen que ser locales? ¿Cuál tiene que ser estática?
-    ¿Cómo mantendrás la separación de los contadores entre las dos funciones?
*/

#include <iostream>
using namespace std;
static int contadorA = 0;
static int contadorB = 0;
void funcionA()
{
    contadorA++;
}

void funcionB()
{
    contadorB++;
}

int main()
{
    funcionA();
    funcionB();
    funcionA();
    funcionB();
    funcionA();
    funcionB();

    cout << "funcionA fue llamada " << contadorA << " veces.\n";
    cout << "funcionB fue llamada " << contadorB << " veces.";
    return 0;
}
