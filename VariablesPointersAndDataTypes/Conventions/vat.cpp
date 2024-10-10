#include <iostream>
using namespace std;
double vat(double cost, double taxRate);
int main()
{
    double cost{}, taxRate{};
    cout << "insert cost and tax rate \n";
    cin >> cost >> taxRate;
    cout << "vat: " << vat(cost, taxRate);
}
double vat(double cost, double taxRate)
{
    return cost * taxRate;
}