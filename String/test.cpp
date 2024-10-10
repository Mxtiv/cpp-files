#include <iostream>
#include <vector>
#include <string>
class Car
{
public:
    std::string brand;
    std::string model;
    int year;

    void displayCar(Car &samochod)
    {
        std::cout << "marka: " << samochod.brand << '\n'
                  << "model: " << samochod.model << '\n'
                  << "rok produkcji: " << samochod.year << '\n';
    }
};

Car createCar()
{
    Car samochod;
    std::cout << "podaj marke:\n";
    getline(std::cin, samochod.brand);
    std::cout << "podaj model:\n";
    getline(std::cin, samochod.model);
    std::cout << "podaj rok produkcji:\n";
    std::cin >> samochod.year;
    return samochod;
}
std::string mergeStrings()
{
    std::string result;
    std::string temp;

    std::cout << "Enter string 1:\n";
    getline(std::cin, temp);
    result += temp + ' ';

    std::cout << "Enter string 2:\n";
    getline(std::cin, temp);
    result += temp + ' ';

    std::cout << "Enter string 3:\n";
    getline(std::cin, temp);
    result += temp;

    return result;
}
void compareStrings()
{
    std::string str1;
    std::cout << "Enter string 1: ";
    getline(std::cin, str1);
    std::string str2;
    std::cout << "Enter string 2: ";
    getline(std::cin, str2);

    if (str1 == str2)
    {
        std::cout << "these strings are identical" << '\n';
    }
    else
    {
        std::cout << "these strings are not the same" << '\n';
    }
}
void strBelongs()
{
    std::string str1, str2;
    std::cout << "enter string\n";
    std::cin >> str1;
    std::cout << "enter sub string to find\n";
    std::cin >> str2;
    if (str1.find(str2) != std::string::npos)
    {
        std::cout << "yes\n";
    }
    else
    {
        std::cout << "no\n";
    }
}
void withWhiteSpace()
{
    std::string miejscowosc;
    std::cout << "podaj nazwe miejscowości: ";
    std::getline(std::cin, miejscowosc);
    std::cout << miejscowosc << '\n';
}
void replace()
{
    std::string str = "C++, Javascript, C#";
    std::string old_substr = "Javascript";
    std::string new_substr = "Java";
    std::size_t pos = str.find(old_substr);
    if (pos != std::string::npos)
    {
        str.replace(pos, old_substr.length(), new_substr);
    }
    std::cout << str << '\n';
}
void secondSpace()
{
    std::string s;
    std::cin >> s;
    int pos = s.find(" ", s.find(" ") + 1);
    if (pos != std::string::npos)
    {
        std::cout << "Second space found at position: " << pos << std::endl;
    }
    else
    {
        std::cout << "No second space found." << std::endl;
    }
    return;
}

std::string swapFirstAndThirdWord(std::string s = "Bob the bill")
{
    std::string firstWord = s.substr(0, s.find(" "));
    std::string secondWord = s.substr(s.find(" ") + 1, s.find(" ", s.find(" ") + 1) - s.find(" ") - 1);
    std::string thirdWord = s.substr(s.find(" ", s.find(" ") + 1) + 1);

    std::string result = thirdWord + " " + secondWord + " " + firstWord;
    std::cout << "result: " << result << std::endl;
    return result;
}

void letters(std::string str)
{
    for (char &c : str)
    {
        if (std::isupper(c))
        {
            c = std::tolower(c);
        }
        else if (std::islower(c))
        {
            c = std::toupper(c);
        }
    }
    std::cout << "result: ";
    std::cout << str << std::endl;
    return;
}
void ascii(std::string str)
{
    for (char &c : str)
    {
        if ((int)c >= 65 && (int)c <= 90)
        {
            c = (char)((int)c + 32);
        }
        else if ((int)c >= 97 && (int)c <= 122)
        {
            c = (char)((int)c - 32);
        }
    }
    std::cout << "result: ";
    std::cout << str << std::endl;
    return;
}
int main()
{
    // ex 1
    //  Car samochod = createCar();
    //  samochod.displayCar(samochod);
    // ex 2
    //  std::cout<<mergeStrings()<<'\n';
    // ex 3
    // compareStrings();
    // ex 4
    // strBelongs();
    // ex 5
    // withWhiteSpace();
    // ex 6
    // replace();
    // second space
    // secondSpace();
    
    // swap third letter with first
    std::cout << "enter string with at least 2 spaces\n";
    std::string s;
    std::getline(std::cin, s);
    swapFirstAndThirdWord(s);
    // upper to lower, lower to upper
    std::cout << "enter string\n";
    std::cin >> s;
    ascii(s);
    // upper to lower, lower to upper ver. 2
    std::cout << "enter string\n";
    std::cin >> s;
    letters(s);
}