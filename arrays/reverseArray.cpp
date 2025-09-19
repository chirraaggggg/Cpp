#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[6] = {1, 4, 0, 5, -2, 15};
    reverse(arr, 6);
    printArray(arr,6);
    return 0;
}