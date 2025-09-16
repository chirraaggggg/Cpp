#include <iostream>
using namespace std;

int main(){

    int ch = '2';

    switch(ch){
        case 1: cout << "first" << endl;
                break;
        case 2: cout << "second" << endl;
                break;
        default: cout << "it is default" << endl;
    }
return 0;
}