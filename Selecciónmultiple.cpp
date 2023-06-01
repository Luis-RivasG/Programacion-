#include <iostream>

using namespace std; 

int main ()
{
    int opcion; 
    float n1, n2; 
    float suma, resta, multiplicacion, division; 

    cout << "Ingrese opcion; 1- suma, 2- resta, 3- multiplicacion, 4- division"; 
    cin >> opcion; 
    cout << "Ingrese primer numero";
    cin >> n1;
    cout << "Ingrese segundo numero";
    cin >> n2;

    switch (opcion)
    {
    case 1:
    //Suma
        suma = n1 + n2;  
        cout << "El resultado es " << suma; 
        break;
    case 2:
    // Resta
        resta = n1 - n2;
        cout << "El resultado es " << resta; 
        break;
    case 3:
    // Multiplicaión
        multiplicacion = n1 * n2;
        cout << "El resultado es " << multiplicacion; 
        break; 
    case 4:
    // División
        division = n1 / n2;
        cout << "El resultado es " << division;
        break; 
    default:
        cout << "No existe la opcion";
        break;
    }

return 0; 
}