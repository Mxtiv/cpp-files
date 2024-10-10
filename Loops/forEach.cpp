#include <iostream>
int main()
{
    int array[5]{1, 2, 3, 4, 5};
    for (auto num : array)
    {
        std::cout << num << " ";
    }
    std::cout << '\n';
    for (auto num : array)
    {
        if (num % 2 == 0)
            std::cout << num << " ";
    }
}