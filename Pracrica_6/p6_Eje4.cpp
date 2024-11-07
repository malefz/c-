/*
Contar Vocales
Escribe un programa que pida al usuario ingresar una cadena y luego cuente cuántas vocales contiene.
    -  Requisitos:
        o Usar std::string para almacenar la cadena.
        o Considerar las vocales tanto en minúsculas como en mayúsculas.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cadena;
    // contador de vocales
    int contador = 0;
    cout << "Ingrese cadena: "; // solicita al usuario que ingrese una cadena
    getline(cin, cadena);
    // se declara una variable c para almacenar cada caracter de la cadena
    for (char c : cadena)
    {
        switch (c) // verifica si el caracter es una vocal
        {
        case 'A':
            break;
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            contador++; // si es vocal, incrementa
            break;
        }
    }
    cout << "Contiene " << contador << " vocales" << endl;
    return 0;
}

/*
Esta línea recorre cada carácter en la cadena cadena y ejecuta el bloque de código dentro del bucle una vez por cada carácter en la cadena.

Explicación de los componentes:
char c: Esto define la variable c, que es del tipo char, para almacenar temporalmente cada carácter de la cadena durante cada iteración del bucle.
Es decir, en cada vuelta del bucle, c será un carácter de la cadena cadena.


: (dos puntos): El operador : en este contexto se utiliza para iterar sobre todos los elementos de una colección (en este caso, la cadena cadena).
 Es similar a un "rango" y nos dice que estamos iterando sobre cada elemento de la colección de izquierda a derecha.
cadena:

Esta es la colección que estamos recorriendo. En este caso, se trata de un std::string, lo que significa que el bucle va a recorrer cada carácter
de la cadena de texto.

¿Qué hace el bucle?
Este bucle recorre cada carácter de la cadena cadena y en cada iteración asigna ese carácter a la variable c.
Luego, dentro del cuerpo del bucle (el bloque que sigue al for), puedes trabajar con c como quieras.

Explicación paso a paso del bucle:
Primera iteración: c será igual a 'H', y se imprimirá 'H'.
Segunda iteración: c será igual a 'o', y se imprimirá 'o'.
Tercera iteración: c será igual a 'l', y se imprimirá 'l'.
Y así sucesivamente hasta que se recorra toda la cadena



Explicación detallada:
Bucle for (char c : cadena):

Este bucle recorre cada carácter de la cadena cadena.
En cada iteración, la variable c tomará el valor de un carácter de la cadena.
Estructura switch:

Dentro del bucle, tenemos un switch que compara el valor del carácter c con las vocales ('a', 'A', 'e', 'E', etc.).
Cada case corresponde a una vocal, y al coincidir con cualquier vocal, el contador de vocales (contador) se incrementa.
El break después de cada case asegura que el switch termine inmediatamente después de encontrar una vocal. Esto evita que el programa siga
evaluando los casos posteriores innecesariamente.
default:

El default se ejecutará si el carácter no coincide con ninguna de las vocales.
En este caso, no se hace nada dentro del default, pero podría ser útil si deseas realizar alguna acción especial para caracteres no vocales
 (como imprimir un mensaje, por ejemplo).

¿Por qué usar switch en este caso?
El uso de switch es adecuado aquí porque estás trabajando con un conjunto limitado y fijo de caracteres (las vocales).
Es una alternativa válida al uso de múltiples condiciones if o else if. Aunque no es necesariamente más eficiente en este caso,
 puede ser más claro y organizado, especialmente cuando se trata de valores discretos y bien definidos como las vocales.





1. El comportamiento de switch con múltiples case
En C++, cuando tienes varios case que deben ejecutar el mismo bloque de código, puedes agruparlos sin necesidad de repetir el bloque de código
 y sin usar un break entre ellos. Esto es lo que se conoce como "fall-through" (caída libre).

En tu código, los case de las vocales no tienen un bloque de código específico después de cada uno. En lugar de escribir un break en cada case,
 puedes agrupar los case de las vocales de manera que todos se dirijan al mismo bloque de código.


 ¿Por qué funciona sin break en cada case?

Cuando c es 'a', el flujo de control entra en el primer case ('a').
Como no hay código asociado directamente con el case ('a'),
el flujo de control continúa al siguiente case ('A'), luego al siguiente case ('e'),
 y así sucesivamente hasta que se encuentra una coincidencia con un valor de vocal, en este caso se ejecuta el código correspondiente
 (el contador++).

Todos estos case se "agrupan", lo que significa que si el valor de c coincide con cualquiera de estos valores ('a', 'A', 'e', 'E', etc.),
el mismo bloque de código se ejecutará.
El break que aparece después de los case de las vocales asegura que, una vez que el bloque de código se ejecute para la vocal correspondiente,
 el flujo de control salga del switch y no continúe hacia el default o cualquier otro case.


¿Por qué no es necesario un break entre los case?
En C++, cuando un switch se evalúa, el flujo de control sigue ejecutando los bloques de código que están "encadenados" si no hay un break
 para interrumpir el proceso. Si tienes varios case que deben hacer lo mismo, puedes agruparlos sin necesidad de repetir el mismo bloque de
 código para cada uno.



 Continúa cayendo a los siguientes case hasta encontrar uno que coincida, o hasta que llegue al bloque común.
En este caso, el bloque de código contador++ se ejecuta solo una vez, y luego el flujo se interrumpe por el break.
Si el valor de c es 'I', el flujo entra en case 'I', pero al igual que antes, no hay código entre los case de las vocales,
 por lo que el flujo de control caerá a través de todos esos case hasta que se ejecute el bloque común.


 Resumen:
No es necesario break en cada case cuando quieres que varios case ejecuten el mismo bloque de código.
Si el valor de c coincide con cualquier case, el flujo de control "caerá" de uno a otro hasta ejecutar el bloque de código común,
 y el break al final es el que evita que se sigan ejecutando otros bloques después de encontrar una vocal.
Usar break es importante para evitar el "fall-through" no deseado entre case, y en tu código, el break en el bloque final es el que asegura
 que solo se ejecute una vez el bloque de código.



*/