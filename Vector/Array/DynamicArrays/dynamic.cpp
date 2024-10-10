#include <iostream>
#include <string>
using namespace std;

struct Osoba
{
    short wiek{};
    string imie;
};
Osoba *create(int size)
{
    Osoba *ludzie = new Osoba[size];
    return ludzie;
}
void fill(Osoba ludzie[], int size)
{
    for (int i{}; i < size; i++)
    {
        cout << "podaj wiek osoby " << i + 1 << '\n';
        cin >> ludzie[i].wiek;
        cout << "podaj imie osoby " << i + 1 << '\n';
        cin >> ludzie[i].imie;
    }
}
int searchByAge(Osoba *ludzie, int size)
{   
    cout << "podaj szukany wiek\n";
    int search;
    cin >> search;
    int index{-1};
    for (int i{}; i < size; i++){
        if(ludzie[i].wiek == search)
            index = i;
    }
    return index;
}
int searchByName(Osoba *ludzie, int size)
{
    cout << "podaj szukane imie\n";
    string search;
    cin >> search;
    int index{-1};
    for (int i{}; i < size; i++){
        if(ludzie[i].imie == search)
            index = i;
    }
    return index;
}
int main()
{   
    cout << "Podaj rozmiar tablicy\n";
    int size;
    cin >> size;
    Osoba *ludzie = create(size);
    fill(ludzie, size);
    bool flag = false;
    cout << "chcesz przeszukać tablice?  0/1\n";
    cin >> flag;
    if (flag == true)
    {
        cout << "podaj szukany wiek oraz szukane imie\n";
        int age;
        cin >>  age;
        string name;
        cin >> name;
        cout << '\n';
        for(int i{};i<size;i++){
            if(ludzie[i].imie == name || ludzie[i].wiek == age){
                cout<< "wiek: " << ludzie[i].wiek << "\nimie: " << ludzie[i].imie<< "\n\n";
            }
        }
    }
    delete [] ludzie;
    return 0;
}