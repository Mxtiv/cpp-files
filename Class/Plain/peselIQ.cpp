#include <iostream>
#include <string>

class date
{
public:
    unsigned short day{}, month{}, year{};
    date(short DAY, short MONTH, short YEAR)
    {
        day = DAY;
        month = MONTH;
        year = YEAR;
    }
    void print()
    {
        std::cout << " day: " << day << '\n';
        std::cout << " month: " << month << '\n';
        std::cout << " year: " << year << '\n';
    }
};
class Osoba
{
private:
    std::string pesel;
    bool isValidpesel(const std::string &pesel)
    {
        int s;
        s += ((int)pesel[0] - 48) * 1;
        s += ((int)pesel[1] - 48) * 3;
        s += ((int)pesel[2] - 48) * 7;
        s += ((int)pesel[3] - 48) * 9;
        s += ((int)pesel[4] - 48) * 1;
        s += ((int)pesel[5] - 48) * 3;
        s += ((int)pesel[6] - 48) * 7;
        s += ((int)pesel[7] - 48) * 9;
        s += ((int)pesel[8] - 48) * 1;
        s += ((int)pesel[9] - 48) * 3;
        int m = s % 10;
        int r = m == 0 ? 0 : 10 - m;

        if ((int)pesel[10] - 48 == r)
        {
            return true;
        }
        return false;
    }

public:
    int iq; 
    std::string plec;
    std::string getPlec()
    {
        char tenthDigit = pesel[9];
        if (tenthDigit % 2 == 0)
        {
            return "female";
        }
        else
        {
            return "male";
        }
    }
    void setIq(int iq)
    {
        if (iq >= 0 && iq <= 200)
        {
            this->iq = iq;
        }
        else
        {
            std::cerr << "Invalid IQ range!" << std::endl;
            exit(1);
        }
    }
    Osoba(const std::string &pesel, int iq)
    {
        if (isValidpesel(pesel))
        {
            this->pesel = pesel;
        }
        else
        {
            std::cout << "Invalid pesel!" << '\n';
            exit(1);
        }
        setIq(iq);
        this->plec = getPlec();
    }

    date birthDay()
    {
        unsigned short day{}, month{}, year{};
        day = 10 * (static_cast<unsigned short>(pesel.at(4)) - 48) + (static_cast<unsigned short>(pesel.at(5)) - 48);
        if (static_cast<unsigned short>(pesel.at(2)) - 48 > 1)
        {
            month = ((10 * (static_cast<unsigned short>(pesel.at(2)) - 48)) + (static_cast<unsigned short>(pesel.at(3)) - 48)) - 20;
            year = 2000 + (10 * (static_cast<unsigned short>(pesel.at(0)) - 48) + (static_cast<unsigned short>(pesel.at(1)) - 48));
        }
        else
        {
            month = 10 * (static_cast<unsigned short>(pesel.at(2)) - 48) + (static_cast<unsigned short>(pesel.at(3)) - 48);
            year = 1900 + (10 * (static_cast<unsigned short>(pesel.at(0)) - 48) + (static_cast<unsigned short>(pesel.at(1)) - 48));
        }
        return date(day, month, year);
    }
};
int main()
{
    std::string pesel;
    int iq;
    std::cout << "enter pesel, iq\n";
    std::cin >> pesel >> iq;
    Osoba osoba(pesel, iq);
    std::cout << "IQ: " << osoba.iq << std::endl;
    std::cout << "Plec: " << osoba.getPlec() << std::endl;
    std::cout << "date od birth:\n";
    osoba.birthDay().print();
    return 0;
}