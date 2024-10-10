#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v)
{
    for (auto val : v)
    {
        cout << val << ' ';
    }
}
int smallest(vector<int> v)
{
    int smallest{v.at(0)};
    for (auto val : v)
    {

        if (val < smallest)
        {
            smallest = val;
        }
    }
    return smallest;
}
int largest(vector<int> v)
{
    int largest{v.at(0)};
    for (auto val : v)
    {
        if (val > largest)
        {
            largest = val;
        }
    }
    return largest;
}
double average(vector<int> v)
{
    double sum{};
    for (auto val : v)
    {
        sum += val;
    }
    double average = sum / static_cast<double>(v.size());
    return average;
}
void menu(vector<int> v)
{
    char selection{};
    do
    {
        cout << "\nselect an option\n";
        cout << "p - print v elements\n";
        cout << "a - add new element\n";
        cout << "m - mean of v\n";
        cout << "s - smallest element\n";
        cout << "l - largest element\n";
        cin >> selection;
        if (selection == 'p' || selection == 'P')
        {
            if (v.size() != 0)
                print(v);
            else
                cout << "no data";
            cout << endl;
        }
        else if (selection == 'a' || selection == 'A')
        {
            int n;
            cin >> n;
            v.push_back(n);
            cout << endl;
        }
        else if (selection == 'm' || selection == 'M')
        {
            if (v.size() != 0)
                cout << "average: " << average(v);
            else
                cout << "no data";
            cout << endl;
        }
        else if (selection == 's' || selection == 'S')
        {
            if (v.size() != 0)
                cout << "smallest number: " << smallest(v);
            else
                cout << "no data";
            cout << endl;
        }
        else if (selection == 'l' || selection == 'L')
        {
            if (v.size() != 0)
                cout << "largest number: " << largest(v);
            else
                cout << "no data";
            cout << endl;
        }
        else if (selection == 'q' || selection == 'Q')
        {
            cout << "Goodbye!" << endl;
        }
    } while (selection != 'q' && selection != 'Q');
}
int main()
{
    vector<int> v{};
    menu(v);
    return 0;
}
