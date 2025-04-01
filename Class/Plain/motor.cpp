#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Motor
{
private:
    bool czyDwusuw;
    bool czyCross;
    int pojemnosc;
    float ilePaliwa{0};
    float pojemnoscBaku{20};

public:
    string kolor;
    bool czyLyse;

    Motor()
    {
        this->czyDwusuw = false;
        this->czyCross = false;
        this->pojemnosc = 50;
        this->kolor = "";
        this->czyLyse = false;
    }

    Motor(bool czyDwusuw, bool czyCross, int pojemnosc, string kolor, bool czyLyse, float pojemnoscBaku = 20)
    {
        this->czyDwusuw = czyDwusuw;
        this->czyCross = czyCross;
        this->pojemnosc = pojemnosc;
        this->kolor = kolor;
        this->czyLyse = czyLyse;
        this->pojemnoscBaku = pojemnoscBaku;
    }

    void tankuj(float iloscPaliwa)
    {
        cout << "Tankuje " << iloscPaliwa << " litra paliwa." << endl;
        this->ilePaliwa += iloscPaliwa;
        if (this->ilePaliwa > this->pojemnoscBaku)
        {
            cout << "za dużo paliwa\n";
            this->ilePaliwa = this->pojemnoscBaku;
        }
    }

    void setPojemnoscBaku(float pojemnoscBaku)
    {
        this->pojemnoscBaku = pojemnoscBaku;
    }
    void setCzyDwusuw(bool czyDwusuw)
    {
        this->czyDwusuw = czyDwusuw;
    }

    void setCzyCross(bool czyCross)
    {
        this->czyCross = czyCross;
    }

    void setPojemnosc(int pojemnosc)
    {
        this->pojemnosc = pojemnosc;
    }

    float getIlePaliwa()
    {
        return ilePaliwa;
    }
    bool getCzyDwusuw()
    {
        return czyDwusuw;
    }

    bool getCzyCross()
    {
        return czyCross;
    }

    int getPojemnosc()
    {
        return pojemnosc;
    }

    bool czyTymPojade()
    {
        return kolor == "czerwony" && czyDwusuw && !czyLyse;
    }

    bool czyNadajeSie(int minimalnaPojemnosc)
    {
        return czyTymPojade() && pojemnosc >= minimalnaPojemnosc;
    }
    friend void compareMotors(Motor motor1, Motor motor2);
};

void compareMotors(Motor motor1, Motor motor2)
{
    int c1{}, c2{};
    if (motor1.czyDwusuw == true && motor2.czyDwusuw == false)
        c2++;
    else if (motor1.czyDwusuw == false && motor2.czyDwusuw == true)
        c1++;

    if (motor1.czyCross == true && motor2.czyCross == false)
        c1++;
    else if (motor1.czyCross == false && motor2.czyCross == true)
        c2++;

    if (motor1.pojemnosc < motor2.pojemnosc)
        c2++;
    else if (motor1.pojemnosc > motor2.pojemnosc)
        c1++;

    if (motor1.kolor == "czerwony" && motor2.kolor != "czerwony")
        c1++;
    else if (motor2.kolor == "czerwony" && motor1.kolor != "czerwony")
        c2++;

    if (motor1.kolor == "czerwony" && motor2.kolor != "czerwony")
        c1++;
    else if (motor2.kolor == "czerwony" && motor1.kolor != "czerwony")
        c2++;
    if (motor1.czyLyse == true && motor2.czyLyse == false)
        c2++;
    else if (motor2.czyLyse == true && motor1.czyLyse == false)
        c1++;
    if (motor1.pojemnoscBaku > motor2.pojemnoscBaku)
        c1++;
    else if (motor1.pojemnoscBaku < motor2.pojemnoscBaku)
        c2++;

    if (c1 > c2)
    {
        cout << "motor1 wygrał\n";
        return;
    }
    else if (c1 < c2)
    {
        cout << "motor2 wygrał\n";
        return;
    }
    else
    {
        cout << "remis\n";
        return;
    }
}

int main()
{
    Motor motor1(true, false, 125, "czerwony", false, 30);
    Motor motor2(false, true, 250, "niebieski", true);
    int minimalnaPojemnosc;
    cout << "Podaj minimalną pojemność: ";
    cin >> minimalnaPojemnosc;
    cout << "ilosc paliwa: " << motor1.getIlePaliwa() << '\n';
    motor1.tankuj(25);
    cout << "ilosc paliwa: " << motor1.getIlePaliwa() << '\n';
    cout << boolalpha;
    cout << "Motor 1 nadaje się: " << motor1.czyNadajeSie(minimalnaPojemnosc) << endl;
    cout << "Motor 2 nadaje się: " << motor2.czyNadajeSie(minimalnaPojemnosc) << endl;
    compareMotors(motor1, motor2);
    return 0;
}