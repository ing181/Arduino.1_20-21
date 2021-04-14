#include <iostream>
using namespace std;
void minFunktion();
int main()
{
    // == jämför det som är till vänster
    // om == med det som är till höger
    //
    while ( 1 == 1 ) {
        cout << "Från rad 10" << endl;
        // minFunktion();
        cout << "Från funktionen" << endl;
        cout << "Från funktionen" << endl;
        // minFunktion();
        cout << "Från rad 15" << endl;

    }
    return 0;
}
void minFunktion() {
    cout << "Från funktionen" << endl;
}
