#include <iostream>

using namespace std;

int Tipotriangulo(int, int, int);
int main()
{
    int lado1, lado2, lado3;
    float resultado;
    cout << "Ingrese primer lado del triangulo \n";
    cin >> lado1;
    cout << "Ingrese segundo lado del triangulo \n";
    cin >> lado2;
    cout << "Ingrese tercer lado del triangulo \n";
    cin >> lado3;
    resultado = Tipotringulo (lado1, lado2, lado3);
    cout << "El triangulo es: \n" << resultado;

    return 0;
}
int Tipotringulo(int lado1, int lado2, int lado3)
{
    int Tipotriangulo = Tipotriangulo;
    if (lado1 == lado2 && lado2 == lado3)
    {
        cout << "El triangulo es equilatero" << endl;
    }
    else if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3)
    {
        cout << "El triangulo es isosceles" << endl;
    }
    else
    {
        cout << "Su triangulo es escaleno"<< endl;
    }

return Tipotriangulo;
}
