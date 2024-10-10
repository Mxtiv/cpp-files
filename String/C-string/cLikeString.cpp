#include <iostream>
#include <cstring>
#include <limits>
using namespace std;
int main()
{
    char imie[20];
    cin.get(imie, 20);
    cout << imie << endl;
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    char imie2[20];
    cin.get(imie2, 20);
    cout << imie2 << endl;
}