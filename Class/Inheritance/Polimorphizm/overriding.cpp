#include <iostream>
#include <string>

using std::string, std::cout;
class Imie
{
public:
    string imie;
    virtual void display();
};

class Nazwisko
{
public:
    string nazwisko;
    virtual void display();
};

class Klasa
{
public:
    string klasa;
    virtual void display();
};

class Przedmiot
{
public:
    string przedmiot;
    virtual void display();
};

class Pracownik : public Imie, public Nazwisko
{
    virtual void display();
};

class Nauczyciel : public Imie, public Nazwisko, public Przedmiot
{
    virtual void display();
};

class Wychowawca : public Imie, public Nazwisko, public Klasa
{
    virtual void display();
};

