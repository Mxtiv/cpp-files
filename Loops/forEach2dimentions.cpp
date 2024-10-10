#include <iostream>
int main()
{
    int arr[4][3]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (auto &rows : arr)
    {
        for (auto &elem : rows)
        {
            std::cout << elem << ", ";
        }
    }
    std::cout << '\n';
    int min = arr[0][0];
    for (auto &rows : arr)
    {
        for (auto &elem : rows)
        {
            if (min > elem)
                min = elem;
        }
    }
    int max = arr[0][0];
    for (auto &rows : arr)
    {
        for (auto &elem : rows)
        {
            if (max < elem)
                max = elem;
        }
    }
    std::cout << "min: " << min << '\n';
    std::cout << "max: " << max << '\n';
}