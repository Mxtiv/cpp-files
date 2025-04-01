#include <iostream>
using namespace std;

struct Data
{
    int dd, mm, rr;
};
class Uczen
{
private:
    short klasa{};

public:
    short numer{};
    int id{};
    string imie, nazwisko;
    Data data_urodzenia{};
    void promocja()
    {
        klasa++;
    }
    int getClass()
    {
        return klasa;
    }
    void setClass(int klasaUstaw)
    {
        klasa = klasaUstaw;
    }
};
int main()
{
    // Utworzenie obiektu uczen jako instancji klasy uczen:
    Uczen uczen;
    // Wyświetlenie kontrolne bieżących wartości zmiennych członkowskich obiektu uczen:
    cout << "Numer identyfikacyjny " << uczen.id << endl;
    cout << "Imię: " << uczen.imie << endl;
    cout << "Nazwisko: " << uczen.nazwisko << endl;
    cout << "Data urodzenia:" << endl;
    cout << "dzień = " << uczen.data_urodzenia.dd << endl;
    cout << "miesiąc = " << uczen.data_urodzenia.mm << endl;
    cout << "rok = " << uczen.data_urodzenia.rr << endl;
    cout << "klasa = " << uczen.getClass() << endl;
    cout << "nr w dzienniku = " << uczen.numer << endl;
    uczen.promocja();
    cout << "klasa(po promocji) = " << uczen.getClass() << endl;
    return 0;
}