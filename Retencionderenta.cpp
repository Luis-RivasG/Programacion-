#include <iostream>

using namespace std;

// Declaracion de variables
float salario = 0;
float salariofinal (float salario);
float calculoretencion(float salario);
float calculodescuento(float);

int main()

{
    //Llamado de la función
    cout << "Ingrese su salario \n";
    cin >> salario;
    cout << "Su salario total es de: $" << salariofinal (salario);
;

    return 0;
}

// Definicion de variables
float calculoretencion(float salario)
{
    float salarioconretencion;
    salarioconretencion = salario - ((salario * 0.0625) + (salario * 0.03));
}
float calculodescuento(float salario)
{
    float salarioconretencion;
    float descuento;
    if (salarioconretencion >= 0.01 && salarioconretencion <= 472.00)
    {
       descuento = salarioconretencion;
    }
    else if (salarioconretencion >= 472.01 && salarioconretencion <= 895.24)
    {
        descuento = ((salarioconretencion - 472.00)* 0.10) + 17.67;
    }
    else if (salarioconretencion >= 895.25 && salarioconretencion <= 2030.10)
    {
        descuento = ((salarioconretencion - 895.24)* 0.20) + 60.00;
    }
    else if (salarioconretencion >=2038.11)
    {
        descuento = ((salarioconretencion - 2038.10)* 0.30) + 288.57;
    }
    
    return descuento;
}
float salariofinal(float salario)
{
    float salariofinal;
    float salariodescuento;
    salariofinal = salario - salariodescuento;
    return salariofinal;
}