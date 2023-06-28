#include <iostream>

using namespace std;

struct Disquera
{
    string nombre;
    string pais;
    int fundacion;
};

struct registrodealbum
{
    string cantante;
    string titulo;
    int pistas;
    int duracion;
    int publicacion;
    int antiguedad;
    struct Disquera disquera;
} album[3];

void Datos();
void Antiguedad ();


int main()
{
    


    return 0;
}
void Datos(struct album a[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingresa nombre del cantante: \n";
        cin >> album[i].cantante;
        cout << "Ingresa titulo del album: \n";
        cin >> album[i].titulo;
        cout << "Ingresa numero de pistas: \n";
        cin >> album[i].pistas;
        cout << "Ingresa la duracion del album: \n";
        cin >> album[i].duracion;
        cout << "Ingresa año de publicación: \n";
        cin >> album[i].publicacion;
    }
}
void solicitardatosdisquera (struct album a[]){
for (int j = 0; j < 3; j++)
        {
            cout << "Ingresa nombre de la disquera: \n";
            cin >> album[j].disquera.nombre;
            cout << "Ingresa nombre del pais: \n";
            cin >> album[j].disquera.pais;
            cout << "Ingresa la fecha de publicacion: \n";
            cin >> album[j].disquera.fundacion;
        }

}
void Antiguedad (struct album []){
    for (int i = 0; i < 3; i++)
    {
        a[i] Antiguedad [i] = 2023 - album[i].publicacion;
    }
    
}
void Imprimirdatos (struct album []){
 for (int i = 0; i < 3; i++)
    {
        cout << "Cantante: " << album[i].cantante;
        cout << "Album: " << album[i].titulo;
        cout << "Pistas: " << album[i].pistas;
        cout << "Duracion: " << album[i].duracion;
        cout << "Publicacion: " << album[i].publicacion;
        cout << "Disquera: " << album[i].disquera.nombre;
        cout << "Pais: " << album [i].disquera.pais;
        cout << "Fundacion" << album [i].disquera.fundacion;
    }

}
void Buscar (struct album []){
    
}