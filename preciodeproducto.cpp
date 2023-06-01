#include <iostream>

using namespace std; 
 int main()
 {
    string opcion; 
    float precio; 
    int cantidad;
    float total;

    cout << "Ingrese precio del producto";
    cin >> precio; 
    cout << "Ingrese cantidad del producto";
    cin >> cantidad; 

    if (cantidad >= 10)
    {
        total = cantidad * precio * 0.90; 
        cout << "Su total con descuento del 10% es de: $" << total; 
    }
    else
    {
        total = cantidad * precio; 
        cout << "Su total es de: $" << total;
    }

    return 0; 
 }