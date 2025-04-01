/*Definicja klasy exception z bibliteki <exception>
class exception {
public:
    exception() noexcept;// piszemy noexcept aby kompilator dla tej metody nie implementował obsługi błędów
    exception(const exception&) noexcept; //w niższych standardach zamiast noexcept piszemy  throw()
    exception& operator=(const exception&) noexcept; Rule of three
    virtual ~exception() noexcept;
    virtual const char* what() const noexcept;//const znaczy że funkcja nie zmienia obiektu.
};*/

#include <iostream>
#include <exception>
using namespace std;
class my_exception : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Pamiętaj cholero, nie dziel przez zero";
    }
};
int main()
{
    try
    {
        int a{}, b{};
        cout << "Podaj liczbe do podzielenia:\n";
        cin >> a;
        cout << "Podaj liczbe przez którą chcesz podzielic:\n";
        cin >> b;
        if (b == 0)
            throw my_exception();
        cout << "wynik: " << (double)a / b;
    }
    catch (const exception &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}