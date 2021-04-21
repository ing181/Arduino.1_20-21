#include <iostream> // Extra bibliotek för in- o utmatning
using namespace std; // namespace och ett namn talar om, i detta fall,
                    // vilket namespace "cout", "endl" med flera hör till.
int main() // returnerar ett heltal till Windows
{
    // "cout" skärmen
    // utmatning "<<" utmatningsoperatorn
    // "Hello world!" det som matas ut, är det text skall
    // " stå runt om
    // "endl" ny rad
    // ";" avsluta med cemikolon.
    cout << "Hello world!" << endl;

    // En variabel för heltal skapas
    int in;
    // "cin" tangentbordet
    // inmatning ">>" inmatningsoperatorn
    // när man trycker på "Enter" ("Retur") så
    // får variabeln värdet som man matat in (Tilldelas)
    cin >> in;

    // Vi testar
    // värdet som finns i variabeln "in" skrivs ut
    // Inga " runt variabelnamn
    cout << in << endl;

    // Programmet väljer väg beroende på inmatning
    if (in < 0) {
        cout << "Du matade in ett negativt tal" << endl;


    }
    else if (in == 0){

        cout << "Du matade in noll" << endl;
    }
    else  {

        cout << "Du matade in ett posetivt tal" << endl;
    }

    int tal = 1;
    while ( tal != 0 )
    {
        // Gör saker så länge som det som testas är sant.
        cout << "Du matade in " << tal << endl;
        cin >> tal;

    }

    int nyttal = 6.9;
    cout << "nyttal = " << nyttal << endl;
    float flyttal = 6.9;
    cout << "flyttal = " << flyttal << endl;

    // Angående datatyper
    // "int" datatyp för heltal
    // "float" datatyp för flyttal vilket är samma sak som decimaltal

    return 0;
}
