#include <iostream>
using namespace std;

int minOfTwo(int a, int b){
    if (a>b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    cout << minOfTwo(10, 5);

    return 0;
}