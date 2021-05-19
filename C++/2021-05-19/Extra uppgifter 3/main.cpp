#include <iostream>
using namespace std;
// Extra uppgift 3
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
    float prisUtanMoms;
    float moms;
    cout << "Mata in varans pris utan moms ";
    cin >> prisUtanMoms;
    cout << "Mata in momsen ";
    cin >> moms;
    cout << "Pris före moms " << prisUtanMoms << endl;
    cout << "moms i kronor " << prisUtanMoms*moms << endl;
    cout << "Pris med moms " << prisUtanMoms * (moms + 1) << endl;

    return 0;
}
