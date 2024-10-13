#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int sum{};
    int zPliku;
    ofstream zapis("wyjscie.txt");
    zapis << 5 << " " << 7 << " " << 5;
    zapis.close();
    ifstream odczyt("wyjscie.txt");
    while (!odczyt.eof())
    {
        odczyt >> zPliku;
        cout << zPliku << endl;
        sum += zPliku;
    }
    cout << "SUMA: " << sum;
    odczyt.close();

    return 0;
}