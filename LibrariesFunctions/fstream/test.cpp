#include <iostream>
#include <fstream>

using namespace std;
void addElement();
void displayElements();
int numbersSum();
int main()
{
    char selection;

    while (selection != 'q')
    {
        cout << "select:\na - add element\nd - display elements\ns - display sum\nq - quit\n";
        cin >> selection;
        switch (selection)
        {
        case 'a':
            addElement();
            break;
        case 'd':
            displayElements();
            break;
        case 's':
            cout << "sum: " << numbersSum() << '\n';
            break;
        case 'q':
            cout << "bye bye!!\n";
            break;
        default:
            cout << "uknown selection\n";
        }
    }
    return 0;
}
void addElement()
{
    ofstream file;
    int toAdd;
    file.open("numbers.txt", ios_base::app);
    cin >> toAdd;
    file << " " << toAdd;
    file.close();
    cout << "element added\n";
}
void displayElements()
{
    ifstream infile("numbers.txt", ios::in);
    string fromFile{};
    while (!infile.eof())
    {
        infile >> fromFile;
        cout << fromFile << endl;
    }
    infile.close();
}
int numbersSum()
{
    ifstream infile("numbers.txt", ios::in);
    int fromFile{}, sum{};
    while (!infile.eof())
    {
        infile >> fromFile;
        sum += fromFile;
    }
    infile.close();
    return sum;
}