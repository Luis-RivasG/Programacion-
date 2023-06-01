#include <iostream>

using namespace std;
int main()
{

    int suma = 0;
    int num;
    int opcion;

    cout << "Ingrese una opcion 1- suma de multiplos de 5, 2- suma de numeros pares, 3- suma de numeros impares";
    cin >> opcion; 

    switch (opcion)
    {
    case 1:
        // Suma de multiplos de 5
        for (int i = 0; i <= 100; i++)

        {
            if (i % 5 == 0)
            {
                suma = suma + i;
                cout << "La suma de los multiplos de 5 es de: " << suma << endl;
                break;
            }
        }
    case 2:
        // Suma de los numeros pares
        for (int i = 0; i <= 20; i++)

        {
            if (i % 2 == 0)
            {
                suma = suma + i;
                cout << "La suma de los pares es de: " << suma << endl;
                break;
            }
        }
    case 3:
        // Suma de los numeros impares
        for (int i = 0; i <= 30; i++)

        {
            if (i % 3 == 0)
            {
                suma = suma + i;
                cout << "La suma de los numeros impares es de: " << suma << endl;
                break;
            }
        }
        break;

    default:
        break;
    }
}