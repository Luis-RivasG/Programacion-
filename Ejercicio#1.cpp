#include <iostream>

using namespace std;
float calculodescuento (float salario);
float calcularimpuesto (float salario);
float salario = 0;
float salariofinal=0;
int main ()
{ 
cout << "Binevenido";
cout << "Ingrese su salario"; 
cin >> salario;


return 0;
}
float calculotramo;
float salarioconretencion;
float salariototal;
{
if (salarioconretencion > 0 && salarioconretencion <= 472.00)
{
    cout << "No aplica a rentencion \n Su salario es de: " << salarioconretencion << endl;
}
else if (salarioconretencion > 472 && salarioconretencion <= 895.24)
    salariototal= ((salarioconretencion - 472.00)*0.1) + 17.67;
    cout << "Su salario con retencion del 10% es de: " << salariototal << endl; 
}

float calculodescuento (float salario)
{
    salarioconretencion = salario - ((salario*0.0625)+(salario*0.03));

}
