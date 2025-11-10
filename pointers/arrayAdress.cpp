#include<iostream>
using namespace std;

int main(){
    int arr[10] = {23,122,41,67};
/*
    
    cout << "adress of first index: " << arr << endl;
    cout << "adress of first index: " << &arr[0] << endl;
    cout << arr[0]<<endl;
    cout << "value at 0th index" << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr) + 1 << endl;
    cout << arr[2] << endl;
    cout << *(arr+2) << endl;


    int i=3;
    cout<<i[arr]<<endl; */


    int temp[10];
    cout << sizeof(temp)<<endl;
    cout << sizeof(*temp)<<endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr)<<endl;
    cout << sizeof(&ptr)<<endl;

    return 0;
}