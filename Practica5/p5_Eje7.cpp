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

*/

#include <iostream>
using namespace std;

// declaraciones de funciones
int funcionA();
int funcionB();

int funcionA()
{
    static int contadorA = 0;
    contadorA++;
    return contadorA;
}

int funcionB()
{
    static int contadorB = 0;
    contadorB++;
    return contadorB;
}

int main()
{
    for (int i = 1; i < 3; i++)
    {
        funcionA();
    }
    for (int i = 1; i < 3; i++)
    {
        funcionB();
    }
    cout << "funcionA fue llamada " << funcionA() << " veces." << endl;
    cout << "funcionB fue llamada " << funcionB() << " veces.";
    return 0;
}

/*
Puntos a considerar
-    ¿Qué variables tienen que ser locales? ¿Cuál tiene que ser estática?
    Local: Las variables contadorA y contadorB son locales a sus respectivas funciones.
    Estática: Las variables contadorA y contadorB deben ser declaradas como static para
    que conserven su valor entre las llamadas y no se compartan entre las funciones.


-    ¿Cómo mantendrás la separación de los contadores entre las dos funciones?
    Cada contador se declara dentro de su respectiva función.
    Por lo que su alcance está limitado a esa función, y no se puede acceder desde fuera.
*/

