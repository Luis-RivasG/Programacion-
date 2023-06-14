// ALBUM DE PUBLICACION
#include <iostream>
using namespace std;

void DataSolicitation();
void Antiquity(struct Album album[]);
void DataPublication(struct Album album[], string);

struct Label
{
    string label_name;
    string country;
    int year_fundation;
};

struct Album
{
    string name_singer;
    string name_album;
    int num_pista;
    float time;
    int year_publication;
    struct Label label;
    int antiquity;
} album[3];

int main()
{

    DataSolicitation();
    Antiquity(album);
    string autor;
    cout << "Search an Album with the autor's name: ";
    cin >> autor;
    DataPublication(album, autor);
    return 0;
}

void DataSolicitation()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Singer: ";
        cin >> album[i].name_singer;
        cout << "Album: ";
        cin >> album[i].name_album;
        cout << "Pista: ";
        cin >> album[i].num_pista;
        cout << "Duration: ";
        cin >> album[i].time;
        cout << "Publication: ";
        cin >> album[i].year_publication;
        cout << "Add the information of the Label:" << endl;
        cout << "Name: ";
        cin >> album[i].label.label_name;
        cout << "Country: ";
        cin >> album[i].label.country;
        cout << "Fundation: ";
        cin >> album[i].label.year_fundation;
        cout << "=========================" << endl;
    }
};

void Antiquity(struct Album album[3])
{
    for (int i = 0; i < 3; i++)
    {
        album[i].antiquity = 2023 - album[i].year_publication;
    }
}

void DataPublication(struct Album album[], string autor)
{

    for (int i = 0; i < 3; i++)
    {
        if (autor == album[i].name_singer)
        {
            cout << "Singer: " << album[i].name_singer << endl;
            cout << "Album: " << album[i].name_album << endl;
            cout << "Pista: " << album[i].num_pista << endl;
            cout << "Duration: " << album[i].time << endl;
            cout << "Year of publication: " << album[i].year_publication << endl;
            cout << "Antiquity: " << album[i].antiquity << endl;
            cout << "=====================================" << endl;
        }
    }
}