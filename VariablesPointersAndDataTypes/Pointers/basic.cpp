#include <iostream>
using namespace std;

int main(){
    int a{};
    int *aPtr{&a};
    cin >> *aPtr;
    cout << a;
}