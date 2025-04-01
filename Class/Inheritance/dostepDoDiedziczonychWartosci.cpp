#include <iostream>
#include <string>

using namespace std;

class Base
{
protected:
    string protectedField;

public:
    int publicField;

    Base() : publicField(0), protectedField("Value") {}
};

class Derived : protected Base
{
public:
    Derived() {}

    void setPublicField(const int &publicField) { this->publicField = publicField; }

    int getPublicField() { return publicField; }

    void setProtectedField(const string &protectedField) { this->protectedField = protectedField; }

    string getProtectedField() { return protectedField; }
};

int main()
{
    Derived derivedObj;

    derivedObj.setPublicField(10);
    cout << "Public Field: " << derivedObj.getPublicField() << endl;

    derivedObj.setProtectedField("Edited Value");
    cout << "Protected Field: " << derivedObj.getProtectedField() << endl;

    return 0;
}

// W klasie bazowej jedna wlasność ma być dostępna w programie bezposrednio, a druga  nie, ale ma być dostępna w klasie pochodnej poprzez nazwę.
// W klasie pochodnej odziedziczone własności mają być protected. Wyedytuj wszystkie wlasnosci klasy pochodnej w programie głównym.
