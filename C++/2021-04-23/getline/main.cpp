#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Nu har Ingemar skickats till datorn, när jat tryckte på Enter
    // kvar, först i raden som ska skickas ligger ett "newline" tecken
    // Vi måste ta bort "newline" tecknet
    //
    // HAR DU ANVÄNT
    // cin >> namn;
    // MÅSTE DU LÄGGA IN
    // cin.ignore(1000,'\n');
    // INNAN DU KAN ANVÄNDA
    // getline(cin,namn);
    string namn;
    cout << "Vad heter du? ";
    cin >> namn;  // Läser in tills att ett "blanktecken" dyker upp, (mellanslag)
    cout << "Välkommen, " << namn << endl;

    cin.ignore(1000,'\n'); // Rensar bort nyradstecknet

    cout << "Vad heter du? ";
    getline(cin,namn); // Läser in tills nyradsteknet dyker upp, när du trysker "Retur"
    cout << "Välkommen, " << namn << endl;

    return 0;
}
