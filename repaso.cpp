#include <iostream>

using namespace std; 

int suma(int, int );

int main ()
{
    int numero1, numero2, resultado = 0;
    cout << "Ingrese primer numero: \n";
    cin >> numero1;
    cout << "Ingrese segundo numero: \n";
    cin >> numero2;

    resultado = suma(numero1, numero2);
    cout << "El resultado es de: \n" << resultado << endl;
    return 0;
}
int suma (int numero1, int numero2)
{
    int suma = numero1 + numero2; 

    return suma;
}