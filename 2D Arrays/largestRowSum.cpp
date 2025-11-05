// calculate the sum of row
// find the row which has max sum


#include<iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col){

    int max = INT_MIN; //calculating the max sum of a row
    int rowIndex = -1;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
        if(sum > max){
            max = sum;
            rowIndex = row; // rowIndex wo hoga jispe loop chal rha hai
        }
    }
    cout << "maximum sum is: " << max << endl;
    return row;
}
int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    largestRowSum(arr, 3,3);

    return 0;
}