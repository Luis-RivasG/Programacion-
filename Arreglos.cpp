#include <iostream>

using namespace std;

int main ()
{
   // Tipo de arreglo, posicion; dimension, inicializacion
    int arreglovalores [4] = {3,4,1,11};

    //Acceder a un valor por el indce 
    cout << arreglovalores [0]; 
    cout << arreglovalores [3];
    //Modificar un valo de una posición 
    arreglovalores [3] = 8; 
    cout << arreglovalores [3];
    
    //Recorre un arreglo - array
   for (int i = 3; i >= 0; i--) 
   {
    cout << arreglovalores [i]<< endl;
   }
}   