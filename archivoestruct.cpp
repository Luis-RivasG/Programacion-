#include <iostream>
#include <fstream>

using namespace std;

struct Persona
{
    string nombre;
    string telefono[2];
} persona[3];

void CrearFichero();
void solicitarDatos();

int main()
{
    CrearFichero();

    return 0;
}
void CrearFichero()
{
    ofstream fichero;
    fichero.open("InformacionPersona.txt", ios::out | ios::app);

    for (int i = 0; i < 3; i++)
    {
        cout << "Ingresa tu nombre \n";
        cin >> persona[i].nombre;
        for (int j = 0; i < 2; j++)
        {
            cout << "Ingresa tu telefono \n";
            cin >> persona[i].telefono[j];
        }
    }
    if (fichero.fail() == true)
    {
        cout << "No se logro crear";
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            fichero << persona[i].nombre;
            for (int j = 0; i < 2; j++)
            {
                fichero << persona[i].telefono[j];
            }
        }

        fichero.close();
    }
}