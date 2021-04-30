#include <iostream>
using namespace std;
/*
Skriv ett program som frågar användaren
efter hur gammal den är. Om åldern är 7 år eller
yngre skrivs "Din biljett koster 25 kronor" ut.
Annars skrivs "Din biljett kostar 45 kronor" ut.

Använd två funktioner. En funktion som
frågar användaren hur gammal den är
och en funktion som skriver ut priset.
*/
// Funktionsdeklaration
// utvärde, namn, ev. invärde eller invärden
int fragaAlder();
void visaPris(int minAlder);
int main()
{
    /*
    // Deklarera variabel
    int alder;
    cout << "Hur gammal är du? ";
    cin >> alder;
    */
    // Jämför
    // int alder;
    // alder = 7;
    int alder;
    alder = fragaAlder();
    visaPris(alder);

    alder = fragaAlder();
    visaPris(alder);

    alder = fragaAlder();
    visaPris(alder);

    /*
    if (alder > 7)
    {
        cout << "Din biljett kostar 45 kronor" << endl;
    }
    else
    {
        cout << "Din biljett koster 25 kronor" << endl;

    }
    */


    return 0;
}
// Funktionsdefinitioner
// Vad funktionen ska göra
int fragaAlder()
{
    // Deklarera variabel
    int alder;
    cout << "Hur gammal är du? ";
    cin >> alder;
    return alder;
}
void visaPris(int minAlder)
{
    if (minAlder > 7)
    {
        cout << "Din biljett kostar 45 kronor" << endl;
    }
    else
    {
        cout << "Din biljett koster 25 kronor" << endl;

    }
}
