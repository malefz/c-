/*
Ejercicio 4: Alcance de Variables Globales y Locales con el Mismo Nombre
Objetivo: Comprender cómo C++ maneja variables globales y locales con el mismo nombre.
1.  Declara una variable global llamada dato y una variable local con el mismo nombre
 dato dentro de la función mostrarDato().
2.  Dentro de la función, usa ::dato para acceder a la variable global y muestra
su valor, junto con el valor de la variable local.
3.  En el main(), llama a la función y muestra los resultados.
*/

#include <iostream>
using namespace std;
int dato = 10; // Variable global

void mostrarDato()
{
    int dato = 5; // Variable local con el mismo nombre
    cout << "Variable local: " << dato << endl;
    cout << "Variable global: " << ::dato << endl; // Accede a la variable global
}
int main()
{
    mostrarDato();
    return 0;
}

/*
¿Cómo distingue C++ entre la variable local y la global con el mismo nombre?
Lo distingue utilizando el alcance (scope) y el operador de resolucion de ambito (::)

¿Por qué es necesario usar el operador :: para acceder a la variable global
dentro de la función?
para que el compilador no haga referencia a la variable local, ya q tienen el mismo
nombre. Es para especificar q' variable se esta utilizando.
*/