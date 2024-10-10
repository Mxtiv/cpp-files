#include <iostream>
using namespace std;
void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
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
    insertionSort(array, 10);
    displayArray(array, 10);
}