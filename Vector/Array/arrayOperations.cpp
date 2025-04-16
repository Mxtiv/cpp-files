#include <iostream>
#include <cstdlib>
using namespace std;

struct Extreme
{
    int minValue{};
    int maxValue{};
};
class ArrayOperations
{
private:
    int *array;
    int size;

public:
    ArrayOperations(int size)
    {
        this->size = size;
        array = new int[size];
        srand(time(0));

        for (int i = 0; i < size; ++i)
        {
            array[i] = rand() % 6 + 1;
        }
    }

    ~ArrayOperations()
    {
        delete[] array;
    }

    void displayArray() const
    {
        for (int i = 0; i < size; ++i)
        {
            cout << i << ": " << array[i] << endl;
        }
    }

    void findOccurrences(int target) const
    {
        bool found = false;
        for (int i = 0; i < size; ++i)
        {
            if (array[i] == target)
            {
                cout << "Element " << target << " znaleziony na indeksie: " << i << endl;
                found = true;
            }
        }
        if (!found)
        {
            cout << "Element " << target << " nie został znaleziony w tablicy." << endl;
        }
    }

    int divisibleByThree() const
    {
        int count = 0;
        cout << "Liczby podzielne przez 3: ";
        for (int i = 0; i < size; ++i)
        {
            if (array[i] % 3 == 0)
            {
                cout << array[i] << " ";
                ++count;
            }
        }
        cout << endl;
        return count;
    }

    int productOfElements() const
    {
        int product = 1;
        for (int i = 0; i < size; ++i)
        {
            product *= array[i];
        }
        return product;
    }

    Extreme findExtremes() const
    {
        Extreme values;
        values.minValue = array[0];
        values.maxValue = array[0];
        for (int i = 1; i < size; ++i)
        {
            if (array[i] < values.minValue)
            {
                values.minValue = array[i];
            }
            if (array[i] > values.maxValue)
            {
                values.maxValue = array[i];
            }
        }
        cout << "Minimalna wartość w tablicy: " << values.minValue << endl;
        cout << "Maksymalna wartość w tablicy: " << values.maxValue << endl;
        return values;
    }
};

int main()
{
    int size;
    cout << "Podaj rozmiar tablicy (większy niż 10): ";
    cin >> size;
    if (size <= 10)
    {
        cout << "Rozmiar tablicy musi być większy niż 10." << endl;
        return 1;
    }
    ArrayOperations arrayOperations(size);
    cout << "\nWyświetlanie tablicy:\n";
    arrayOperations.displayArray();
    int target;
    cout << "\nPodaj wartość do wyszukania w tablicy: ";
    cin >> target;
    arrayOperations.findOccurrences(target);
    int count = arrayOperations.divisibleByThree();
    cout << "Liczba elementów podzielnych przez 3: " << count << endl;
    cout << "Iloczyn wszystkich elementów tablicy: " << arrayOperations.productOfElements() << endl;
    arrayOperations.findExtremes();

    return 0;
}
