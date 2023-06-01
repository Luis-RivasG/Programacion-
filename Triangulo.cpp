#include <iostream>

using namespace std;

float Tipotriangulo(float, float, float);
int main()
{
    float lado1, lado2, lado3;
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
float Tipotringulo(float lado1, float lado2, float lado3)
{
    float Tipotriangulo;
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
