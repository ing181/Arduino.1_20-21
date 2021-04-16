#include <iostream>
using namespace std;
/*
"Skriv ett program som med en funktion som har två heltal
som invärden och skickar tillbaka summan av de två talen.
Summan skrivs ut i huvudprogrammet (main)."
*/
// Funktionsdeklaration
int summera(int x, int y);
int main()
{
   cout << summera(3,5) << endl;
   int sum = summera(7,2);
   cout << sum << endl;


    return 0;
}
// Funktionsdefinition
int summera(int x, int y)
{
    int summa = x + y;
    return summa;
}
