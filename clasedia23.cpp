#include <iostream>

using namespace std;
int cantidad;
int conversion(int dinero);
int main()
{
    int dinero;
    cout << "Bienvenido al sistema de conversion de Dolares a Euro" << endl;
    cout << "Ingrese cantidad de dolares: \n";
    cin >> cantidad;
    cout << "La cantidad de Euros es de: \n "<< conversion (dinero);
    return 0;
}

int conversion(int dinero)
{
    int conversion;
    if (cantidad %2 == 0)
    {
        conversion = cantidad * 0.93;
    }
    else
    {
       conversion = cantidad * 0;
    }
    return conversion;
}