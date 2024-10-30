/*
Ejercicio 6: Desafío Final: Variables Globales, Locales y Estáticas en Acción
Objetivo: Combinar todos los conceptos aprendidos.

1. Declara una variable global resultado que almacene el resultado de una operación.
2. Dentro de una función calcular(), declara una variable local resultado que se actualice
    con una suma. Usa también una variable estática contador para llevar la cuenta de cuántas
    veces se ha llamado a calcular().
3. Muestra el valor de resultado (tanto local como global) y el valor de contador cada vez
    que se llama a la función.
*/

#include <iostream>
using namespace std;

int resultado = 100; // Variable global

void calcular()
{
    int resultado = 10;      // Variable local
    static int contador = 0; // Variable estática
    contador++;
    resultado += 5;
    ::resultado += 5; // Modifica la variable global

    cout << "Resultado local: " << resultado << endl;     // 15, 15, 15
    cout << "Resultado global: " << ::resultado << endl;  // 105, 110, 115
    cout << "Contador de llamadas: " << contador << endl; // 1,2, 3
}
int main()
{
    calcular();
    calcular();
    calcular();
    return 0;
}

/*
1- ¿Qué diferencia notas entre la variable resultado local y la global después de cada llamada?
   La variable "resultado local" se reinicia en 10 despues de cada llamada a la funcion, durante
   cada invocacion siempre muestra un valor de 15.  Mientras q la variable global se modifica en
   cada llamada, incrementandose en 5. Su valor comienza en 100, y despues de tres llamadas, termina en 5.

2- ¿Cómo se comporta la variable estática contador?
    Se inicializa solo una vez, conservando su valor entre llamadas a la funcion. Cada vez q se llama
    a la funcion "calcular ()"se incrementa en 1.
*/
