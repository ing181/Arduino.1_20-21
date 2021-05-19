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
// void omkrets(float radie, float PI);
void omkrets(float radie);
int main()
{
    float PI = 3.1416;
    float radie;
    cout << "Ange radien ";
    cin >> radie;
    //omkrets(radie, PI);
    omkrets(radie);
    cout << "Arean blir " << (PI * radie*radie) << " om radien är " << radie << endl;


    return 0;
}
// void omkrets(float radie, float PI)
void omkrets(float radie)
{
    float PI = 3.1416;
    cout << "Omkretsen blir " << (2 * PI * radie) << " om radien är " << radie << endl;
}
