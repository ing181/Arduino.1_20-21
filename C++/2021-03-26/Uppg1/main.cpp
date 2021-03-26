#include <iostream>
using namespace std;
// Uppgift 1
/*
1. Skriv ett program som frågar användaren efter hur gammal den är.
Om åldern är 7 år eller yngre skrivs "Din biljett koster 25 kronor" ut.
Annars skrivs "Din biljett kostar 45 kronor" ut.
*/
int main()
{
    // Regler för variabelnamn: Ej ÅÄÖ, endast a-z, A-Z
    // Får inte börja med en siffra
    // Inte 1tal
    // Men tal1 går bra

    int alder;
    cout << "Ange hur gammal du är: ";
    cin >> alder;
    if (alder > 7) {
        cout << "Din biljett kostar 45 kronor" << endl;
    }
    else {
        cout << "Din biljett kostar 25 kronor" << endl;
    }
    /*
    if (alder <= 7)
    {
        cout << "Din biljett kostar 25 kronor" << endl;
    }
    else {

        cout << "Din biljett kostar 45 kronor" << endl;
    }
    */
    /*
    if ( alder > 7) {
         cout << "Din biljett kostar 45 kronor" << endl;
    }
    */
    return 0;
}
