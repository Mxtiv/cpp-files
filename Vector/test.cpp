#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    vector<int> wektor;
    int rozmiarWektora, element;

    cout << "Ile elementow ma miec wektor: ";
    cin >> rozmiarWektora;

    wektor.resize(rozmiarWektora);

    for (int &rozmiarWektora : wektor)
    {
        cout << "Podaj " << rozmiarWektora << " element: ";
        cin >> element;
        rozmiarWektora = element;
    }

    cout << "Zawartosc wektora:" << endl;
    for (const int &rozmiarWektora : wektor)
    {
        cout << "Element: " << rozmiarWektora << " ";
    }

    if (wektor.empty())
    {
        cout << "Wektor jest pusty." << endl;
    }
    else
    {
        cout << "Wektor nie jest pusty." << endl;
    }

    return 0;
}
