#include <iostream>
using namespace std;
void displayArray(int array[], int size)
{
    for (int i{0}; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
void selectionSort(int array[], int size)
{
    for (int i{0}; i < size; i++)
    {
        int min = array[i];
        int index = i;
        for (int j{}; j + i < size; j++)
        {
            if (array[j + i] < min)
            {
                min = array[j + i];
                index = j + i;
            }
        }
        int temp = array[i];
        array[i] = min;
        array[index] = temp;
    }
}
int main()
{
    int array[10]{5, 1, 9, 8, 2, 7, 4, 0, 3, 6};
    displayArray(array, 10);
    cout << endl;
    selectionSort(array, 10);
    displayArray(array, 10);
}