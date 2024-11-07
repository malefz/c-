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
    a "calcular ()", "contador" se incrementa en 1.
*/

/*
Variable Local: resultado dentro de la función es local a calcular(). Su valor se inicializa en 10 y se reinicia cada vez que se llama a calcular(). Cuando se hace resultado += 5;, el resultado local se convierte en 15, y se mantiene en 15 en todas las llamadas posteriores.
Variable Estática: contador se inicializa solo una vez (en la primera llamada a calcular()) y se incrementa en cada llamada. Por lo tanto, su valor persiste entre invocaciones y cuenta cuántas veces se ha llamado a la función.

Conclusiones
Alcance: La variable local resultado es accesible solo dentro de calcular(), mientras que la variable global resultado es accesible desde cualquier parte del código.
Persistencia: La variable estática contador mantiene su valor entre llamadas, lo que permite contar las invocaciones sin necesidad de pasar un parámetro.
Claridad del Código: Este enfoque muestra cómo se pueden utilizar diferentes tipos de variables para gestionar el estado y la lógica de un programa de manera efectiva.


La diferencia principal entre la variable resultado local y la global después de cada llamada es su alcance y persistencia:

Variable Local (resultado dentro de calcular()):

Se reinicia a 10 en cada llamada a la función.
Siempre muestra un valor de 15 tras la operación resultado += 5; durante cada invocación.
Variable Global (resultado fuera de la función):

Se modifica en cada llamada, incrementándose en 5.
Su valor comienza en 100 y después de tres llamadas, termina en 115.
En resumen, la variable local es temporal y no retiene su valor entre llamadas, mientras que la variable global mantiene un estado que se acumula con cada invocación de la función.


La variable estática contador se comporta de la siguiente manera:

Características del Comportamiento de contador
Persistencia del Valor:

contador se inicializa solo una vez, en la primera llamada a la función calcular(). No se reinicia a 0 en llamadas subsiguientes, lo que permite que su valor persista a lo largo de la ejecución del programa.
Incremento en Cada Llamada:

Cada vez que se llama a calcular(), contador se incrementa en 1. Así, puedes usarlo para contar cuántas veces se ha invocado la función.
Alcance Local:

Aunque contador mantiene su valor entre llamadas, su acceso está limitado a la función calcular(). No puedes acceder a contador desde fuera de esa función.
Salida en el Programa
En el contexto de tu programa:

La primera vez que llamas a calcular(), contador se inicializa en 0 y luego se incrementa a 1.
En la segunda llamada, ya no se reinicia a 0, sino que se incrementa a 2.
En la tercera llamada, se incrementa a 3.
Resumen de la Salida
La salida de contador en cada llamada es:

Primera llamada: 1
Segunda llamada: 2
Tercera llamada: 3
Conclusiones
La variable estática contador es útil para llevar un registro del número de veces que se ha llamado a la función, y su comportamiento ilustra cómo las variables estáticas pueden mantener el estado entre invocaciones de una función sin utilizar variables globales.





*/