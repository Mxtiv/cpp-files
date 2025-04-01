#include <iostream>

using namespace std;

struct Pizza
{
public:
    int ileSera{};
    int ileSzynki{};
    int ileBrokuly{};
    bool czyDuza{};

private:
    float cenaSera = 2.50 / 100.0;
    float cenaSzynki = 1.00 / 100.0;
    float cenaBrokuly = 3.00 / 100.0;
    float cenaCiastaMalego = 5.0;
    static int s_wydanePizze;

public:
    float cenaPizzy()
    {
        float cena = cenaCiastaMalego;
        if (czyDuza)
        {
            cena *= 2;
        }
        cena += ileSera * cenaSera;
        cena += ileSzynki * cenaSzynki;
        cena += ileBrokuly * cenaBrokuly;
        return cena;
    }

    float ileKalorii()
    {
        float kalorie = 200;
        if (czyDuza)
        {
            kalorie *= 2.0;
        }
        kalorie += ileSera * (402.0 / 100.0);
        kalorie += ileSzynki * (145.0 / 100.0);
        kalorie += ileBrokuly * (32.0 / 100.0);
        return kalorie;
    }
    bool czyVege()
    {
        return ileSzynki;
    }
    float getCenaSera()
    {
        return cenaSera;
    }
    float getCenaSzynki()
    {
        return cenaSzynki;
    }
    float getCenaBroku()
    {
        return cenaBrokuly;
    }
    float getCenaCiastaMalego()
    {
        return cenaCiastaMalego;
    }
    void setCenaSera(float cenaSera)
    {
        this->cenaSera = cenaSera;
    }
    void setCenaSzynki(float cenaSzynki)
    {
        this->cenaSzynki = cenaSzynki;
    }
    void setCenaBroku( float cenaBrokuly)
    {
        this->cenaBrokuly = cenaBrokuly;
    }
    void setCenaCiastaMalego(float cenaCiastaMalego)
    {
        this->cenaCiastaMalego = cenaCiastaMalego;
    }
    int get_s_wydanePizze(){
        return s_wydanePizze;
    }
    Pizza()
    {
        s_wydanePizze++;
    };
};
int Pizza::s_wydanePizze = 0;
int main()
{
    Pizza pizza;
    cout << "Witaj w automacie do pizzy!" << '\n';
    cout << "Ile sera?: ";
    cin >> pizza.ileSera;
    cout << "Ile szynki?: ";
    cin >> pizza.ileSzynki;
    cout << "Ile brokułów?: ";
    cin >> pizza.ileBrokuly;
    cout << "Czy duża (1 - tak, 0 - nie)?: ";
    cin >> pizza.czyDuza;

    cout << "\nTwoja pizza:" << '\n';
    cout << "Sera: " << pizza.ileSera << '\n';
    cout << "Szynki: " << pizza.ileSzynki << '\n';
    cout << "Brokułów: " << pizza.ileBrokuly << '\n';
    cout << "Duża: " << (pizza.czyDuza ? "Tak" : "Nie") << '\n';
    cout << "Cena: " << pizza.cenaPizzy() << " zł" << '\n';
    cout << "Kalorie: " << pizza.ileKalorii() << '\n';
    cout << "Wegetariańska: " << (pizza.czyVege() ? "Tak" : "Nie") << '\n';
    cout << "Dzisiaj wydane pizze: " << pizza.get_s_wydanePizze() << '\n';
    return 0;
}
//autor matthew calf