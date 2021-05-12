#include <iostream>
using namespace std;
// Extra uppgift 2
/*
Gör ett program där man kan mata in en varas pris före moms.
Momsen beräknas som 25% av
varans pris före moms.
Anta att du matar in 100kr vid körningen.
Programmet ska då redovisa utskriften:
Pris före moms 100:-
Moms 25:-
Pris med moms 125:-
*/
int main()
{
    float momsprocent = 1.25;
    float pris;
    cout << "Ange priset" << endl;
    cin >> pris;
    cout << "Priset med momsen inkluderad blir " << pris*momsprocent << " kronor." << endl;

    return 0;
}
