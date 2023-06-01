#include <iostream>

using namespace std;

int main()
{
    int num;
    int suma = 0;

    // Solicitud de datos
    cout << "Ingrese un numero entero positivo";
    cin >> num;

    // Proceso de la suma de dos números
    for (int i = 1; i <= num; i++)
    {
        suma = suma + i;
    }
    cout << "La suma de todos los numero positivos desde 1 hasta " << num << "es " << suma;
    return 0;
}
