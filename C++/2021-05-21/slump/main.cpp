#include <iostream>
# include <stdlib.h>
# include <time.h>
using namespace std;
// Om slump
int main()
{
    srand(time(0)); // Skapa en ny följd av slumptal
    // "time(0)" är antalet sekunder sedan 1 januari 1070
    //  srand(645); Använder man samma heltal, blir slumptalen samma
    int i = 0;
    while (i<10)
    {

        cout << rand() << endl; // Ett slumptal mellan 0 och 327677599

        i = i + 1;
    }

    return 0;
}
