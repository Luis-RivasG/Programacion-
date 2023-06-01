#include <iostream>

using namespace std; 

float Totalapagar(string, int); 

int main ()
{
    int cantidad;
    string tipoplanta;
    float total;
    cout << "Ingrese el tipo de planta (Ornamental/medicinal): \n";
    cin >> tipoplanta;
    cout << "Ingrese la cantidad de plantas que desea llevar: \n";
    cin >> cantidad; 
    total = Totalapagar (tipoplanta, cantidad);
    cout << "Su total es de: " << total;

    return 0; 
}
float Totalapagar (string tipodeplanta, int cantidad){
    float precio;
    float total;
    string ornamental, medicinal;
    if (tipodeplanta == ornamental)
    {
        precio = 15.0;
    }
    else if (tipodeplanta == medicinal)
    {
        precio = 25.0;    
    }
    
    return total;
}