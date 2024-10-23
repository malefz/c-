/*
8. Patrón de Mario (Escalera)
Pida al usuario ingresar un número que debe estar entre 1 y 8, y en caso de estar dentro de este rango,
 imprimir la escalera de mario con “#” simbolizando cada escalon, de la altura ingresada por el usuario.
*/

#include <iostream>

using namespace std;
int main()
{
    int altura;
    cout << "Ingrese un numero entre 1 y 8: ";
    cin >> altura; // 8
    if (altura >= 1 && altura <= 8)
    {
        for (int i = 1; i <= altura; i++) //
        {
            for (int j = 1; j <= altura - i; j++)
            {
                // imprime espacio de la escalera
                cout << " ";
            }
            for (int k = 1; k <= i; k++)
            {
                cout << "#";
            }
            cout << endl;
        }
    }
    return 0;
}
