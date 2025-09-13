#include <iostream>
using namespace std;

bool checkPalindrome( char a[], int n){
    int s = 0;
    int e = n -1;

    while(s<=e){
        if(a[s] != a[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main(){
    char a[100];
    cout << "enter a string: ";
    cin >> a;
    int len = strlen(a);
    cout << "Palindrome: " << checkPalindrome(a, len) << endl;
    return 0;
}