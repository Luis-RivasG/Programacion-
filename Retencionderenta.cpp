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
    float salariofinal (float salario);
    cout << "Ingrese su salario \n";
    cin >> salario;
    cout << "Su salario total es de: $" << salariofinal;

    return 0;
}

// Definicion de variables
float calculoretencion(float salario)
{
    float salarioconretencion;
    salarioconretencion = salario - ((salario * 0.0625) + (salario * 0.03));
    return salarioconretencion;
}
float calculodescuento(float salario)
{
    float salarioconretencion;
    float salariocondescuento;
    if (salarioconretencion >= 0.01 && salarioconretencion <= 472.00)
    {
       salariocondescuento = salarioconretencion;
    }
    else if (salarioconretencion >= 472.01 && salarioconretencion <= 895.24)
    {
        salariocondescuento = ((salarioconretencion - 472.00)* 0.10) + 17.67;
    }
    else if (salarioconretencion >= 895.25 && salarioconretencion <= 2030.10)
    {
        salariocondescuento = ((salarioconretencion - 895.24)* 0.20) + 60.00;
    }
    else if (salarioconretencion >=2038.11)
    {
        salariocondescuento = ((salarioconretencion - 2038.10)* 0.30) + 288.57;
    }
    
    return salariocondescuento;
}
float salariofinal(float salario)
{
    float salariofinal;
    float salariodescuento;
    salariofinal = salario - salariodescuento;

    return salariofinal;
}