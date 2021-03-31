#include <iostream>

using namespace std;

int main()
{
    int tal = 78;
    // Tecken med speciell betydelse, specialtecken
    // EX: " och \
    // \ gör så att tecknet efter får en speciell betydelse
    // n efter \ betyder new line (samma sak som att skriva endl)
    cout << "tal" << "n" << "hej" << endl;
    cout << "tal" << "\n" << "hej" << endl;
    cout << "tal" << endl << "hej" << endl;
    cout << "Mjölk"	<< "\t" << "\t" << "18 kr/lit" << endl;
    cout << "Filmjölk"	<< "\t" << "22 kr/lit" << endl;
    cout << "Lök"	<< "\t" << "\t" << "3 kr/kg" << endl;

    // \ före ett specialtecken gör om specialteknet till ett vanligt tecken
    cout << "\"Skall visas med dubbelfnuttar\"" << endl;
    // Om man vill skriva ut "\"
    cout << "\\" << endl;
    cout << "\\\\" << endl;

    return 0;
}
