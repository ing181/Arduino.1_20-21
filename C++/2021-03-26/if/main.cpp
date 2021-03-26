#include <iostream>
using namespace std;
int main()
{
    int tal; // En variabel som kan innehålla heltal
    // inmatning från cin (tangentbordet) till en variabel
    // Vi använder >> (inmatningsoperatorn)
    cin >> tal;
    if ( tal == 4 )
    {
        // utmatning från programmet till cout (skärmen)
        // cout (skärmen) och << kallas utmatningsoperator
        // endl (ny rad)
        cout << "SANT" << endl;
    }
    else {

        cout << "FALSKT" << endl;
    }
    return 0;
}
