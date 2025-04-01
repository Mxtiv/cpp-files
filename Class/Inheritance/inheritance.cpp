#include <iostream>
using namespace std;

// Definicja klasy bazowej Pracownik:
class Pracownik
{
public:
    string imie{""};
    string nazwisko{""};

    string zwrocDane()
    {
        return imie + " " + nazwisko;
    }
};

// Definicja klasy pochodnej Nauczyciel:
class Nauczyciel : public Pracownik
{
public:
    string przedmiot{""};

    string zwrocDane()
    {
        return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
    }
};

// Definicja klasy pochodnej Wychowawca:
class Wychowawca : public Nauczyciel
{
public:
    string klasa{""}; 

    string zwrocDane()
    {
        return imie + " " + nazwisko + ", przedmiot: " + przedmiot + ", klasa: " + klasa;
    }
};

int main()
{
    Wychowawca wychowawca;
    wychowawca.imie = "Anna";
    wychowawca.nazwisko = "Nowak";
    wychowawca.przedmiot = "matematyka";
    wychowawca.klasa = "3A";

    cout << "Dane wychowawcy: " << wychowawca.zwrocDane() << endl;
    return 0;
}