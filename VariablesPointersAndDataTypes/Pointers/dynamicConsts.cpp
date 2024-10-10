#include <iostream>
int main(){
    const int *ptr1 = new int;
    int *const ptr2 = new int;
    int num {5};
    ptr1 = &num;
    *ptr2 = num;
    // *ptr1 = num;
    // ptr2 = &num;
    std::cout<<*ptr1 << " " << *ptr2 << '\n';
}