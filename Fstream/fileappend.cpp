#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream outfile;

    outfile.open("test.txt");
    outfile << 2 << " " << 4 << " ";
    outfile.close();

    outfile.open("test.txt", ios_base::app);
    outfile << 2 << " " << 4 ;
    outfile.close();

    ifstream infile("test.txt", ios::in);
    string zPliku{};
    while (!infile.eof())
    {
        infile >> zPliku;
        cout << zPliku << endl;
    }
    infile.close();

    return 0;
}