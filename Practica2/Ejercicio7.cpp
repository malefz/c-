#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const float pi = 3.1416;
    float radio, area;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio; // variable q se va a asignar el radio
    area = pi * (radio * radio);
    cout << "El area del circulo es: " << area; // se muestra en pantalla con la funcion cout
    return 0;
}