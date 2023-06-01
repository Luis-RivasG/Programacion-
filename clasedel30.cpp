#include <iostream>

using namespace std; 

int main ()
{
    int arreglos [6] ;
    int maxnumero = arreglos [0];
    int minnumero = arreglos [0];
    int numero;

    //Solicitud de datos
    for (int i = 0; i < 6; i++)
    {
     cout << "Ingrese numero: \n";
     cin >> numero;
    }
    
    // Imprime
    for (int i = 0; i < 6; i++)
    {
        if (arreglos [i] > maxnumero)
        {
            maxnumero = arreglos [i];
        }
        else if (arreglos [i] < minnumero)
        {
            minnumero = arreglos [i];
        }
    }
    cout << "El menor numero es: \n" << minnumero << endl;
    cout << "El mayor numero es: \n" << maxnumero << endl;
return 0;
}