#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout << num << endl;

    //address of operator - &

    cout << "address of num is: " << &num << endl;

    int *ptr = &num;

    cout <<"value of ptr is: "<< *ptr << endl;

    cout <<"value of ptr is: "<< ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "address is: "<< p2 << endl;
    cout << "address is: "<< *p2 << endl;

    cout << "size is:"<< sizeof(num)<<endl;
    cout << "size is:"<< sizeof(ptr)<<endl;
    return 0;
}