#include <iostream>                                                  // predefined function = mini = min(mini, arr[i]);
#include <climits>
using namespace std;

int getMin(int arr[], int size){
    int min = INT_MAX;

    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cin >> n;

    int arr[10];

    //taking array input
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << "minimum element of the array is: " << getMin(arr,n) << endl;
}

// learning: if given a name to a variable in one function then we cannot repeat it in another function
// like size is akready used in getMax() so cannot it again it main().