#include <stdio.h>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void plusMinus(vector<int> arr) {
    float positiveRatio = 0.0;
    float negativeRatio = 0.0;
    float zeroRatio = 0.0;
    
    int zeroCount = 0;
    int positiveCount = 0;
    int negativeCount = 0;

    for( int i = 0; i < arr.size(); i++) {
        if(arr[i] == 0) {
            zeroCount++;
        }else if(arr[i] > 0) {
            positiveCount++;
        }else {
            negativeCount++;
        }
    }


    positiveRatio = float(positiveCount) / float(arr.size());
    negativeRatio = float(negativeCount) / float(arr.size());
    zeroRatio = float(zeroCount) / float(arr.size());
    
    cout << fixed << setprecision(6); 
    cout << positiveRatio << endl;
    cout << negativeRatio << endl;
    cout << zeroRatio << endl;


}


int main() {
    vector<int> input = {-4,3,-9,0,4,1}; 
    plusMinus(input);
}