#include <iostream>  //dołączamy polecenia z biblioteki iostream
using namespace std; // w całym programie używamy standardowej przestrzeni nazw.
int main()
{

    cout << sizeof(float) << endl;  // 4
    cout << sizeof(double) << endl; // 8
    cout << sizeof(int) << endl;    // 4
    cout << sizeof(string);         // 32
    return 0;
}