#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setw(10) << std::setfill('*') << 42 << std::endl;
    std::cout << std::setw(10) << std::setfill('-') << 123 << std::endl;

    return 0;
}
