#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){
    vector<int>result;
    
    for(int col=0; col < mCols; col++){
        if(col&1){
            // odd index -> bottom to top
            for(int row = nRows - 1; row >= 0; row--){
                result.push_back(arr[row][col]);
            }
        }
        else{
            // 0 or even index -> top to bototm
            for(int row = 0; row < nRows; row++){
                result.push_back(arr[row][col]);
            }
        }
    }
    return result;
}
int main() {
    vector<vector<int>> matrix {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    auto wave = wavePrint(matrix, matrix.size(), matrix[0].size());

    for (auto val : wave) {
        cout << val << " ";
    }

    return 0;
}