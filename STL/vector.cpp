#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    // cout << "Size: " << v.size() << endl;
    // cout << "Capacity: " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() <<endl;

    cout << "element at 2nd index: " << v.at(2) << endl;

    vector<int> a(5,1);
    cout << "print a" << endl;
    for(int i:a){
        cout << i <<" ";
    }

}