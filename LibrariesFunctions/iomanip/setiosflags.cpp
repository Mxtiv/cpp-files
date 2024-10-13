#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setiosflags(std::ios::fixed);
    std::cout << "Using setiosflags with fixed: " << 123.456789 << std::endl;

    std::cout << std::resetiosflags(std::ios::fixed);
    std::cout << "Resetting to default: " << 123.456789 << std::endl;

    return 0;
}
 