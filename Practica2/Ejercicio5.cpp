#include <iostream> //preguntar si es necesario
#include <stdio.h>  //esta libreria permite mostrar datos por pantalla

using namespace std;

int main()
{
    char nombre[50];
    printf("Ingrese su nombre: \n");
    scanf("%s", &nombre); //
    printf("Saludamos:¡Hola %s!", nombre);

    return 0;
}
