#include <iostream>
using namespace std;

class Pracownik
{
    string imie;

public:
    string nazwisko;
    void wyswietlDane()
    {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
    }
    const string &getImie() const
    {
        return imie;
    }
    void setImie(string imie)
    {
        this->imie = imie;
    }
};

Pracownik *pobierzDane(Pracownik *w_p)
{
    string temp;
    cout << "Imię = ";
    cin >> temp;
    w_p->setImie(temp);
    cout << "Nazwisko = ";
    cin >> w_p->nazwisko;
    return w_p;
}

void wyswietlDane(const Pracownik *w_p)
{
    cout << "Imię: " << w_p->getImie() << endl;
    cout << "Nazwisko: " << w_p->nazwisko << endl;
}

int main()
{
    Pracownik *w_pracownik = new Pracownik();
    w_pracownik = pobierzDane(w_pracownik);
    wyswietlDane(w_pracownik);
    delete w_pracownik;
    return 0;
}