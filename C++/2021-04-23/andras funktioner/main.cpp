#include <iostream>
#include <cmath>
using namespace std;
// Funktionsdelaration
// Returns the highest value of a floating a and b
float minFmax(float a, float b);
int main()
{
    float x = 2;
    float y = 3;
    float storst;
    cout << fmax(x, y) << endl;
    storst = minFmax(x, y);
    cout << storst << endl;
    cout << pow(2, storst) << endl;

    return 0;
}
// Funktionsdefinition
float minFmax(float a, float b)
{
    if (a > b) {
       return a;
    }
    return b;
}
