#include <iostream>
using namespace std;
// Funktionen deklareras
// Skriver ut "Hej" 10 gånger
void minFunktion(int x);
int main()
{
    cout << "Hello world! 1" << endl;
    minFunktion(99);
    cout << "Hello world! 2" << endl;
    minFunktion(44);
    int tal = 5;
    if (tal == 4)
    {
        cout << "Samma" << endl;
    }
    else
    {
        cout << "Inte samma" << endl;
    }

    return 0;
}
void minFunktion(int x)
{
    int i = 0;
    while (i < 10)
    {
        cout << "Hej " << x << endl;
        i = i + 1;
    }
}
