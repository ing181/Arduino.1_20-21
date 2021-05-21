#include <iostream>
using namespace std;
/*
2. Gör ett program som frågar efter ett tal. Efter inmatningen
undersöker programmet talet och presenterar en utskrift
som meddelar om "Talet är positivt", "Talet är negativt" eller "Talet är noll"
*/
int main()
{
    int tal;
    cout << "Mata in ett tal ";
    cin >> tal;

    if (tal == 0) {

        cout << "Talet är noll" << endl;
    }
    else if (tal < 0) {

        cout << "Talet är negativt" << endl;
    }
    /*
    else if (tal > 0) {

    cout << "Talet är positivt" << endl;
    }
    */
    else {
       cout << "Talet är positivt" << endl;
    }

    return 0;
}
