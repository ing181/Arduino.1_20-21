#include <iostream>
using namespace std;
/*
1. Gör ett program som beräknar 1+2+3+4+5+ ... + n där användaren bestämmer värdet på n.
Exempel: Användaren matar in 4
Utskrift: "1+2+3+4=10"
*/
int main()
{
    int heighest;
    cout << "Högsta talet: " << endl;
    cin >> heighest;
    int i = 0;
    int summa = 0;
    while (i<heighest)
    {
        i = i + 1;
        summa = summa + i;
        if (i<heighest)
        {
            cout << i << '+';
        }
        else
        {
            cout << i << '=';
        }

    }
    cout << summa << endl;
    return 0;
}
