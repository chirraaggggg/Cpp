#include<iostream>
using namespace std;

int sumofdigits(int n){
    int sum = 0;
    while(n>0){
        int lastdigit = n%10;
        n/=10;
        sum += lastdigit;
    }
    return sum;
}
int main(){
    cout << sumofdigits(145);

    return 0;
}