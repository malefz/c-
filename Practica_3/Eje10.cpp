/*
Números Primos en un Rango
Escribe un programa que imprima todos los números primos entre
1 y N usando un bucle for y otro bucle anidado para verificar si un 
número es primo
*/

#include <iostream>
using namespace std;

int main(){
    int num, cont= 0;
    cout<<"Ingrese el numero: ";
    cin>>num;
    for(int i= 1; i<= num;i++){
        if(num%i==0){
            cont= cont + 1;
            cout<<"Es primo.";
        }else {
            cout<<"No es primo";
        }
    }
    return 0;
}
