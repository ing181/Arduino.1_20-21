#include <iostream>
#include <string>
using namespace std;
/*
Skriv ett program som ber användaren Skriva in sitt förnamn.
Programmet skriver ut "Welcome (förnamn)"
Utöka programmet så att om användaren heter "Gundrun" så skriver programmet ut
"Verry Welcome, Gudrun"
Tips: strängar (string) går att jämföra.
string s1 = "Hej";
string s2 = "Du"
if (s1 == s2) {
}
else {
}
*/
int main()
{
    string namn;
    cout << "Vad heter du? ";
    cin >> namn;


    if ( namn == "Gudrun" ) {

        cout << "Verry Welcome, "  << namn << endl;
    }
    else {
         cout << "Welcome "  << namn << endl;
    }


    return 0;
}
