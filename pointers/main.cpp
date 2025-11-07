#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;

    int num = 5;
    int a = num;
    a++;
    cout << num << endl;

    int *p = &num;
    cout<<"before: "<<num<<endl;
    (*p)++;
    cout<<"after: "<<num<<endl;

    // copying a pointer
    int *q = p;
    cout << p << "-" << q << endl;
    cout << *p << "-" << *q << endl;


    return 0;
}