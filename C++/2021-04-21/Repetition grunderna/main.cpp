#include <iostream>  // Extra bibliotek för in- och utmantning
using namespace std; // "namespace" talar om att vi ska använda
// "std"

int main()
{
    // "cout" skärmen, "<<" utmatningsoperatorn "Text",
    // utmatningsoperatorn endl (ny rad), cemikolon
    // datatyp "int" för heltal
    // En variabel måste alltid deklareras innan den kan användas
    int in; // Skapas, deklareras
    // cin tangenbordet, inmatningoperatorn ">>"
    cin >> in; // in används

    cout << in << endl; // Det inmatade värdet skrivs ut

    if ( in == 0 )
    {

        cout << "Du matade in noll" << endl;
        // mindre än eller lika med
    }
    else if (in <= 0)
    {

        // Händer inte i fall du matat in talet 0
        // händer endast om "( in == 0 )" är falskt
        cout << "Du matade in ett negativt tal" << endl;
    }
    // else if (in > 0) Onödig kod. Kan bara vara ett
    // positivt tal
    else
    {
        cout << "Du matade in ett posetivt tal" << endl;
    }


    while ( in != 0 )
    {
       cin >> in;
       cout << "Du matade in " << in << endl;

    }

    // Datatyper
    // int, integer datatyp för heltal
    // decimaltal skrivs med . i stället för ,
    // namnet "flyttal" används i programmeringssamanhang.
    // Exakt samma sak som decimaltal
    int heltal = 5.9;
    cout << "Variabeln heltal har värdet " << heltal << endl;
    // float, datatyp för decimaltal (flyttal)
    float flyttal = 5.9;
    cout << "Variabeln flyttal har värdet " << flyttal << endl;


    return 0;
}
