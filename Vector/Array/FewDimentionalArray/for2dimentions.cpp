#include <iostream>
int main()
{
    int arr[4][3]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << arr[i][j] << ", ";
        }
    }
    std::cout << '\n';
    int min = arr[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (min > arr[i][j])
                min = arr[i][j];
        }
    }
    int max = arr[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
    }
    std::cout << "min: " << min << '\n';
    std::cout << "max: " << max << '\n';
}