#include <iostream>
using namespace std;
// Definicja C-unii o nazwie Ocena:
union Ocena
{
    short ocena_c; // ocena całkowita, np. 3
    float ocena_r; // ocena z połówkami, np. 3.5
};
int main()
{
    // Deklaracja zmiennej ocena połączona z inicjalizacją wartością 4 jej elementu członkowskiego ocena_c:
    Ocena ocena = {ocena.ocena_c = 4};
    // Rozmiar unii:
    cout << sizeof(ocena) << endl; // 4
    // Rozmiar elementu członkowskiego ocena_c:
    cout << sizeof(ocena.ocena_c) << endl; // 2
    // Wyświetlenie wartości elementu członkowskiego ocena_c:
    cout << ocena.ocena_c << endl; // 4
    // Nadanie wartości elementowi członkowskiemu ocena_r:
    ocena.ocena_r = 3.5;
    cout << sizeof(ocena) << endl;         // 4
    cout << sizeof(ocena.ocena_r) << endl; // 4
    // Wyświetlenie wartości elementu członkowskiego ocena_r:
    cout << ocena.ocena_r << endl; // 3.5
    cout << ocena.ocena_c;         // 0 to pole przyjmuje wartość 0 bo wstawiłem do innego. W strukturze miałbym tą wartość, ale struktura zajmuje więcej pamięci
    return 0;
}