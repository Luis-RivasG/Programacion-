#include <iostream>
#include <fstream>

using namespace std;

// Declaraciones de variables
void CrearFichero();
void ImprimirFichero();


int main()
{
    CrearFichero();
    ImprimirFichero();
    return 0;
}
// Definiciones de funciones
void CrearFichero()
{

    ofstream fichero;

    fichero.open("Prueba.txt", ios::out | ios::app);
    string nombre;
    cout << "Ingrese su nombre";
    cin >> nombre;
    if (fichero.fail() == true)
    {
        cout << "No se logro crear el archivo";
    }
    else
    {
        fichero << "Hola " << nombre;

        fichero.close();
    }
}
void ImprimirFichero ()
{
    string texto;

    ifstream fichero;
    fichero.open("Prueba.txt", ios::in);

    while (getline(fichero, texto))
    {
        cout << texto << endl;
    }
    //fichero.eof()endofail

    fichero.close();
}