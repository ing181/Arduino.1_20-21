#include <iostream>
using namespace std;
/*
B. Personer som är yngre än 15 år eller äldre än 65 år åker med lokaltrafiken för 25 kr/resa.
För övriga kostar resan 35 kr/resa. Konstruera ett
program som frågar efter åldern och sedan skriver ut resans pris.
Detta går att lösa på flera sätt.
*/
int main()
{
    int alder;
    cout << "Hur gammal är du? ";
    cin >> alder;

    if (alder >= 15 && alder <= 65) {
        cout << "Resan kostar 35 kronor" << endl;
    }
    else {

        cout << "Resan kostar 25 kronor" << endl;
    }

    return 0;
}
