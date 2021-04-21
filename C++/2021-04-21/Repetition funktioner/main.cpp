#include <iostream>
using namespace std;
// Funktionen deklareras
// "Funktionsdeklaration"
// utvärde, namn och invärde (invärden)
// void exempelFunktion();
// float exempelFunktion2();
float exempelFunktion3(float a, float b);
int main()
{
    // Använder funktionen
    // "Funktionsanrop"
    // Jämför
    // float ut = 7.8;
    /*
    float ut;
    ut = exempelFunktion2();
    cout << "Från funktionen skickades " << ut << endl;
    */
    float x = 3.3;
    float ut = exempelFunktion3(x, 1.3);
    cout << "Tillbaka från funktionen kommer " << ut << endl;


    return 0;
}
// Definiera (tala om) vad funktionen ska göra
// "Funktionsdefinition"
float exempelFunktion3(float a, float b)
{
     float summa = (a + b);
     return summa;
}
/*
float exempelFunktion2()
{
    float tal;
    cout << "Mata in ett flyttal: ";
    cin >> tal;
    cout << "Du matade in " << tal << endl;
    return tal;
}
*/
/*
void exempelFunktion()
{
    float tal;
    cout << "Mata in ett flyttal: ";
    cin >> tal;
    cout << "Du matade in " << tal << endl;
}
*/
