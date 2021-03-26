#include <iostream>
using namespace std;
// Loopar
int main()
{
    // När man vill jämföra två saker
    // används dubbla likamedstecken
    // ==
    // Jömförelse görs mellan det som är till höger om == och
    // det som är till vänster
    // För att en variabel ska få ett värde används
    // tilldelningsoperatorn =
    // Den tilldelar det som står till vänster värdet av det som
    // står till höger.
    // Det finns fler jämförelseoperatorer.
    // < (mindre än), <= (mindre än eller lika med)
    int tal = 0;
    while ( tal < 4 )
    {
        cout << tal << endl;
        cout << "Nummer 1" << endl;
        cout << "Nummer 2" << endl;
        cout << "Nummer 3" << endl;
       // tal = 0 + 1
       // tal = 1 + 1
        tal = tal + 1;
       // tal har nu värdet 1
       // tal har nu värdet 2

    }
    return 0;
}
