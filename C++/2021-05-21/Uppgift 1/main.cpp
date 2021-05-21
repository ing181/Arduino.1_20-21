#include <iostream>
using namespace std;
/*
1. Gör ett program som beräknar 1+2+3+4+5+ ... + n
där användaren bestämmer värdet på n.
Exempel: Användaren matar in 4
Utskrift: "1+2+3+4=10"
*/
int main()
{
    int antal;
    cout << "Hur många tal vill du addera? ";
    cin >> antal;
    int i = 1;
    int summa = 0;
    while (i <= antal)
    {
        cout << i;
        if ( i < antal)
        {
            cout << "+";
        }
        else
        {
            cout << "=";
        }
        summa = (summa + i);
        // cout << "Nu är summa " << summa << " ";
        i = i + 1;
    }
    cout << summa << endl;
    return 0;
}
