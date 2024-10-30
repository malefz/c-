/*
Preguntas:
1   - ¿Qué diferencia notas entre el comportamiento de la variable global y la local?
La variable global incrementa tres veces, mientras q la variable local solo una vez y mantiene su valor.

2   - ¿Por qué la variable local no conserva su valor entre llamadas?
No conserva su valor pq su alcance es local y solo existe dentro de la funcion. Cada vez q se llama a la funcion se inicializa en 0,
se incrementa, muestra el valor y, cuando termina la funcion se destruye.
*/

// codigo base

#include <iostream>
using namespace std;
int contadorGlobal = 0; // variable global
void incrementar()
{
    int contadorLocal = 0; // variable local

    contadorLocal++; // variable local

    contadorGlobal++; // incrementa la variable global

    cout << "variable Global = " << contadorGlobal << " | variable Local = " << contadorLocal << endl;
}
int main()
{
    incrementar();
    incrementar();
    incrementar();
    return 0;
}