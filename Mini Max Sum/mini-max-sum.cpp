#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void miniMaxSum(vector<int> arr) {
    long miniMin = 0;
    long miniMax = 0;

    long minValueInArr = LONG_MAX;
    long maxValueInArr = LONG_MIN;

    for (int i = 0; i < arr.size(); i++) {
        maxValueInArr = max(maxValueInArr, long(arr[i]));
        minValueInArr = min(minValueInArr, long(arr[i]));
    }


    bool alreadySkipMin = false;
    bool alreadySkipMax = false;

    for (int i = 0; i < arr.size(); i++) {
        if(long(arr[i]) == maxValueInArr && !alreadySkipMax) {
            alreadySkipMax = true;
        }else {
            miniMin += arr[i];
        }
        if(long(arr[i]) == minValueInArr && !alreadySkipMin) {            
            alreadySkipMin = true;
        }else {
            miniMax += arr[i];
        }
    }

    cout << miniMin << " " << miniMax <<endl;
}

int main() {
    vector<int> input = {5,5,5,5,5};
    miniMaxSum(input);
}