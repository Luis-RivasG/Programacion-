#include <iostream>

using namespace std;

int main ()
{
    int mes; 

    cout << "Ingrese el numero correspondiente al mes: \n";
    cin >> mes;

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        cout << "El mes seleccionado tiene 31 dias" << endl;
    }
    else if (mes == 2)
    {
        cout << "El mes seleccionado tiene 28 o 29 dias dependiendo del anio" << endl;
    }
    else (mes == 4 || mes == 6 || mes == 9 || mes == 11);
    {
        cout << "El mes seleccionado tiene 30 dias" << endl;
    }
}