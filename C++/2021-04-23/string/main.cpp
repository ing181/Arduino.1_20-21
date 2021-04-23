#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Lerum";
    cout << s << endl;
    s = "Floda";
    cout << s << endl;
    s = "Typiskt, fungerar inte med svenska tecken";
    cout << s << endl;
    int antaltecken = s.length();
    cout << "Strängen s innehåller " << antaltecken << " tecken" << endl;
    string s1 = " dumt";
    string s2 = s+s1+" tycker jag";
    cout << s2+" ABSOLUT" << endl;
    cout << s2 << " ABSOLUT" << endl;
    string namn;
    cout << "Mata in ditt namn: ";
    cin >> namn;
    cout << "Välkommen, " << namn << endl;

    return 0;
}
