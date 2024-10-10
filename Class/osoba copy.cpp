#include <iostream>
using namespace std;

class Osoba
{
private:
    int id;
    string imie;

public:
    static int liczbaInstancji;
    void print(string imie2 = "")
    {
        if (imie2 != "")
            cout << "cześć " << imie2 << " mam na imie " << imie;
        else
            cout << "brak danych";
        cout << "\naktualna liczba instancji to: " << liczbaInstancji;
    }
    Osoba()
    {
        liczbaInstancji++;
        id = 0;
        imie = "";
    }
    Osoba(int idWstaw, string imieWstaw)
    {
        liczbaInstancji++;
        id = idWstaw;
        imie = imieWstaw;
    }
};
int Osoba::liczbaInstancji = 0;
int main()
{
    Osoba person(12, "<imie>");
    person.print("<imie2>");

    // Osoba person;
    // person.print();
}