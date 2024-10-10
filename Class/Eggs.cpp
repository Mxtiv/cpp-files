#include <iostream>
using namespace std;
using std::string;

class Jajo
{
private:
    string kod;
    int typChowu;
    string krajPochodzenia;
    string reszta;
    static int s_iloscJaj;
    void setTypChowu()
    {
        this->typChowu = static_cast<int>(kod.at(0)) - 48;
    }
    void setKrajPochodzenia()
    {
        this->krajPochodzenia = kod.substr(1, 2);
    }
    void setReszta()
    {
        this->reszta = &kod[3];
    }

public:
    void setKod(string kod){
        this->kod = kod;
        setTypChowu();
        setKrajPochodzenia();
        setReszta();
    }
    string getTypChowuSlownie()
    {
        switch (typChowu)
        {
        case 0:
            return "ekologiczny";
        case 1:
            return "na wolnym wybiegu";
        case 2:
            return "ściułkowy";
        case 3:
            return "klatkowy";
        }
        return "nieznany";
    }
    Jajo(string kod)
    {
        this->kod = kod;
        setTypChowu();
        setKrajPochodzenia();
        setReszta();
        s_iloscJaj++;
    }
    void print()
    {
        cout << "---------------------------\n";
        cout << "nr na jaju: " << kod << '\n';
        cout << "typ chowu : " << getTypChowuSlownie() <<'\n';
        cout << "kraj pochodzenia: " << krajPochodzenia << '\n';
        cout << "reszta: " << reszta << '\n';
        cout << "aktualna ilosc jaj: " << s_iloscJaj << '\n';
    }
};
int Jajo::s_iloscJaj = 0;
int main(){
    Jajo jajo("1PL42347878");
    jajo.print();
    Jajo jajo2("0GE31472816");
    jajo2.print();
    return 0;
}