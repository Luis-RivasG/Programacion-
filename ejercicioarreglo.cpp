#include <iostream>

using namespace std; 

int main ()
{
    string libro [3]; 
    string autor [3]; 
     for (int i = 0; i < 3; i++)
     {
        cout << "Ingrese el nombre de un libro: \n";
        cin >> libro [i]; 
        cout << "Ingrese nombre de autor: \n"; 
        cin >> autor [i];
     }
     for (int i = 0; i < 3; i++)
     {
        cout << "El nombre del libro es: " << libro [i] << "El autor es: " << autor [i] << endl; 
     }
     
    return 0; 
}