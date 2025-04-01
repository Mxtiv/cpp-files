#include <iostream>
#include <cmath>
using namespace std;
template <typename T1, typename T2>
T2 function(T1 number1, T2 number2)
{
    cout << "konkretyzacja  - ładna dziś pogoda\n";
    return number2;
}
template <>
float function<int, float>(
    int zmienna, float zmienna1)
{
    cout << "specjalizacja int float - ";
    cout << static_cast<float>(zmienna + zmienna1) / 2 << '\n';
    return static_cast<float>(zmienna + zmienna1) / 2;
}
template <>
double function<double, double>(
    double zmienna, double zmienna1)
{
    cout << "specjalizacja double double - ";
    cout << zmienna * zmienna1 << "\n";
    return zmienna * zmienna1;
}
int main()
{
    function(1, 2.0f);
    function<int, float>(5, 2.0f);
    function(8.2f, 2);
    function<float, int>(8.7f, 2);
    function(3.0, 2.5);
    function<double, double>(3.0, 7.5);
    return 0;
}
