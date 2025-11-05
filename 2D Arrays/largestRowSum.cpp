#include<iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col){

    int max = INT_MIN;

    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
        if(sum > max){
            max = sum;
        }
    }
    cout << "maximum sum is: " << max << endl;
}