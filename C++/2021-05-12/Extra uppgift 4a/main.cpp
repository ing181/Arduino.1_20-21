#include <iostream>
using namespace std;
// Extra uppgift 4a
// Samma som uppgift 4, men använder en funktion
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
// Tänk på att använda variabelnamn som beskriver vad variabeln innehåller
// Om man delar upp variabelnamnet så att det går att läsa det som flera ord
// så här "yearOfBirth" så kallas det camel case (Tänk på kamelens pucklar)
// Ett annat sätt är snake case, samma variabel skrivs då
// "year_of_birth"
// Använd samma sätt att namnge dina variabler!

// Funktionsdeklaration, vad den heter, invärden och utvärden
void getRetirementAge(int currentYear, int yearOfBirth);
int main()
{
    int yearOfBirth;
    cout << "När är du född? ";
    cin >> yearOfBirth;
    int currentYear = 2021;


    // Funktionsanrop
    getRetirementAge(currentYear, yearOfBirth);

    return 0;
}
// Funktionsdefinition, vad den gör
void getRetirementAge(int currentYear, int yearOfBirth)
{
    int alder = currentYear - yearOfBirth;
    int retirementAge = 65;
    int i = 0;
    while ( ( (alder) + i) < retirementAge )
    {
        cout << "Du fyller " << (alder + i) << " i år " << (currentYear +i) << endl;
        i++;
    }
    cout << "Fyller 65 år i år, du får gå hem! " << (currentYear + i) << endl;
}
