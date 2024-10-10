#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
void fill(vector<int> &v, int size)
{
    int element;
    int i{};
    for (int &val : v)
    {
        srand(time(NULL) * (i + 1));
        val = (rand() % 20) + 1;
        i++;
    }
}
void display(vector<int> v)
{   
    cout << "elements: " << '\n';
    for (int val : v)
    {
        cout << val << '\n';
    }
}
void insert(vector<int> &v)
{ // insert in begin, second, end and erases third element
    cout << "enter number on begin\n";
    int temp;
    cin >> temp;
    v.insert(v.begin(), temp);
    cout << "enter number on second place\n";
    cin >> temp;
    v.insert(v.begin() + 1, temp);
    cout << "enter number on end\n";
    cin >> temp;
    v.insert(v.end(), temp);
    v.erase(v.begin()+2);
}
vector<int> modulothree(vector<int> v)
{
    vector<int> numbers;
    for (int val : v)
    {
        if(val%3 == 0)
            numbers.push_back(val);
    }
    return numbers;
}
int main()
{
    int size;
    cout << "enter size: ";
    cin >> size;
    cout << '\n';
    vector<int> v;
    v.resize(size);
    fill(v, size);
    display(v);
    insert(v);
    display(v);
    vector<int> numbers = modulothree(v);
    cout << "modulo 3 ";
    display(numbers);
}