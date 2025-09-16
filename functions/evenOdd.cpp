#include <iostream>
using namespace std;

bool isEven(int a){
    if(a%2 != 0){
        return false;
    }
    return true;
}
int main(){
    int num;
    cin >> num;

    int ans = isEven(num);
    if (isEven(num)){
        cout << "number is even" <<endl;
    }
    else{
        cout <<"number is odd"<<endl;
    }
}