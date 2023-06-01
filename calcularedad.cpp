#include <iostream>

using namespace std;
int main()
{
    int anioNac;
    int edad;

    // Constante del año actual
    const int actual = 2023;
    cout << "Ingresa fecha de nacimiento";
    cin >> anioNac;

    // Calcular edad
    edad = 2023 - anioNac;
    cout << "Su edad es: " << edad;
    return 0;
}