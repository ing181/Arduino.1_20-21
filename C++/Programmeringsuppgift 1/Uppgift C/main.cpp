#include <iostream>
using namespace std;
/*
C. Tillverka programmet "Gissa mitt hemliga tal mellan 0 och 10".
Användaren får tre försök att gissa rätt. Användaren gissar och utskriften blir.
"Tyvärr fel i försök 1"
"Tyvärr fel i försök 2"
"Grattis! Du gissade rätt i försök 3"
*/
int main()
{

    int hemligt_tal = 8;
    int gissa;
    int i=1;
    while (i<4) {
        cout << "Gissa mitt hemliga tal ";
        cin >> gissa;

        if (gissa != hemligt_tal) {
            cout << "Tyvärr, fel i försök " << i << endl;
        }
        else {
            cout << "Grattis! Du gissade rätt i försök " << i << endl;
        }
        i = i + 1;
    }

    return 0;
}
