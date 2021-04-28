#include <iostream>
using namespace std;
// Funktionsdeklaration
// utvärde (datatyp), namn, invärde eller invärden (datatyp)
// datatyp namn(datatyp)
float angeStracka();
void beraknaSvar(float cykelStracka);
int main()
{
    /*
    float cykelStracka;
    cout << "Hur långt cyklar du varje dag? (i km) " << endl;
    cin >> cykelStracka;
    */

   // float cykelStracka = 7.1;
    float cykelStracka = angeStracka();
    beraknaSvar(cykelStracka);

/*
    if ( cykelStracka <= 0 )
    {
        cout << "Du borde cykla mer!" << endl;
    }
    else {

        if (cykelStracka < 5) {

            cout << "Du borde cykla lite mer" << endl;
        }
        else {

            cout << "Bra!" << endl;
        }

    }
*/
    return 0;
}
// Funktionsdefinition
float angeStracka()
{
    float cykelStracka;
    cout << "Hur långt cyklar du varje dag? (i km) " << endl;
    cin >> cykelStracka;
    return cykelStracka;
}
void beraknaSvar(float cykelStracka)
{
    if ( cykelStracka <= 0 )
    {
        cout << "Du borde cykla mer!" << endl;
    }
    else {

        if (cykelStracka < 5) {

            cout << "Du borde cykla lite mer" << endl;
        }
        else {

            cout << "Bra!" << endl;
        }

    }

}
