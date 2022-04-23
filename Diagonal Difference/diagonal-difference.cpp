#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int result = 0;

    for (int i = 0; i < arr.size(); i++) {
        // cout << arr.at(i).at(i) << " " << endl;
        cout << arr.at(i).at(arr.size() - i - 1) << " " << endl;


        result += arr.at(i).at(i);
        result -= arr.at(i).at(arr.size() - i - 1);
    }

    return abs(result);
}


int main() {


    vector<vector<int>> input = {{11,2,4},{4,5,6},{10,8,-12}}; 
    cout << diagonalDifference(input);
}