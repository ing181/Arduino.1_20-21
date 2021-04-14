#include <iostream>
using namespace std;
// Funktionsdeklaration
// invärde, utvärde och namn
// int, från integer heltal
// Om utvärde
// void betyder "inget skickas tillbaka"
// vill du ha något till bak anges datatypen
int minFunktion2(int a);
int main()
{
    int varv = 0;
    while (varv < 3) {
    cout << "Rad 9" << endl;
    cout << minFunktion2(1000) << endl;
    cout << "Rad 11" << endl;
    // variabeln varv tildelas (får)
    // värdet av sig själv + 1
    varv = varv + 1;
    }

    return 0;
}
// Funktionsdefinition
int minFunktion2(int a)
{
    int summa = a + 4;
   // cout << "Du skickade " << summa << " till funktionen" << endl;
   return summa;
}
