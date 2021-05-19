#include <iostream>
using namespace std;
// Extra uppgifter 1
/*
Gör ett program som kan beräkna arean och omkretsen av en
cirkel om användaren (du) matar in
cirkelns radie.
Skapa en variabel av typen float (decimaltal eller flyttal)
float PI=3.1416 -glöm ej
använda decimalpunkt !!
Formel:
Omkrets = 2 * PI * r
Area =  PI * r^2
*/
int main()
{
    float PI = 3.14159265;
    float radie;
    cout << "Ange radien ";
    cin >> radie;
    cout << "Omkretsen är " << 2*PI*radie << endl;
    cout << "Arean är " << PI*radie*radie << endl;
    return 0;
}
