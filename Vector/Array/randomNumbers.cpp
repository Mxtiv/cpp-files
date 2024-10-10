#include <iostream>
#include <cstdlib>
using namespace std;
void wypelnijLosowo(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++) // wypełnianie tablicy losowymi cyframi.
    {
        srand(time(NULL) * (i + 1)); // generujemy nowy zestaw liczb losowych
        tablica[i] = rand() % 10;    // wstawiamy do i-tego elementu losową cyfrę
    }
}
void wypiszTablice(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++) // wypisujemy zawartość wszystkich elementów tablicy z przecinkami.
    {
        cout << tablica[i] << ", ";
    }
}
int main(){
    int liczby[10];
    wypelnijLosowo(liczby, 10);
    wypiszTablice(liczby, 10);
    return 0;
}