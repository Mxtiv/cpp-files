#include <iostream>
using namespace std;
void bubbleSort(int array[], int size)
{
    int temp{};
    for (int i{0}; i < size - 1; i++)
    {
        for (int j{0}; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void displayArray(int array[], int size)
{
    for (int i{0}; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int array[10]{5, 1, 9, 8, 2, 7, 4, 0, 3, 6};
    displayArray(array, 10);
    cout << endl;
    bubbleSort(array, 10);
    displayArray(array, 10);
}