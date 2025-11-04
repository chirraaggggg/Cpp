#include <iostream>
using namespace std;

int printSum(int arr[][3], int row, int col){
    int sum = 0;
    for(int row = 0; row<3; row++){
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}

int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printSum(arr, 3, 3);

    return 0;
}