#include <iostream>
using namespace std;
// Extra uppgift 4
/*
Skriv programmet aha med följande uppträdande
När är du född? => 1942
Aha, 58 år i år!
Fyller 59 år 2008
Fyller 60 år 2009
:::::::::
:::::::::
Fyller 65 år 2014
Sen får du gå hem!
*/
int main()
{
    int yearOfBirth; // Camel case
    // int year_of_birth // Snake case
    int currentYear = 2021;

    cout << "När är du född? ";
    cin >> yearOfBirth;
    int alder = currentYear - yearOfBirth;
    //cout << alder << endl; // 63
    int i = 0;
    while ( (alder+i) <= 65 ) {

       cout << "Fyller " << (alder + i) << " år " << (currentYear + i) << endl;
       //i=i+1;
       i++;
    }

    cout << "Sen får du gå hem!" << endl;

    return 0;
}
