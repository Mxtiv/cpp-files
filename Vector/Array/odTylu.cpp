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
void odTylu(int tablica[], int rozmiarTablicy)
{
    int temp;
    for (int i = 0; i < rozmiarTablicy / 2; i++)
    {
        temp = tablica[i];
        tablica[i] = tablica[rozmiarTablicy - i - 1];
        tablica[rozmiarTablicy - i - 1] = temp;
    }
}
int main()
{
    int tablica[10];
    wypelnijLosowo(tablica, 10);
    cout << "tablica przed zamianą:" << endl;
    wypiszTablice(tablica, 10);
    cout << endl;
    odTylu(tablica, 10);
    cout << "tablica po zamianie:" << endl;
    wypiszTablice(tablica, 10);
    return 0;
}