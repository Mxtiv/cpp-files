#include <iostream>
#include <cmath> //#include <math.h>
int main()
{
    std::cout << "Rodzaje zaokragleń:\n";
    std::cout << "Podaj liczbe zmiennoprzecinkowa:\n";
    long double n;
    std::cin >> n;
    std::cout << "-ceil(argument) Zwraca najmniejszą wartość całkowitą nie mniejszą od wartości argumentu — zaokrąglenie w górę \n";
    std::cout << "ceil: " << ceil(n) << '\n';
    std::cout << "-floor(argument) Zwraca największą wartość całkowitą, która jest nie większa od wartości argumentu — zaokrąglenie w dół \n";
    std::cout << "floor: " << floor(n) << '\n';
    std::cout << "-trunc(argument) Zwraca najbliższą wartość całkowitą, która jest nie większa od wartości argumentu — obcięcie części ułamkowej\n";
    std::cout << "trunc: " << trunc(n) << '\n';
    std::cout << "-round(argument) Zwraca wartość całkowitą, której wartość jest najbliższa wartości argumentu — zaokrąglenie \n";
    std::cout << "round: " << round(n) << '\n';
}