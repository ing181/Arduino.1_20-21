#include <iostream>
using namespace std;
// Funktionen deklareras
// "Funktionsdeklaration"
// utvärde, namn, invärde
// void exempelFunktion();
float exempelFunktion2();
int main()
{
    // "Funktionsanrop" Funktionen används
    // float tillbaka = 4.66;
    float tillbaka = exempelFunktion2();
    cout << "Från funktionen skickades " << tillbaka << endl;


    return 0;
}
// Funktionen definieras
// "Funktionsdefinition"
float exempelFunktion2()
{
    float tal;
    cout << "Mata in ett tal: ";
    cin >> tal;
    cout << "Du matade in talet " << tal << endl;
    //return tal;
    return 111.11;
}
/*
void exempelFunktion()
{
    float tal;
    cout << "Mata in ett tal: ";
    cin >> tal;
    cout << "Du matade in talet " << tal << endl;
}
*/
