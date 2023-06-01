#include <iostream>

using namespace std;

int main()
{
    // Declaracion de variables
    int edad = 0;
    int vacunas = 0;
    int M_kid = 0;
    int F_kid = 0;
    const int R_anual = 4500;
    float economia = 0;
    string genero;
    string enfermedad;
    string nombre;
    string continuar = "si";

    // Bucle para ingreso del paciente
    do
    {
        cout << "Bienvenidos al sistema de registro de vacunacion" << endl; 
        cout << "Ingrese nombre del paciente \n";
        cin >> nombre;
        cout << "Ingrese la edad del paciente \n";
        cin >> edad;
        cout << "Ingrese genero del paciente: F o M \n";
        cin >> genero;
        cout << "El paciente padece de alguna enfermedad: si o no \n";
        cin >> enfermedad;
        cout << "Ingrese su renta anual \n";
        cin >> economia;

        // Condición para que el paciente reciba la vacunación gratis
        if (edad < 5 && economia < R_anual && enfermedad == "no")
        {
            if (genero == "M")
            {
                M_kid += 1;
            }
            else
            {
                F_kid += 1;
            }
        }
        else
        {
            cout << "El paciente no aplica para la vacunacion gratis" << endl;
        }
        vacunas += 1;

        cout << "Desea continuar: si o no \n";
        cin >> continuar;

    } while (continuar == "si");

    cout << " \n Cantidad TOTAL de vacunas " << vacunas << endl;
    cout << " \n Cantidad TOTAL de vacunas en ninos "<< M_kid << endl;
    cout << " \n Cantidad TOTAL de vacunas en ninas " << F_kid << endl;

    return 0;
}