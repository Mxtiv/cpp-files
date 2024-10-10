#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    cout<< "before\n" <<"vector size: " << v.size() <<"\nvector capacity: " << v.capacity();
    // v.clear();
    v.resize(0);
    cout << "\nafter" << "\nvector size: " << v.size() << "\nvector capacity: " << v.capacity();
    return 0;
}