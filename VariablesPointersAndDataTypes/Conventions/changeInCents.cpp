#include <iostream>
using namespace std;
namespace inCents
{
    int dollar{100};
    int quarter{25};
    int dime{10};
    int nickel{5};
    int penny{1};
}
void change(int cents)
{
    cout << "dollars: " << cents / inCents::dollar << endl;
    cents = cents % inCents::dollar;
    cout << "quarters: " << cents / inCents::quarter << endl;
    cents = cents % inCents::quarter;
    cout << "dimes: " << cents / inCents::dime << endl;
    cents = cents % inCents::dime;
    cout << "nickels: " << cents / inCents::nickel << endl;
    cents = cents % inCents::nickel;
    cout << "penny: " << cents / inCents::penny << endl;
    cents = cents % inCents::penny;
}
int main()
{
    cout << "Enter cents:" << endl;
    int cents;
    cin >> cents;
    cout << "ur change is:"<<endl;
    change(cents);
}
