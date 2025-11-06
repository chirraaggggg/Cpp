#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1)
    return false;

    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;

    if(isPrime(n)){
        cout << "prime" << endl;
    }
    else{
        cout<<"not prime"<< endl;
    }
    int count = 0;
        for(int i = 2; i<n; i++){
            if(isPrime(i))
            count++;
        }
        cout << "Number of primes less than " << n << " is " << count << "." << endl;

        return count;
}

// this give tle