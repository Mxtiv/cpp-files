#include <iostream>
#include <cstdlib>
using namespace std;
void wypelnijLosowo(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        srand(time(NULL) * (i + 1));
        tablica[i] = rand() % 10;
    }
}
void wypiszTablice(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        cout << tablica[i] << ", ";
    }
}
void sumaTablic(int tablica[], int tablica2[], int tablica3[], int size)
{
    for (int i = 0; i < size; i++)
    {
        tablica3[i] = tablica[i] + tablica2[i];
    }
}
int main()
{
    int tablica[10], tablica2[10], tablica3[10];
    wypelnijLosowo(tablica, 10);
    cout << "tablica 1: ";
    wypiszTablice(tablica, 10);
    cout << endl;
    wypelnijLosowo(tablica2, 10);
    cout << "tablica 2: ";
    wypiszTablice(tablica, 10);
    cout << endl;
    sumaTablic(tablica, tablica2, tablica3, 10);
    cout << "tablice po dodaniu: ";
    wypiszTablice(tablica3, 10);
    return 0;
}